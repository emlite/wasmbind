import {
  flat,
  cpp,
  writePair,
  fixIdent,
  argtypeFix,
  variantsOf,
  argDecl,
} from "./utils.js";
import {
  emittedDicts,
  dictOwner,
  enums,
  typedefs,
  callbacks,
} from "./globals.js";

function emitAttr(attr, owner, isStatic = false, parent0) {
  const H = [],
    S = [];
  const type = cpp(attr.idlType);
  const staticKw = isStatic ? "static " : "";
  const constQual = isStatic ? "" : " const";

  let parent = parent0 ? parent0 : "emlite::Val";

  H.push(`    ${staticKw}${type} ${fixIdent(attr.name)}()${constQual};`);

  if (isStatic) {
    S.push(
      `${type} ${owner}::${fixIdent(attr.name)}() {`,
      `    return emlite::Val::global("${owner.toLowerCase()}").get("${
        attr.name
      }").as<${type}>();`,
      `}`,
      ""
    );
  } else {
    S.push(
      `${type} ${owner}::${fixIdent(attr.name)}() const {`,
      `    return ${parent}::get("${attr.name}").as<${type}>();`,
      `}`,
      ""
    );

    if (!attr.readonly) {
      H.push(`    void ${fixIdent(attr.name)}(${argtypeFix(type)} value);`);
      S.push(
        `void ${owner}::${fixIdent(attr.name)}(${argtypeFix(type)} value) {`,
        `    ${parent}::set("${attr.name}", value);`,
        `}`,
        ""
      );
    }
  }
  return { H, S };
}

function emitOp(op, owner, isStatic = false, parent0) {
  const H = [],
    S = [];
  const parent = parent0 ? parent0 : "emlite::Val";
  if (!op.name) return { H, S };
  const ret = cpp(op.idlType || "undefined");
  const cppName = fixIdent(op.name);
  const variants = variantsOf(op.arguments);
  const staticKw = isStatic ? "static " : "";

  for (const v of variants) {
    const declHdr = argDecl(v);
    const declSrc = declHdr;
    const callArgs = v.map((a) => fixIdent(a.name)).join(", ");
    const callExpr = isStatic
      ? `emlite::Val::global("${owner.toLowerCase()}").call("${op.name}"${
          callArgs ? ", " + callArgs : ""
        })`
      : `${parent}::call("${op.name}"${callArgs ? ", " + callArgs : ""})`;

    H.push(`    ${staticKw}${ret} ${cppName}(${declHdr});`);

    S.push(
      `${ret} ${owner}::${cppName}(${declSrc}) {`,
      `    return ${callExpr}.as<${ret}>();`,
      `}`,
      ""
    );
  }
  return { H, S };
}

function emitCtor(ctor, owner, parent) {
  const variants = variantsOf(ctor.arguments);
  const H = [];
  const S = [];

  for (const v of variants) {
    const declHdr = argDecl(v);
    const declSrc = declHdr;
    const callArgs = v.map((a) => fixIdent(a.name)).join(", ");

    H.push(`    ${owner}(${declHdr});`);

    S.push(
      `${owner}::${owner}(${declSrc}) : ${parent}(emlite::Val::global("${owner}").new_(${callArgs})) {}`,
      ""
    );
  }
  return { H, S };
}

function embedDict(dict, hdr, src, ownerName) {
  if (emittedDicts.has(dict.name)) return;
  emittedDicts.add(dict.name);
  if (!dictOwner.has(dict.name)) {
    dictOwner.set(dict.name, `${ownerName}.hpp`);
  }
  hdr.push(
    `class ${dict.name} : public emlite::Val {`,
    `  explicit ${dict.name}(Handle h) noexcept;`,
    "public:",
    `    static ${dict.name} take_ownership(Handle h) noexcept;`,
    `    explicit ${dict.name}(const emlite::Val &val) noexcept;`,
    `    ${dict.name}() noexcept;`,
    `    ${dict.name} clone() const noexcept;`
  );
  src.push(
    `${dict.name}::${dict.name}(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}`,
    `${dict.name} ${dict.name}::take_ownership(Handle h) noexcept {
        return ${dict.name}(h);
    }`,
    `${dict.name}::${dict.name}(const emlite::Val &val) noexcept: emlite::Val(val) {}`,
    `${dict.name}::${dict.name}() noexcept: emlite::Val(emlite::Val::object()) {}`,
    `${dict.name} ${dict.name}::clone() const noexcept { return *this; }`,
    ""
  );
  dict.members.forEach((m) => {
    const { H, S } = emitAttr(m, dict.name);
    hdr.push(...H);
    src.push(...S);
  });
  hdr.push("};", "");
}

function refNames(member) {
  const out = new Set();
  const scan = (t) => {
    if (!t) return;

    if (Array.isArray(t)) return t.forEach(scan);

    if (typeof t === "object" && t.generic && t.idlType) {
      if (Array.isArray(t.idlType)) t.idlType.forEach(scan);
      else scan(t.idlType);
    }

    const n = flat(t).n;
    if (
      /^(undefined|any|object|Promise|DOMString|USVString|ByteString|CSSOMString|boolean)$/.test(
        n
      ) ||
      /long|short|float|double/.test(n) ||
      n.startsWith("__")
    )
      return;

    out.add(n);

    if (typeof t === "object" && t.idlType) scan(t.idlType);
  };

  if (member.type === "attribute") scan(member.idlType);
  else if (member.type === "operation") {
    scan(member.idlType);
    member.arguments.forEach((a) => scan(a.idlType));
  }
  return out;
}

export function generate(specAst) {
  const interfaces = new Map();
  const mixins = new Map();
  const includeRel = [];
  const dicts = new Map();
  const namespaces = [];

  for (const ast of Object.values(specAst)) {
    for (const def of ast) {
      switch (def.type) {
        case "interface": {
          const rec = interfaces.get(def.name) || {
            partials: [],
            includes: [],
          };
          if (def.partial) rec.partials.push(def);
          else rec.base = def;
          interfaces.set(def.name, rec);
          break;
        }
        case "interface mixin":
          mixins.set(def.name, def);
          break;
        case "includes":
          includeRel.push({ target: def.target, mixin: def.includes });
          break;
        case "dictionary":
          dicts.set(def.name, def);
          break;
        case "enum":
          enums.set(def.name, def);
          break;
        case "namespace":
          namespaces.push(def);
          break;
        case "callback":
        case "callback interface":
          callbacks.add(def.name);
          break;
        case "typedef":
          typedefs.set(def.name, def.idlType);
          break;
      }
    }
  }

  {
    const hdr = ["\n"];
    const src = ["\n"];

    for (const e of enums.values()) {
      hdr.push(`class ${e.name} : public emlite::Val {`);
      hdr.push(`  explicit ${e.name}(Handle h) noexcept;`);
      src.push(
        `${e.name}::${e.name}(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}`
      );
      hdr.push("public:");
      hdr.push(`   explicit ${e.name}(const emlite::Val &v) noexcept;`);
      src.push(
        `${e.name}::${e.name}(const emlite::Val &v) noexcept : emlite::Val(v) {}`
      );
      hdr.push(`  static ${e.name} take_ownership(Handle h) noexcept;`);
      hdr.push(`    ${e.name} clone() const noexcept;`);
      src.push(
        `${e.name} ${e.name}::take_ownership(Handle h) noexcept { return ${e.name}(h); }`
      );
      src.push(`${e.name} ${e.name}::clone() const noexcept { return *this; }`);
      for (const v of e.values) {
        hdr.push(`  static const ${e.name} ${fixIdent(v.value)}();`);
      }
      hdr.push("};", "");
    }

    for (const e of enums.values()) {
      for (const v of e.values) {
        src.push(
          `const ${e.name} ${e.name}::${fixIdent(v.value)}(){ return ${e.name}(emlite::Val("${
            v.value
          }")); };`
        );
      }
    }

    writePair("enums", hdr, src);
  }

  includeRel.forEach(({ target, mixin }) => {
    const rec = interfaces.get(target);
    if (rec) rec.includes.push(mixin);
  });

  for (const [name, rec] of interfaces) {
    const mem = new Map();
    const cons = new Map();
    const addM = (m) => mem.set(`${m.type}:${m.name}`, m);
    const addC = (c) => cons.set(c.name, c);

    if (rec.base) {
      rec.base.members.forEach(addM);
      rec.base.constants?.forEach(addC);
    }
    rec.partials.forEach((p) => {
      p.members.forEach(addM);
      p.constants?.forEach(addC);
    });
    rec.includes.forEach((mn) => {
      const mx = mixins.get(mn);
      if (mx) {
        mx.members.forEach(addM);
        mx.constants?.forEach(addC);
      }
    });

    rec.members = [...mem.values()];
    rec.consts = [...cons.values()];
    interfaces.set(name, rec);
  }

  for (const [iname, rec] of interfaces) {
    const hdr = ["\n"],
      src = ["\n"];
    let parent = rec.base?.inheritance || null;

    const fwd = new Set();
    const srcInc = new Set();
    const hdrInc = new Set(parent ? [`"${parent}.hpp"`] : []);
    const localEnums = new Set();
    const localDicts = [];

    rec.members.forEach((m) => {
      refNames(m).forEach((tn) => {
        if (dicts.has(tn)) {
          if (dictOwner.has(tn)) {
            const hdrFile = dictOwner.get(tn);
            hdrInc.add(`"${hdrFile}"`);
            srcInc.add(hdrFile);
          } else {
            // not sure how to deal with these!
            fwd.add(tn);
            localDicts.push(dicts.get(tn));
          }
          return;
        }
        if (enums.has(tn)) {
          localEnums.add(enums.get(tn));
          return;
        }
        if (interfaces.has(tn) && tn !== parent) {
          // not sure how to deal with these!
          fwd.add(tn);
          srcInc.add(`${tn}.hpp`);
        }
      });
    });

    localDicts.forEach((d) => {
      d.members.forEach((dm) => {
        refNames(dm).forEach((tn) => {
          if (dicts.has(tn)) {
            const hdrFile = dictOwner.get(tn);
            if (hdrFile) {
              hdrInc.push(hdrFile);
              srcInc.add(hdrFile);
            }
            return;
          }
          if (interfaces.has(tn) && tn !== parent) {
            fwd.add(tn);
            srcInc.add(`${tn}.hpp`);
          }
        });
      });
    });

    localDicts.forEach((d) => embedDict(d, hdr, src, iname));

    hdr.push(
      parent
        ? `class ${iname} : public ${parent} {`
        : `class ${iname} : public emlite::Val {`
    );

    if (!parent) parent = "emlite::Val";

    hdr.push(`    explicit ${iname}(Handle h) noexcept;\n`);
    hdr.push("public:");
    hdr.push(`    explicit ${iname}(const emlite::Val &val) noexcept;`);
    hdr.push(`    static ${iname} take_ownership(Handle h) noexcept;\n`);
    hdr.push(`    ${iname} clone() const noexcept;`);
    src.push(`${iname} ${iname}::take_ownership(Handle h) noexcept {
        return ${iname}(h);
    }`);
    src.push(`${iname} ${iname}::clone() const noexcept { return *this; }`);
    src.push(
      `${iname}::${iname}(Handle h) noexcept : ${parent}(emlite::Val::take_ownership(h)) {}`
    );
    src.push(
      `${iname}::${iname}(const emlite::Val &val) noexcept: ${parent}(val) {}`,
      ""
    );
    src.push("");

    rec.consts.forEach((c) =>
      hdr.push(
        `    static constexpr ${cpp(c.idlType)} ${c.name} = ${c.value.value};`
      )
    );
    rec.members.forEach((m) => {
      const isStatic = m.static === true || m.special === "static";
      if (m.type === "attribute") {
        const { H, S } = emitAttr(m, iname, isStatic, parent);
        hdr.push(...H);
        src.push(...S);
      } else if (m.type === "operation") {
        const { H, S } = emitOp(m, iname, isStatic, parent);
        hdr.push(...H);
        src.push(...S);
      } else if (
        m.type === "constructor" ||
        (m.type === "operation" && m.special === "constructor")
      ) {
        const { H, S } = emitCtor(m, iname, parent);
        hdr.push(...H);
        src.push(...S);
      }
    });
    hdr.push("};", "");

    writePair(iname, hdr, src);
  }
  for (const ns of namespaces) {
    const hdr = ["\n", `namespace ${ns.name} {`];
    const src = ["\n"];

    ns.members
      .filter((m) => m.type === "operation")
      .forEach((op) => {
        const ret = cpp(op.idlType || "undefined");
        const cppName = fixIdent(op.name);
        for (const v of variantsOf(op.arguments)) {
          const declHdr = argDecl(v);
          const declSrc = declHdr;
          const callArgs = v.map((a) => fixIdent(a.name)).join(", ");

          hdr.push(`    ${ret} ${cppName}(${declHdr});`);

          const callExpr =
            `emlite::Val::global("${ns.name.toLowerCase()}").call("${
              op.name
            }"` + (callArgs ? `, ${callArgs})` : ")");

          src.push(
            `${ret} ${ns.name}::${cppName}(${declSrc}) {`,
            `    return ${callExpr}.as<${ret}>();`,
            `}`,
            ""
          );
        }
      });

    hdr.push(`} // namespace ${ns.name}`, "");

    writePair(ns.name, hdr, src);
  }
}
