import { writeFileSync, mkdirSync } from "fs";
import path from "path";
import { cpp, OUT_INC, OUT_SRC } from "../utils.js";
import { emitAttr, emitOp, emitCtor } from "./base-generator.js";
import { embedLocalDictionaries } from "./dictionary-generator.js";

export function generateInterface(interfaceName, interfaceRec, dependencies) {
  const { fwd, srcInc, hdrInc, localEnums, localDicts } = dependencies;

  let parent = interfaceRec.base?.inheritance || null;

  // Build header file
  const hdr = [];
  hdr.push(
    "#pragma once",
    "",
    "#include <emlite/emlite.hpp>",
    "#include <jsbind/jsbind.hpp>",
    '#include "enums.hpp"'
  );

  // Add parent include if needed
  if (parent) {
    hdr.push(`#include "${parent}.hpp"`);
  }

  // Add other header includes
  hdrInc.forEach((inc) => {
    if (inc !== `"${parent}.hpp"`) {
      hdr.push(`#include ${inc}`);
    }
  });

  // Add enums include if needed
  const usesEnums = localEnums.size > 0;
  if (usesEnums) {
    hdr.push('#include "enums.hpp"');
  }

  hdr.push("", "namespace webbind {", "");

  // Forward declarations
  fwd.forEach((type) => {
    hdr.push(`class ${type};`);
  });
  if (fwd.size > 0) hdr.push("");

  // Embed local dictionaries first (they might be referenced by the interface)
  const dictHdr = [];
  const dictSrc = [];
  embedLocalDictionaries(localDicts, dictHdr, dictSrc, interfaceName);
  hdr.push(...dictHdr);

  // Generate the interface documentation and class declaration
  hdr.push(
    `/// Interface ${interfaceName}`,
    `/// [\`${interfaceName}\`](https://developer.mozilla.org/en-US/docs/Web/API/${interfaceName})`
  );
  hdr.push(
    parent
      ? `class ${interfaceName} : public ${parent} {`
      : `class ${interfaceName} : public emlite::Val {`
  );

  if (!parent) parent = "emlite::Val";

  // Generate constructors and basic methods
  hdr.push(`    explicit ${interfaceName}(Handle h) noexcept;`);
  hdr.push("public:");
  hdr.push(`    explicit ${interfaceName}(const emlite::Val &val) noexcept;`);
  hdr.push(`    static ${interfaceName} take_ownership(Handle h) noexcept;`);
  hdr.push(`    [[nodiscard]] ${interfaceName} clone() const noexcept;`);
  hdr.push(`    [[nodiscard]] static emlite::Val instance() noexcept;`);

  // Generate constants
  interfaceRec.consts.forEach((c) =>
    hdr.push(
      `    /// Constant ${c.name}`,
      `    static constexpr ${cpp(c.idlType)} ${c.name} = ${c.value.value};`
    )
  );

  // Collect member implementations for source file
  const memberSrc = [];

  // Generate members (attributes, operations, constructors)
  interfaceRec.members.forEach((m) => {
    const isStatic = m.static === true || m.special === "static";
    if (m.type === "attribute") {
      const { H, S } = emitAttr(m, interfaceName, isStatic, parent, true);
      hdr.push(...H);
      memberSrc.push(...S);
    } else if (m.type === "operation") {
      const { H, S } = emitOp(m, interfaceName, isStatic, parent);
      hdr.push(...H);
      memberSrc.push(...S);
    } else if (
      m.type === "constructor" ||
      (m.type === "operation" && m.special === "constructor")
    ) {
      const { H, S } = emitCtor(m, interfaceName, parent);
      hdr.push(...H);
      memberSrc.push(...S);
    }
  });

  hdr.push("};", "", "} // namespace webbind");

  // Build source file
  const src = [];
  src.push(`#include <webbind/${interfaceName}.hpp>`);

  // Add source includes
  srcInc.forEach((inc) => {
    src.push(`#include <webbind/${inc}>`);
  });

  src.push("", "namespace webbind {", "");

  // Add dictionary implementations
  src.push(...dictSrc);

  // Add basic interface implementation
  src.push(`${interfaceName} ${interfaceName}::take_ownership(Handle h) noexcept {
        return ${interfaceName}(h);
    }`);
  src.push(
    `${interfaceName} ${interfaceName}::clone() const noexcept { return *this; }`
  );
  src.push(
    `emlite::Val ${interfaceName}::instance() noexcept { return emlite::Val::global("${interfaceName}"); }`
  );
  src.push(
    `${interfaceName}::${interfaceName}(Handle h) noexcept : ${parent}(emlite::Val::take_ownership(h)) {}`
  );
  src.push(
    `${interfaceName}::${interfaceName}(const emlite::Val &val) noexcept: ${parent}(val) {}`,
    ""
  );

  // Add member implementations
  src.push(...memberSrc);

  src.push("", "} // namespace webbind");

  // Ensure directories exist
  mkdirSync(OUT_INC, { recursive: true });
  mkdirSync(OUT_SRC, { recursive: true });

  // Write the files
  writeFileSync(path.join(OUT_INC, `${interfaceName}.hpp`), hdr.join("\n"));
  writeFileSync(path.join(OUT_SRC, `${interfaceName}.cpp`), src.join("\n"));

  console.log(`Generated interface: ${interfaceName}`);
}
