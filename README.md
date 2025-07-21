# Wasmbind

Wasmbind is a C++ projects that offers bindngs to Web APIs for use with wasm. It's backend agnostic, and should work with wasm32-unknown-unknown, wasm32-wasi, wasm32-wasip1 and emscripten. It depends on the [emlite](https://github.com/emlite/emlite-cpp) library to make this happen.
Wasmbind consists of 2 sub-libraries:
- jsbind
- webbind

jsbind currently provides the minimal set of basic JS types needed for webbind. More types are planned later.

webbind wraps the webidl api in C++. And it currently wraps most of the DOM API's.

## Requirements
- Clang capable of targeting wasm32 (check with `clang --print-targets`). If you've installed clang via a package manager, you might need a libclang-rt-dev-wasm32.
Clang bundled with emscripten or the wasi-sdk is by default capable of targeting wasm32.
- CMake > 3.20.

There are some dev dependencies which are used for code generation and testing, and that's nodejs and npm.
Running `npm install` in the root of the repo will install packages required for codegen and testing. The @webref/idl package is used for code generation from webidl if needed. http-server starts a server and serve the this directory (which contains an index.html file).

## Example
```c++
#include <jsbind/jsbind.hpp>
#include <webbind/webbind.hpp>

using jsbind::Console;
using jsbind::Function;

int main() {
    Console con;
    auto document = window().document();
    auto bodies   = document.getElementsByTagName("body");
    if (bodies.length() == 0) {
        con.log("I Ain't got Nobody!");
        return -1;
    }
    auto body   = bodies.item(0);
    auto button = document.createElement("BUTTON")
                      .as<HTMLButtonElement>();
    button.textContent("Click me");
    button.addEventListener(
        "click",
        Function::Fn<void(PointerEvent)>([=](auto e) {
            con.log(e.clientX());
        })
    );
    body.appendChild(button);
    auto style = button.style();
    style.setProperty("color", "red");
    style.setProperty("background-color", "#aaf");
    style.setProperty("border", "solid");
}
```

## Usage
The easiest is to use CMake's FetchContent:
In your CMakeLists.txt:
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

# if targeting wasm32-unknown-unknown (freestanding)
set(EMLITE_USE_DLMALLOC ON CACHE BOOL " " FORCE)
FetchContent_MakeAvailable(wasmbind)

add_executable(main src/main.cpp)
target_link_libraries(main PRIVATE webbind::webbind)
set_target_properties(main PROPERTIES LINKER_LANGUAGE CXX SUFFIX .wasm LINK_FLAGS "-Wl,--no-entry,--allow-undefined,--export=main,--export-table,--import-memory,--export-memory,--strip-all")
```

Please also refer to the [README.browser.md](https://github.com/emlite/emlite-cpp/blob/main/README.browser.md) in the emlite-cpp repo on how to integrate with a web bundler (webpack).

You can then build your project using CMake.
```bash
cmake -Bbin -DCMAKE_TOOLCHAIN_FILE=./cmake/freestanding.cmake && cmake --build bin
```
Note that this repo contains a cmake toolchain files for wasm32-unknown-unknown (freestanding), and for wasi-libc and wasi-sysroot, which you're free to use as well. If you prefer to use emscripten or wasi-sdk, it's advisable to use the cmake toolchain file provided by them directly.

To be able to view the resulting wasm in your browser, you will need the [emlite](https://github.com/emlite/emlite-js) package. You can try it quickly using the unpkg cdn:
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
        import { Emlite } from "https://unpkg.com/emlite";

        window.onload = async () => {
            const emlite = new Emlite();
            const bytes = await emlite.readFile(new URL("./bin/examples/button.wasm", import.meta.url));
            let wasm = await WebAssembly.compile(bytes);
            let inst = await WebAssembly.instantiate(wasm, {
                "env": emlite.env,
            });
            emlite.setExports(inst.exports);
            inst.exports.main();
        };
    </script>
</body>
</html>
```
This grabs emlite via unpkg. It's advisable however to use a bundler for the web, something like webpack for example. Please refer to the emlite readme on how to integrate it in a node-based project. You could also just vendor the emlite.js file in your project if you prefer.
Also note that loading wasm in the browser requires an http server. You can use python's http.server `python3 -m http.server`, or you can use the npm http-server package.

## Development
The C++ code which binds the DOM is generated from webidl definitions via the @webref/idl npm package. This happens in the scripts subdirectory.
The initial generation wasn't perfect as the webidl code itself has cyclic dependencies, which means that the generated C++ code required extra-handling post-generation.
Hopefully the webidl spec isn't as fast-moving, as such not much changing needs to happen there.
The extra-handling consists of providing forward-declarations in the headers, and the proper includes in the source files.
This typically takes a few hours for someone familiar with the spec.

As such, the current script just regenerates the corresponding C++ code while ignoring the headers and forward declarations.
The presence of forward declarations means we can't enjoy default arguments!
However to work around that, we use function overloading!
To run the script if you wanted to, you will have to run:
```bash
# after cloning this repo and cd'ing into it
npm install
npm run regen
```
Currently the parser script generates mostly everything, some tweaks are required to provide a `Window window()` method and its implementation.
