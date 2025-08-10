#include <webbind/WebAssembly.hpp>
#include <webbind/Module.hpp>
#include <webbind/Instance.hpp>
#include <webbind/Response.hpp>
#include <webbind/WebAssemblyInstantiatedSource.hpp>

namespace webbind {

namespace WebAssembly {

bool validate(const jsbind::Any& bytes) {
    return emlite::Val::global("webassembly").call("validate", bytes).as<bool>();
}

jsbind::Promise<Module> compile(const jsbind::Any& bytes) {
    return emlite::Val::global("webassembly").call("compile", bytes).as<jsbind::Promise<Module>>();
}

jsbind::Promise<Instance> instantiate(const Module& moduleObject) {
    return emlite::Val::global("webassembly").call("instantiate", moduleObject).as<jsbind::Promise<Instance>>();
}

jsbind::Promise<Instance> instantiate(const Module& moduleObject, const jsbind::Object& importObject) {
    return emlite::Val::global("webassembly").call("instantiate", moduleObject, importObject).as<jsbind::Promise<Instance>>();
}

jsbind::Promise<Module> compileStreaming(const jsbind::Promise<Response>& source) {
    return emlite::Val::global("webassembly").call("compileStreaming", source).as<jsbind::Promise<Module>>();
}

jsbind::Promise<WebAssemblyInstantiatedSource> instantiateStreaming(const jsbind::Promise<Response>& source) {
    return emlite::Val::global("webassembly").call("instantiateStreaming", source).as<jsbind::Promise<WebAssemblyInstantiatedSource>>();
}

jsbind::Promise<WebAssemblyInstantiatedSource> instantiateStreaming(const jsbind::Promise<Response>& source, const jsbind::Object& importObject) {
    return emlite::Val::global("webassembly").call("instantiateStreaming", source, importObject).as<jsbind::Promise<WebAssemblyInstantiatedSource>>();
}

} // namespace WebAssembly

} // namespace webbind