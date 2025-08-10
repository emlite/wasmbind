import { writeFileSync, mkdirSync } from "fs";
import path from "path";
import { fixIdent, OUT_INC, OUT_SRC } from "../utils.js";
import { enums } from "../globals.js";

export function generateEnums() {
  // Build header file
  const hdr = [];
  hdr.push(
    "#pragma once",
    "",
    "#include <emlite/emlite.hpp>",
    "#include <jsbind/jsbind.hpp>",
    "",
    "namespace webbind {",
    ""
  );

  for (const e of enums.values()) {
    hdr.push(`/// Enum type ${e.name}`);
    hdr.push(`/// [\`${e.name}\`](https://developer.mozilla.org/en-US/docs/Web/API/${e.name})`);
    hdr.push(`class ${e.name} : public emlite::Val {`);
    hdr.push(`  explicit ${e.name}(Handle h) noexcept;`);
    hdr.push("public:");
    hdr.push(`   explicit ${e.name}(const emlite::Val &v) noexcept;`);
    hdr.push(`  static ${e.name} take_ownership(Handle h) noexcept;`);
    hdr.push(`    [[nodiscard]] ${e.name} clone() const noexcept;`);
    
    // Generate enum values
    for (const v of e.values) {
      hdr.push(`  static const ${e.name} ${fixIdent(v.value)}();`);
    }
    hdr.push("};", "");
  }
  
  hdr.push("} // namespace webbind");

  // Build source file
  const src = [];
  src.push(
    "#include \"webbind/enums.hpp\"",
    "",
    "using emlite::Val;",
    "",
    "namespace webbind {",
    ""
  );

  for (const e of enums.values()) {
    src.push(
      `${e.name}::${e.name}(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}`
    );
    src.push(
      `${e.name}::${e.name}(const emlite::Val &v) noexcept : emlite::Val(v) {}`
    );
    src.push(
      `${e.name} ${e.name}::take_ownership(Handle h) noexcept { return ${e.name}(h); }`
    );
    src.push(`${e.name} ${e.name}::clone() const noexcept { return *this; }`);
    src.push("");
  }

  // Generate enum value implementations
  for (const e of enums.values()) {
    for (const v of e.values) {
      src.push(
        `const ${e.name} ${e.name}::${fixIdent(v.value)}(){ return ${
          e.name
        }(emlite::Val("${v.value}")); };`
      );
    }
    src.push("");
  }
  
  src.push("} // namespace webbind");

  // Ensure directories exist
  mkdirSync(OUT_INC, { recursive: true });
  mkdirSync(OUT_SRC, { recursive: true });
  
  // Write the files
  writeFileSync(path.join(OUT_INC, "enums.hpp"), hdr.join("\n"));
  writeFileSync(path.join(OUT_SRC, "enums.cpp"), src.join("\n"));
  
  console.log("Generated enums");
}