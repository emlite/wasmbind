import * as webref from "@webref/idl";
import { generate } from "./gen.js";

async function main() {
  const specAst = await webref.parseAll();
  generate(specAst);
  console.log("Generation done!");
}

main().catch((err) => console.log("Generation failed ", err));
