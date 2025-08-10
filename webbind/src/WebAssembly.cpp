#include <webbind/WebAssembly.hpp>
#include <webbind/Module.hpp>
#include <webbind/Response.hpp>
#include <webbind/WebAssemblyInstantiatedSource.hpp>

using emlite::Val;

namespace webbind {

namespace WebAssembly {

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