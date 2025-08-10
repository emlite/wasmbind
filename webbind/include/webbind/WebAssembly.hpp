#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>


namespace webbind {

class Module;
class Response;
class WebAssemblyInstantiatedSource;

/// Namespace WebAssembly
/// [`WebAssembly`](https://developer.mozilla.org/en-US/docs/Web/API/WebAssembly)
namespace WebAssembly {
    /// The compileStreaming function.
    /// [`WebAssembly.compileStreaming`](https://developer.mozilla.org/en-US/docs/Web/API/WebAssembly/compileStreaming)
    jsbind::Promise<Module> compileStreaming(const jsbind::Promise<Response>& source);
    /// The instantiateStreaming function.
    /// [`WebAssembly.instantiateStreaming`](https://developer.mozilla.org/en-US/docs/Web/API/WebAssembly/instantiateStreaming)
    jsbind::Promise<WebAssemblyInstantiatedSource> instantiateStreaming(const jsbind::Promise<Response>& source);
    /// The instantiateStreaming function.
    /// [`WebAssembly.instantiateStreaming`](https://developer.mozilla.org/en-US/docs/Web/API/WebAssembly/instantiateStreaming)
    jsbind::Promise<WebAssemblyInstantiatedSource> instantiateStreaming(const jsbind::Promise<Response>& source, const jsbind::Object& importObject);
} // namespace WebAssembly

} // namespace webbind