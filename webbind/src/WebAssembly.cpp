#include <webbind/WebAssembly.hpp>
#include <webbind/Instance.hpp>
#include <webbind/Module.hpp>


bool WebAssembly::validate(const jsbind::Any& bytes) {
    return emlite::Val::global("webassembly").call("validate", bytes).as<bool>();
}

jsbind::Promise<Module> WebAssembly::compile(const jsbind::Any& bytes) {
    return emlite::Val::global("webassembly").call("compile", bytes).as<jsbind::Promise<Module>>();
}

jsbind::Promise<jsbind::Any> WebAssembly::instantiate(const jsbind::Any& bytes) {
    return emlite::Val::global("webassembly").call("instantiate", bytes).as<jsbind::Promise<jsbind::Any>>();
}

jsbind::Promise<jsbind::Any> WebAssembly::instantiate(const jsbind::Any& bytes, const jsbind::Object& importObject) {
    return emlite::Val::global("webassembly").call("instantiate", bytes, importObject).as<jsbind::Promise<jsbind::Any>>();
}

jsbind::Promise<Instance> WebAssembly::instantiate(const Module& moduleObject) {
    return emlite::Val::global("webassembly").call("instantiate", moduleObject).as<jsbind::Promise<Instance>>();
}

jsbind::Promise<Instance> WebAssembly::instantiate(const Module& moduleObject, const jsbind::Object& importObject) {
    return emlite::Val::global("webassembly").call("instantiate", moduleObject, importObject).as<jsbind::Promise<Instance>>();
}



jsbind::Promise<Module> WebAssembly::compileStreaming(const jsbind::Promise<Response>& source) {
    return emlite::Val::global("webassembly").call("compileStreaming", source).as<jsbind::Promise<Module>>();
}

jsbind::Promise<jsbind::Any> WebAssembly::instantiateStreaming(const jsbind::Promise<Response>& source) {
    return emlite::Val::global("webassembly").call("instantiateStreaming", source).as<jsbind::Promise<jsbind::Any>>();
}

jsbind::Promise<jsbind::Any> WebAssembly::instantiateStreaming(const jsbind::Promise<Response>& source, const jsbind::Object& importObject) {
    return emlite::Val::global("webassembly").call("instantiateStreaming", source, importObject).as<jsbind::Promise<jsbind::Any>>();
}

