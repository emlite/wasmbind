# Emscripten support

To use wasmbind with emscripten, you can use it with standalone emscripten or with modularized emscripten.

## Modularized emscripten
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

set(DEFAULT_LINK_FLAGS "-sERROR_ON_UNDEFINED_SYMBOLS=0 -sEXPORTED_RUNTIME_METHODS=wasmTable,UTF8ToString,lengthBytesUTF8,stringToUTF8 -sEXPORTED_FUNCTIONS=_malloc,_main -Wl,--strip-all")
add_executable(button button.cpp)
target_link_libraries(button PRIVATE webbind::webbind)
set_target_properties(button PROPERTIES LINKER_LANGUAGE CXX SUFFIX .mjs LINK_FLAGS ${DEFAULT_LINK_FLAGS})
```

Notice we specify the suffix to .mjs.

You would then invoke the build with emcmake or by passing the Emscripten.cmake toolchain file that's distributed with emscripten (usually at $EMSCRIPTEN_ROOT/cmake/Modules/Platform/Emscripten.cmake).

Then in your html file:
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
        import initModule from "./bin/examples/button.mjs";
        window.onload = async () => {
            const mymain = await initModule();
        };
    </script>
</body>
</html>
```

## Standalone emscripten
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

set(EMSCRIPTEN_STANDALONE_WASM ON CACHE BOOL " " FORCE)
FetchContent_MakeAvailable(wasmbind)

set(DEFAULT_LINK_FLAGS "-sERROR_ON_UNDEFINED_SYMBOLS=0 -Wl,--no-entry,--allow-undefined,--export-dynamic,--export=main,--export-table,--export-memory,--import-memory,--strip-all")
add_executable(button button.cpp)
target_link_libraries(button PRIVATE webbind::webbind)
set_target_properties(button PROPERTIES LINKER_LANGUAGE CXX SUFFIX .wasm LINK_FLAGS ${DEFAULT_LINK_FLAGS})
```

Then invoke the build with emcmake or by passing the Emscripten.cmake toolchain file that's distributed with emscripten (usually at $EMSCRIPTEN_ROOT/cmake/Modules/Platform/Emscripten.cmake).

In your index.html, we'll need a wasi shim:
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
