import fs from "fs";
import path from "path";
import { fileURLToPath } from "url";
import {
  builtinNominals,
  cppKeywords,
  missingDictFallback,
} from "./ignored.js";
import { enums, typedefs, callbacks } from "./globals.js";

const __filename = fileURLToPath(import.meta.url);
const __dirname = path.dirname(__filename);

export const OUT_INC = path.resolve(__dirname, "../webbind/include/webbind");
export const OUT_SRC = path.resolve(__dirname, "../webbind/src");

function pair(name) {
  return {
    h: path.join(OUT_INC, `${name}.hpp`),
    c: path.join(OUT_SRC, `${name}.cpp`),
  };
}

export function writePair(name, hdrLines, srcLines) {
  const header = hdrLines.join("\n");
  const { h, c } = pair(name);
  fs.appendFileSync(h, header + "\n", "utf8");
  fs.appendFileSync(c, srcLines.join("\n") + "\n", "utf8");
//   console.log(`Parsed ${name}`);
}

export function flat(t) {
  if (!t) return { n: "__unk", unsigned: false };

  if (typeof t === "string") {
    let unsigned = false;
    let base = t.trim();

    base = base.replace(/^unrestricted /, "");

    if (base.startsWith("unsigned ")) {
      unsigned = true;
      base = base.replace(/^unsigned /, "");
    }
    return { n: base.trim(), unsigned };
  }

  if (Array.isArray(t)) return { n: "__union", unsigned: false };

  if (t.generic) {
    return {
      n: t.generic,
      inner: t.idlType,
      unsigned: false,
    };
  }

  if (t.idlType) {
    const inner = flat(t.idlType);
    return { n: inner.n, unsigned: !!t.unsigned || inner.unsigned };
  }

  return { n: "__unk", unsigned: false };
}

export function cpp(idlType) {
  const { n, unsigned } = flat(idlType);
  const jsbindMap = {
    undefined: "jsbind::Undefined",
    DOMString: "jsbind::DOMString",
    USVString: "jsbind::USVString",
    ByteString: "jsbind::ByteString",
    CSSOMString: "jsbind::CSSOMString",
    Promise: "jsbind::Promise",
    object: "jsbind::Object",
    any: "jsbind::Any",
    Uint8Array: "jsbind::Uint8Array",
    Int8Array: "jsbind::Int8Array",
    Uint32Array: "jsbind::Uint32Array",
    Int32Array: "jsbind::Int32Array",
    Float32Array: "jsbind::Float32Array",
    Float64Array: "jsbind::Float64Array",
    ArrayBuffer: "jsbind::ArrayBuffer",
    DataView: "jsbind::DataView",
  };

  if (missingDictFallback.has(n) || builtinNominals.has(n))
    return "jsbind::Any";
  if (n.includes("EventInit")) return "jsbind::Any";

  if (jsbindMap[n]) return jsbindMap[n];

  if (typeof idlType === "object" && idlType.generic) {
    const inner = idlType.idlType;

    const elem = Array.isArray(inner) ? inner[0] : inner;

    if (idlType.generic === "sequence") {
      return `jsbind::Sequence<${cpp(elem)}>`;
    }

    if (idlType.generic === "FrozenArray") {
      return `jsbind::FrozenArray<${cpp(elem)}>`;
    }

    if (idlType.generic === "ObservableArray") {
      return `jsbind::ObservableArray<${cpp(elem)}>`;
    }

    if (idlType.generic === "record") {
      const [k, v] = inner;
      return `jsbind::Record<${cpp(k)}, ${cpp(v)}>`;
    }
  }
  if (["__union", "__unk"].includes(n)) return "jsbind::Any";
  if (n === "boolean") return "bool";
  if (n === "byte") return "char";
  if (n === "bigint") return "long long";
  if (n === "octet") return "unsigned char";
  if (n === "short" || n === "long" || n === "int")
    return (unsigned ? "unsigned " : "") + n;

  if (n === "double" || n === "float") return n;
  if (enums.has(n)) return n;
  if (callbacks.has(n)) return "jsbind::Function";
  if (typedefs.has(n) || n === "__union") return "jsbind::Any";

  return n;
}

const primitiveRE = /\b(?:long|short|float|double|bool|char|int)\b/;
export function argtypeFix(type) {
  return primitiveRE.test(type) ? type : `const ${type}&`;
}

export function fixIdent(name) {
  if (cppKeywords.has(name)) return name + "_";
  if (name === "BroadcastChannel" || name === "SharedWorker") return name + "_";
  if (name === "") return "none";
  let out = name.replace(/[/\-+]/g, "_");
  if (/^[0-9]/.test(out)) out = "_" + out;
  return out;
}
