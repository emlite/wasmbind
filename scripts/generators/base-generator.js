import { cpp, fixIdent, argtypeFix, variantsOf, argDecl } from "../utils.js";

export function emitAttr(
  attr,
  owner,
  isStatic = false,
  parent0,
  isInterface = false
) {
  const H = [],
    S = [];
  const type = cpp(attr.idlType);
  const staticKw = isStatic ? "static " : "";
  const constQual = isStatic ? "" : " const";

  let parent = parent0 ? parent0 : "emlite::Val";

  if (isInterface) {
    if (isStatic)
      H.push(
        `    /// Getter of the \`${attr.name}\` static attribute.`,
        `    /// [\`${owner}.${attr.name}\`](https://developer.mozilla.org/en-US/docs/Web/API/${owner}/${attr.name})`
      );
    else
      H.push(
        `    /// Getter of the \`${attr.name}\` attribute.`,
        `    /// [\`${owner}.${attr.name}\`](https://developer.mozilla.org/en-US/docs/Web/API/${owner}/${attr.name})`
      );
  }
  H.push(
    `    [[nodiscard]] ${staticKw}${type} ${fixIdent(attr.name)}()${constQual};`
  );

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
      if (isInterface)
        H.push(
          `    /// Setter of the \`${attr.name}\` attribute.`,
          `    /// [\`${owner}.${attr.name}\`](https://developer.mozilla.org/en-US/docs/Web/API/${owner}/${attr.name})`
        );
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

export function emitOp(op, owner, isStatic = false, parent0) {
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

    H.push(
      `    /// The ${op.name} method.`,
      `    /// [\`${owner}.${op.name}\`](https://developer.mozilla.org/en-US/docs/Web/API/${owner}/${op.name})`
    );
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

export function emitCtor(ctor, owner, parent) {
  const variants = variantsOf(ctor.arguments);
  const H = [];
  const S = [];

  for (const v of variants) {
    const declHdr = argDecl(v);
    const declSrc = declHdr;
    const callArgs = v.map((a) => fixIdent(a.name)).join(", ");

    H.push(
      `    /// The \`new ${owner}(..)\` constructor, creating a new ${owner} instance`
    );
    H.push(`    ${owner}(${declHdr});`);

    S.push(
      `${owner}::${owner}(${declSrc}) : ${parent}(emlite::Val::global("${owner}").new_(${callArgs})) {}`,
      ""
    );
  }
  return { H, S };
}
