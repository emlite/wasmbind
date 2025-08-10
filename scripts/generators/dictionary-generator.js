import { emittedDicts, dictOwner } from "../globals.js";
import { emitAttr } from "./base-generator.js";
import { OUT_INC, OUT_SRC } from "../utils.js";
import { writeFileSync, mkdirSync } from "fs";
import path from "path";

export function embedDict(dict, hdr, src, ownerName) {
  if (emittedDicts.has(dict.name)) return;
  emittedDicts.add(dict.name);
  
  if (!dictOwner.has(dict.name)) {
    dictOwner.set(dict.name, `${ownerName}.hpp`);
  }
  
  // Determine the parent class
  const parentClass = dict.inheritance || "emlite::Val";
  
  hdr.push(
    `/// Dictionary type ${dict.name}`,
    `/// [\`${dict.name}\`](https://developer.mozilla.org/en-US/docs/Web/API/${dict.name})`,
    `class ${dict.name} : public ${parentClass} {`,
    `  explicit ${dict.name}(Handle h) noexcept;`,
    "public:",
    `    static ${dict.name} take_ownership(Handle h) noexcept;`,
    `    explicit ${dict.name}(const emlite::Val &val) noexcept;`,
    `    ${dict.name}() noexcept;`,
    `    [[nodiscard]] ${dict.name} clone() const noexcept;`
  );
  
  // Generate constructors with proper parent class initialization
  const parentInit = dict.inheritance ? dict.inheritance : "emlite::Val";
  
  src.push(
    `${dict.name}::${dict.name}(Handle h) noexcept : ${parentInit}(emlite::Val::take_ownership(h)) {}`,
    `${dict.name} ${dict.name}::take_ownership(Handle h) noexcept {
        return ${dict.name}(h);
    }`,
    `${dict.name}::${dict.name}(const emlite::Val &val) noexcept: ${parentInit}(val) {}`,
    `${dict.name}::${dict.name}() noexcept: ${parentInit}(emlite::Val::object()) {}`,
    `${dict.name} ${dict.name}::clone() const noexcept { return *this; }`,
    ""
  );
  
  // Generate getters/setters for dictionary members
  dict.members.forEach((m) => {
    const { H, S } = emitAttr(m, dict.name);
    hdr.push(...H);
    src.push(...S);
  });
  
  hdr.push("};", "");
}

export function embedLocalDictionaries(localDicts, hdr, src, ownerName) {
  // Sort dictionaries by dependency order to avoid forward reference issues
  const sortedDicts = sortDictsByDependencies(localDicts);
  
  sortedDicts.forEach((dict) => {
    embedDict(dict, hdr, src, ownerName);
  });
}

function sortDictsByDependencies(dicts) {
  const dictMap = new Map();
  const dependsOn = new Map();
  
  // Build lookup maps
  dicts.forEach(dict => {
    dictMap.set(dict.name, dict);
    dependsOn.set(dict.name, new Set());
  });
  
  // Find dependencies between local dictionaries
  dicts.forEach(dict => {
    const deps = dependsOn.get(dict.name);
    
    // Add inheritance dependency
    if (dict.inheritance && dictMap.has(dict.inheritance)) {
      deps.add(dict.inheritance);
    }
    
    // Add member type dependencies
    dict.members.forEach(member => {
      // Simple dependency extraction - this could be enhanced
      if (member.idlType && typeof member.idlType === 'string') {
        if (dictMap.has(member.idlType)) {
          deps.add(member.idlType);
        }
      }
    });
  });
  
  // Topological sort
  const result = [];
  const visited = new Set();
  const temp = new Set();
  
  function visit(dictName) {
    if (temp.has(dictName)) {
      // Circular dependency - just proceed
      return;
    }
    if (visited.has(dictName)) return;
    
    temp.add(dictName);
    const deps = dependsOn.get(dictName) || new Set();
    for (const dep of deps) {
      visit(dep);
    }
    temp.delete(dictName);
    visited.add(dictName);
    result.push(dictMap.get(dictName));
  }
  
  dicts.forEach(dict => {
    if (!visited.has(dict.name)) {
      visit(dict.name);
    }
  });
  
  return result;
}

export function generateDictionary(dictName, dict, dependencies = null) {
  if (emittedDicts.has(dictName)) return;
  
  const { fwd = new Set(), srcInc = new Set(), hdrInc = new Set() } = dependencies || {};
  
  // Build header file
  const hdr = [];
  hdr.push(
    "#pragma once",
    "",
    "#include <emlite/emlite.hpp>",
    "#include <jsbind/jsbind.hpp>",
    "#include \"enums.hpp\"",
  );
  
  // Add includes for parent class if needed
  if (dict.inheritance && dict.inheritance !== "emlite::Val") {
    hdr.push(`#include "${dict.inheritance}.hpp"`);
  }
  
  // Add other header includes
  hdrInc.forEach(inc => {
    hdr.push(`#include ${inc}`);
  });
  
  hdr.push("", "namespace webbind {", "");
  
  // Forward declarations
  fwd.forEach(type => {
    hdr.push(`class ${type};`);
  });
  if (fwd.size > 0) hdr.push("");
  
  // Generate the dictionary in header
  const dictHdr = [];
  const dictSrc = [];
  embedDict(dict, dictHdr, dictSrc, dictName);
  hdr.push(...dictHdr);
  
  hdr.push("} // namespace webbind");
  
  // Build source file
  const src = [];
  src.push(
    `#include "webbind/${dictName}.hpp"`,
    
  );

  srcInc.forEach(inc => {
    src.push(`#include "webbind/${inc}"`);
  });
  src.push(
    "",
    "using emlite::Val;",
    "namespace webbind {",
    ""
  );
  
  // Add dictionary implementation
  src.push(...dictSrc);
  
  src.push("", "} // namespace webbind");
  
  // Ensure directories exist
  mkdirSync(OUT_INC, { recursive: true });
  mkdirSync(OUT_SRC, { recursive: true });
  
  // Write the files
  writeFileSync(path.join(OUT_INC, `${dictName}.hpp`), hdr.join("\n"));
  writeFileSync(path.join(OUT_SRC, `${dictName}.cpp`), src.join("\n"));
  
  console.log(`Generated dictionary: ${dictName}`);
}