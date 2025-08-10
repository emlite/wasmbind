import { writeFileSync, mkdirSync } from "fs";
import path from "path";
import { cpp, fixIdent, variantsOf, argDecl, OUT_INC, OUT_SRC } from "../utils.js";

export function generateNamespace(ns, dependencies) {
  const { fwd, srcInc, hdrInc } = dependencies;

  // Build header file
  const hdr = [];
  hdr.push(
    "#pragma once",
    "",
    "#include <emlite/emlite.hpp>",
    "#include <jsbind/jsbind.hpp>",
    ""
  );

  // Add other header includes
  hdrInc.forEach(inc => {
    hdr.push(`#include ${inc}`);
  });

  hdr.push(
    "",
    "namespace webbind {",
    ""
  );

  // Forward declarations
  fwd.forEach(type => {
    hdr.push(`class ${type};`);
  });
  if (fwd.size > 0) hdr.push("");
  
  hdr.push(`/// Namespace ${ns.name}`);
  hdr.push('/// [`' + ns.name + '`](https://developer.mozilla.org/en-US/docs/Web/API/' + ns.name + ')');
  hdr.push(`namespace ${ns.name} {`);
  
  // Build source file
  const src = [];
  src.push(
    `#include "webbind/${ns.name}.hpp"`
  );

  // Add source includes
  srcInc.forEach(inc => {
    src.push(`#include "webbind/${inc}"`);
  });

  src.push(
    "",
    "using emlite::Val;",
    "",
    "namespace webbind {",
    "",
    `namespace ${ns.name} {`,
    ""
  );

  ns.members
    .filter((m) => m.type === "operation")
    .forEach((op) => {
      const ret = cpp(op.idlType || "undefined");
      const cppName = fixIdent(op.name);
      
      for (const v of variantsOf(op.arguments)) {
        const declHdr = argDecl(v);
        const declSrc = declHdr;
        const callArgs = v.map((a) => fixIdent(a.name)).join(", ");

        hdr.push(`    /// The ${op.name} function.`);
        hdr.push('    /// [`' + ns.name + '.' + op.name + '`](https://developer.mozilla.org/en-US/docs/Web/API/' + ns.name + '/' + op.name + ')');
        hdr.push(`    ${ret} ${cppName}(${declHdr});`);

        const callExpr =
          `emlite::Val::global("${ns.name.toLowerCase()}").call("${
            op.name
          }"` + (callArgs ? `, ${callArgs})` : ")");

        src.push(
          `${ret} ${cppName}(${declSrc}) {`,
          `    return ${callExpr}.as<${ret}>();`,
          `}`,
          ""
        );
      }
    });

  hdr.push(`} // namespace ${ns.name}`, "", "} // namespace webbind");
  src.push(`} // namespace ${ns.name}`, "", "} // namespace webbind");

  // Ensure directories exist
  mkdirSync(OUT_INC, { recursive: true });
  mkdirSync(OUT_SRC, { recursive: true });
  
  // Write the files
  writeFileSync(path.join(OUT_INC, `${ns.name}.hpp`), hdr.join("\n"));
  writeFileSync(path.join(OUT_SRC, `${ns.name}.cpp`), src.join("\n"));
  
  console.log(`Generated namespace: ${ns.name}`);
}