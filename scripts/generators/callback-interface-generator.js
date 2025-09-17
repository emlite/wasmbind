import { writeFileSync, mkdirSync } from "fs";
import path from "path";
import { cpp, OUT_INC, OUT_SRC, argDecl, argtypeFix, variantsOf } from "../utils.js";

// Emit a thin wrapper type for WebIDL `callback interface` definitions
// The wrapper derives from emlite::Val and dispatches operations either to:
// - the underlying function value (when the wrapped value is a Function), or
// - the named operation on the object (when the wrapped value is an object with that method)
export function generateCallbackInterface(name, def, dependencies) {
  const { fwd, srcInc, hdrInc } = dependencies;

  // Header
  const hdr = [];
  hdr.push(
    "#pragma once",
    "",
    "#include <emlite/emlite.hpp>",
    "#include <jsbind/jsbind.hpp>",
    '#include "enums.hpp"',
    "",
    "namespace webbind {",
    ""
  );

  // Forward declarations for referenced types
  fwd.forEach((t) => {
    if (t !== name) hdr.push(`class ${t};`);
  });
  if (fwd.size > 0) hdr.push("");

  hdr.push(
    `/// Callback interface ${name}`,
    `/// Generated wrapper for WebIDL \`callback interface ${name}\``,
    `class ${name} : public emlite::Val {`,
    `    explicit ${name}(Handle h) noexcept;`,
    "public:",
    `    explicit ${name}(const emlite::Val &val) noexcept;`,
    `    static ${name} take_ownership(Handle h) noexcept;`,
    `    [[nodiscard]] ${name} clone() const noexcept;`,
    ""
  );

  // Converting constructors from jsbind::Function and typed Fn signatures
  // For each operation, add an overload for jsbind::Function::Fn<Ret(Args...)>
  const ops = (def.members || []).filter((m) => m.type === "operation");
  if (ops.length > 0) {
    hdr.push(`    // Converting constructors from functions`);
    hdr.push(`    ${name}(const jsbind::Function &fn) noexcept;`);
    ops.forEach((op) => {
      const ret = cpp(op.idlType || "undefined");
      const decl = op.arguments || [];
      const argTypes = decl.map((a) => cpp(a.idlType)).join(", ");
      hdr.push(
        `    ${name}(const jsbind::Function::Fn<${ret}(${argTypes})> &fn) noexcept;`
      );
    });
    hdr.push("");
  }

  // Methods for each operation (const member functions)
  ops.forEach((op) => {
    const ret = cpp(op.idlType || "undefined");
    const declHdr = argDecl(op.arguments || []);
    hdr.push(
      `    [[nodiscard]] ${ret} ${op.name}(${declHdr}) const;`
    );
  });

  hdr.push("};", "", "} // namespace webbind");

  // Source
  const src = [];
  src.push(`#include <webbind/${name}.hpp>`);
  srcInc.forEach((inc) => {
    if (inc !== `${name}.hpp`) src.push(`#include <webbind/${inc}>`);
  });
  src.push("", "namespace webbind {", "");

  src.push(
    `${name} ${name}::take_ownership(Handle h) noexcept {\n    return ${name}(h);\n}`,
    ""
  );
  src.push(`${name} ${name}::clone() const noexcept { return *this; }`, "");
  src.push(
    `${name}::${name}(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}`,
    ""
  );
  src.push(
    `${name}::${name}(const emlite::Val &val) noexcept: emlite::Val(val) {}`,
    ""
  );

  if (ops.length > 0) {
    src.push(
      `${name}::${name}(const jsbind::Function &fn) noexcept : emlite::Val(fn) {}`,
      ""
    );
    ops.forEach((op) => {
      const ret = cpp(op.idlType || "undefined");
      const args = op.arguments || [];
      const argTypes = args.map((a) => cpp(a.idlType)).join(", ");
      src.push(
        `${name}::${name}(const jsbind::Function::Fn<${ret}(${argTypes})> &fn) noexcept : emlite::Val(static_cast<jsbind::Function>(fn)) {}`,
        ""
      );
    });
  }

  ops.forEach((op) => {
    const ret = cpp(op.idlType || "undefined");
    const declSrc = argDecl(op.arguments || []);
    const callArgs = (op.arguments || []).map((a) => a.name).join(", ");
    // Dispatch: if this is a function, invoke it; otherwise, call the named operation
    src.push(
      `${ret} ${name}::${op.name}(${declSrc}) const {`,
      `    if (is_function()) {`,
      `        return jsbind::Function(*this)(${callArgs}).as<${ret}>();`,
      `    }`,
      `    return emlite::Val::call("${op.name}"${callArgs ? ", " + callArgs : ""}).as<${ret}>();`,
      `}`,
      ""
    );
  });

  src.push("", "} // namespace webbind");

  // Write files
  mkdirSync(OUT_INC, { recursive: true });
  mkdirSync(OUT_SRC, { recursive: true });
  writeFileSync(path.join(OUT_INC, `${name}.hpp`), hdr.join("\n"));
  writeFileSync(path.join(OUT_SRC, `${name}.cpp`), src.join("\n"));

  console.log(`Generated callback interface: ${name}`);
}

