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
    // Generate the C++ enum class with internal C enum
    hdr.push(`/// Enum type ${e.name}`);
    hdr.push(
      `/// [\`${e.name}\`](https://developer.mozilla.org/en-US/docs/Web/API/${e.name})`
    );
    hdr.push(`class ${e.name}: public emlite::Val {`);
    hdr.push(`  explicit ${e.name}(Handle h) noexcept;`);
    hdr.push("public:");
    hdr.push(`    enum Value {`);

    for (const v of e.values) {
      hdr.push(`        ${fixIdent(v.value).toUpperCase()},`);
    }

    hdr.push(`    };`, "");
    hdr.push("private:");
    hdr.push(`    Value value_;`, "");
    hdr.push("public:");
    hdr.push(`    ${e.name}() noexcept = delete;`);
    hdr.push(`    ${e.name}(Value v) noexcept;`);
    hdr.push(`    explicit ${e.name}(const emlite::Val& val) noexcept;`);
    hdr.push(`    static ${e.name} take_ownership(Handle h) noexcept;`);
    hdr.push(`    [[nodiscard]] ${e.name} clone() const noexcept;`);
    hdr.push("");
    hdr.push(
      `    [[nodiscard]] constexpr Value value() const noexcept { return value_; }`
    );
    hdr.push(
      `    [[nodiscard]] static Value from_string(const char *str) noexcept;`
    );
    hdr.push(
      `    [[nodiscard]] static const char* to_string(Value value_) noexcept;`
    );
    hdr.push("");
    hdr.push(`    /// Comparison operators`);
    hdr.push(
      `    [[nodiscard]] constexpr bool operator==(const ${e.name}& other) const noexcept { return value_ == other.value_; }`
    );
    hdr.push(
      `    [[nodiscard]] constexpr bool operator!=(const ${e.name}& other) const noexcept { return value_ != other.value_; }`
    );
    hdr.push(
      `    [[nodiscard]] constexpr bool operator==(Value v) const noexcept { return value_ == v; }`
    );
    hdr.push(
      `    [[nodiscard]] constexpr bool operator!=(Value v) const noexcept { return value_ != v; }`
    );
    hdr.push("");
    hdr.push("};", "");
  }

  hdr.push("} // namespace webbind");

  // Build source file
  const src = [];
  src.push("#include <webbind/enums.hpp>", "", "namespace webbind {", "");

  for (const e of enums.values()) {
    // Generate C string constructor with pattern matching (no std lib)
    src.push(
      `${e.name}::Value ${e.name}::from_string(const char* str) noexcept {`
    );
    for (let i = 0; i < e.values.length; i++) {
      const v = e.values[i];
      const condition = i === 0 ? "if" : "else if";
      src.push(`    ${condition} (__builtin_strncmp(str, "${v.value}", strlen("${v.value}"))) {`);
      src.push(`        return ${fixIdent(v.value).toUpperCase()};`);
      src.push(`    }`);
    }
    src.push(`    else {`);
    src.push(`        // Default to first value for invalid input`);
    src.push(`        return ${fixIdent(e.values[0].value).toUpperCase()};`);
    src.push(`    }`);
    src.push(`}`, "");

    src.push(
      `${e.name}::${e.name}(Value v) noexcept : emlite::Val(${e.name}::to_string(v)), value_(v) {}`
    );
    src.push(`${e.name}::${e.name}(Handle h) noexcept: emlite::Val(h) {
    value_ = ${e.name}::from_string(as<emlite::Uniq<char[]>>().get());
}`, "");
    src.push(`${e.name}::${e.name}(const emlite::Val& val) noexcept: emlite::Val(val) {
    value_ = ${e.name}::from_string(as<emlite::Uniq<char[]>>().get());
}`, "");
    src.push(
      `${e.name} ${e.name}::take_ownership(Handle h) noexcept { return ${e.name}(h); }`
    );
    src.push(`${e.name} ${e.name}::clone() const noexcept { return *this; }`);

    // Generate to_string with switch/pattern matching
    src.push(
      `const char* ${e.name}::to_string(${e.name}::Value value_) noexcept {`
    );
    src.push(`    switch (value_) {`);
    for (const v of e.values) {
      src.push(`        case ${fixIdent(v.value).toUpperCase()}:`);
      src.push(`            return "${v.value}";`);
    }
    src.push(`        default:`);
    src.push(
      `            return "${e.values[0].value}"; // fallback to first value`
    );
    src.push(`    }`);
    src.push(`}`, "");
  }

  src.push("} // namespace webbind");

  // Ensure directories exist
  mkdirSync(OUT_INC, { recursive: true });
  mkdirSync(OUT_SRC, { recursive: true });

  // Write the files
  writeFileSync(path.join(OUT_INC, "enums.hpp"), hdr.join("\n"));
  writeFileSync(path.join(OUT_SRC, "enums.cpp"), src.join("\n"));

  console.log(
    "Generated enums with C++ enum classes and pattern matching (no std lib)"
  );
}
