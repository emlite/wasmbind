import { enums, typedefs, callbacks } from "../globals.js";

export function parseSpecs(specAst) {
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

  return {
    interfaces,
    mixins,
    includeRel, 
    dicts,
    namespaces
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

  return interfaces;
}