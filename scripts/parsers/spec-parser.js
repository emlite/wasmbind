import { enums, typedefs, callbacks, callbackInterfaces } from "../globals.js";

// Expand typedefs eagerly, preserving generic wrappers by mutating idlType in place
function expandTypedefs(t, seen = new Set()) {
  if (!t) return t;

  if (typeof t === "string") {
    if (typedefs.has(t) && !seen.has(t)) {
      const next = typedefs.get(t);
      const nextSeen = new Set(seen).add(t);
      return expandTypedefs(next, nextSeen);
    }
    return t;
  }

  if (Array.isArray(t)) {
    // Union members
    return t.map((x) => expandTypedefs(x, seen));
  }

  if (typeof t === "object") {
    // Generic wrapper (sequence/Promise/record/FrozenArray/ObservableArray)
    if (t.generic && t.idlType != null) {
      const inner = Array.isArray(t.idlType)
        ? t.idlType.map((x) => expandTypedefs(x, seen))
        : expandTypedefs(t.idlType, seen);
      return { generic: t.generic, idlType: inner };
    }
    // Other wrappers with nested idlType
    if (Object.prototype.hasOwnProperty.call(t, "idlType")) {
      const inner = expandTypedefs(t.idlType, seen);
      const out = { idlType: inner };
      if (Object.prototype.hasOwnProperty.call(t, "unsigned")) out.unsigned = t.unsigned;
      return out;
    }
  }
  return t;
}

function resolveTypedefsInMember(m) {
  if (!m) return;
  if (Object.prototype.hasOwnProperty.call(m, "idlType")) {
    m.idlType = expandTypedefs(m.idlType);
  }
  if (Array.isArray(m.arguments)) {
    m.arguments.forEach((a) => {
      if (a && Object.prototype.hasOwnProperty.call(a, "idlType")) {
        a.idlType = expandTypedefs(a.idlType);
      }
    });
  }
}

export function parseSpecs(specAst) {
  const interfaces = new Map();
  const mixins = new Map();
  const includeRel = [];
  const dicts = new Map();
  const namespaces = new Map();
  // Reset/prepare callback interface registry
  callbackInterfaces.clear();

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
        case "namespace": {
          const rec = namespaces.get(def.name) || {
            partials: [],
          };
          if (def.partial) rec.partials.push(def);
          else rec.base = def;
          namespaces.set(def.name, rec);
          break;
        }
        case "callback":
          // Plain callback typedef (maps to jsbind::Function)
          callbacks.add(def.name);
          break;
        case "callback interface":
          // Store the full definition for generation later
          callbackInterfaces.set(def.name, def);
          break;
        case "typedef":
          typedefs.set(def.name, def.idlType);
          break;
      }
    }
  }

  // Eagerly resolve typedefs within dictionaries so dependency/fwd-decls see concrete types
  for (const [, def] of dicts) {
    if (Array.isArray(def.members)) {
      def.members.forEach((m) => {
        if (m && Object.prototype.hasOwnProperty.call(m, "idlType")) {
          m.idlType = expandTypedefs(m.idlType);
        }
      });
    }
  }

  // Resolve typedefs inside callback interface member signatures, after collection
  for (const [, def] of callbackInterfaces) {
    if (Array.isArray(def.members)) {
      def.members.forEach((m) => resolveTypedefsInMember(m));
    }
  }

  return {
    interfaces,
    mixins,
    includeRel,
    dicts,
    namespaces,
    callbackInterfaces,
  };
}

export function processInterfaces(interfaces, mixins, includeRel) {
  includeRel.forEach(({ target, mixin }) => {
    const rec = interfaces.get(target);
    if (rec) rec.includes.push(mixin);
  });

  for (const [name, rec] of interfaces) {
    const mem = new Map();
    const cons = new Map();
    // Build a stable key; for operations/constructors include signature to keep overloads
    const memberKey = (m) => {
      if (m.type === "operation" || m.type === "constructor") {
        const isStatic =
          m.static === true || m.special === "static" ? "static:" : "";
        const ret = m.idlType ? JSON.stringify(m.idlType) : "undefined";
        const args = (m.arguments || [])
          .map(
            (a) =>
              `${a.optional ? "?" : ""}${JSON.stringify(a.idlType)}:${a.name}`
          )
          .join(",");
        // Use name when available (constructors may have empty name)
        const nm = m.name || "<ctor>";
        return `${m.type}:${nm}:${isStatic}${ret}(${args})`;
      }
      return `${m.type}:${m.name}`;
    };
    const addM = (m) => mem.set(memberKey(m), m);
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
    // Resolve typedefs after merging to avoid collapsing distinct overload signatures
    rec.members.forEach((m) => resolveTypedefsInMember(m));
    rec.consts.forEach((c) => {
      if (c && Object.prototype.hasOwnProperty.call(c, "idlType")) {
        c.idlType = expandTypedefs(c.idlType);
      }
    });
    interfaces.set(name, rec);
  }

  return interfaces;
}

export function processNamespaces(namespaces) {
  for (const [name, rec] of namespaces) {
    const mem = new Map();
    const addM = (m) => mem.set(`${m.type}:${m.name}`, m);

    if (rec.base) {
      rec.base.members.forEach(addM);
    }
    rec.partials.forEach((p) => {
      p.members.forEach(addM);
    });

    rec.members = [...mem.values()];
    // Resolve typedefs in namespace members after merging
    rec.members.forEach((m) => resolveTypedefsInMember(m));
    rec.name = name;
    namespaces.set(name, rec);
  }

  return namespaces;
}
