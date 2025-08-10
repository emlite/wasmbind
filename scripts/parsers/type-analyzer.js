import { flat, cpp } from "../utils.js";

export function refNames(member) {
  const out = new Set();
  const scan = (t) => {
    if (!t) return;

    if (Array.isArray(t)) return t.forEach(scan);

    if (typeof t === "object" && t.generic && t.idlType) {
      if (Array.isArray(t.idlType)) t.idlType.forEach(scan);
      else scan(t.idlType);
    }

    const n = flat(t).n;
    if (cpp(t).startsWith("jsbind::")) return; // Exclude jsbind types
    if (
      /^(undefined|any|object|Promise|DOMString|USVString|ByteString|CSSOMString|boolean)$/.test(
        n
      ) ||
      /long|short|float|double|octet|byte|bigint/.test(n) ||
      n.startsWith("__")
    )
      return;

    out.add(n);

    if (typeof t === "object" && t.idlType) scan(t.idlType);
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
