import fs from "fs/promises";
import path from "path";
import { OUT_INC, OUT_SRC } from "./utils.js";

const reHeaderLine = /^\s*(#|class\s+\w+\s*;)/; // for preprocessor directives and forward decls

const ignore = new Set(["window.cpp", "window.hpp", ".clangd", "webbind.hpp"]);

async function* walk(dir) {
  for (const dirent of await fs.readdir(dir, { withFileTypes: true })) {
    const p = path.join(dir, dirent.name);
    if (dirent.isDirectory()) yield* walk(p);
    else if (dirent.isFile()) yield p;
  }
}

export async function clean() {
  const targetDirs = [OUT_INC, OUT_SRC];

  for (let dir of targetDirs) {
    for await (const file of walk(dir)) {
      if (ignore.has(path.basename(file))) continue;
      let text;
      try {
        text = await fs.readFile(file, "utf8");
      } catch {
        continue;
      }

      const lines = text.split(/\r?\n/);
      let keepTo = 0;

      while (keepTo < lines.length) {
        const ln = lines[keepTo];
        if (reHeaderLine.test(ln) || /^\s*$/.test(ln)) {
          ++keepTo;
        } else {
          break;
        }
      }

      while (keepTo > 0 && /^\s*$/.test(lines[keepTo - 1])) {
        --keepTo;
      }

      if (keepTo === lines.length) continue;

      const newContent = lines.slice(0, keepTo).join("\n") + "\n";
      await fs.writeFile(file, newContent, "utf8");
      // console.log(`Trimmed ${path.relative(dir, file)}`);
    }
  }
}
