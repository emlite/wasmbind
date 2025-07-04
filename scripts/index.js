import * as webref from "@webref/idl";
import { clean } from "./clean.js";
import { generate } from "./gen.js";

async function main() {
  await clean();
  const specAst = await webref.parseAll();
  generate(specAst);
  console.log("Generation done!");
}

main().catch((err) => console.log("Generation failed ", err));
