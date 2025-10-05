# Wasi support

To build with wasi-libc, wasi-sysroot or wasi-sdk, you would need to use a cmake toolchain file. wasi-sdk provides a toolchain file, for the others, you can find example toolchain files in the cmake directory of this repo.

You can modify your CMakeLists.txt to:
```cmake
cmake_minimum_required(VERSION 3.20)
project(projname)

include(FetchContent)

FetchContent_Declare(
    wasmbind
    GIT_REPOSITORY https://github.com/emlite/wasmbind.git
    GIT_TAG main
    GIT_SHALLOW True
)

FetchContent_MakeAvailable(wasmbind)

add_executable(main src/main.cpp)
target_link_libraries(main PRIVATE webbind::webbind)
set_target_properties(main PROPERTIES LINKER_LANGUAGE CXX SUFFIX .wasm LINK_FLAGS "-Wl,--no-entry,--allow-undefined,--export=main,--export-table,--import-memory,--export-memory,--strip-all")
```
We remove the EMLITE_USE_DLMALLOC since the wasi toolchain provides an allocator.

Invoke the build using an approprate toolchain file `-DCMAKE_TOOLCHAIN_FILE=$WASI_SDK/share/cmake/wasi-sdk.cmake`.

In your index.html, you will need a wasi shim:
```html
<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Document</title>
</head>
<body>
    <script type="module">
        import { WASI, File, OpenFile, ConsoleStdout } from "https://unpkg.com/@bjorn3/browser_wasi_shim";
        import { Emlite } from "./src/emlite.js";

        window.onload = async () => {
            let fds = [
                new OpenFile(new File([])), // 0, stdin
                ConsoleStdout.lineBuffered(msg => console.log(`[WASI stdout] ${msg}`)), // 1, stdout
                ConsoleStdout.lineBuffered(msg => console.warn(`[WASI stderr] ${msg}`)), // 2, stderr
            ];
            let wasi = new WASI([], [], fds);
            const emlite = new Emlite({
                memory: new WebAssembly.Memory({initial: 258, maximum: 258})
            });
            const bytes = await emlite.readFile(new URL("./bin/examples/button.wasm", import.meta.url));
            let wasm = await WebAssembly.compile(bytes);
            let inst = await WebAssembly.instantiate(wasm, {
                "wasi_snapshot_preview1": wasi.wasiImport,
                "env": emlite.env,
            });
            emlite.setExports(inst.exports);
            wasi.initialize(inst);
            inst.exports.main();
        };
    </script>
</body>
</html>
```