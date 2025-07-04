#include <webbind/WebAssembly.hpp>
#include <webbind/Module.hpp>


bool WebAssembly::validate(const jsbind::Any& bytes) {
    return emlite::Val::global("webassembly").call("validate", bytes).as<bool>();
}

jsbind::Promise WebAssembly::compile(const jsbind::Any& bytes) {
    return emlite::Val::global("webassembly").call("compile", bytes).as<jsbind::Promise>();
}

jsbind::Promise WebAssembly::instantiate(const jsbind::Any& bytes, const jsbind::Object& importObject) {
    return emlite::Val::global("webassembly").call("instantiate", bytes, importObject).as<jsbind::Promise>();
}

jsbind::Promise WebAssembly::instantiate(const Module& moduleObject, const jsbind::Object& importObject) {
    return emlite::Val::global("webassembly").call("instantiate", moduleObject, importObject).as<jsbind::Promise>();
}



jsbind::Promise WebAssembly::compileStreaming(const jsbind::Promise& source) {
    return emlite::Val::global("webassembly").call("compileStreaming", source).as<jsbind::Promise>();
}

jsbind::Promise WebAssembly::instantiateStreaming(const jsbind::Promise& source, const jsbind::Object& importObject) {
    return emlite::Val::global("webassembly").call("instantiateStreaming", source, importObject).as<jsbind::Promise>();
}

