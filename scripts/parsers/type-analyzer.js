import { flat, cpp } from "../utils.js";
import { typedefs } from "../globals.js";

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
  if (Array.isArray(t)) return t.map((x) => expandTypedefs(x, seen));
  if (typeof t === "object" && t.generic && t.idlType != null) {
    const inner = Array.isArray(t.idlType)
      ? t.idlType.map((x) => expandTypedefs(x, seen))
      : expandTypedefs(t.idlType, seen);
    return { ...t, idlType: inner };
  }
  if (typeof t === "object" && Object.prototype.hasOwnProperty.call(t, "idlType")) {
    return { ...t, idlType: expandTypedefs(t.idlType, seen) };
  }
  return t;
}

export function refNames(member) {
  const out = new Set();
  const scan = (t) => {
    if (!t) return;

    // Eagerly resolve typedefs before analyzing refs
    const tt = expandTypedefs(t);

    if (Array.isArray(tt)) return tt.forEach(scan);

    if (typeof tt === "object" && tt.generic && tt.idlType) {
      if (Array.isArray(tt.idlType)) tt.idlType.forEach(scan);
      else scan(tt.idlType);
    }

    const n = flat(tt).n;
    if (cpp(tt).startsWith("jsbind::")) return; // Exclude jsbind types
    if (
      /^(undefined|any|object|Promise|DOMString|USVString|ByteString|CSSOMString|boolean)$/.test(
        n
      ) ||
      /long|short|float|double|octet|byte|bigint/.test(n) ||
      n.startsWith("__")
    )
      return;

    out.add(n);

    if (typeof tt === "object" && tt.idlType) scan(tt.idlType);
  };

  if (member.type === "attribute") {
    scan(member.idlType);
  } else if (member.type === "operation") {
    scan(member.idlType);
    if (member.arguments) {
      member.arguments.forEach((a) => scan(a.idlType));
    }
  } else if (member.type === "constructor") {
    scan(member.idlType);
    if (member.arguments) {
      member.arguments.forEach((a) => scan(a.idlType));
    }
  } else if (member.type === "field") {
    scan(member.idlType);
  }
  return out;
}

export function getAllTypeRefs(members) {
  const refs = new Set();
  members.forEach((m) => {
    refNames(m).forEach((ref) => refs.add(ref));
  });
  return refs;
}
