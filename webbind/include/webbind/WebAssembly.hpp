#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>


namespace webbind {

class Module;
class Instance;
class Response;
class WebAssemblyInstantiatedSource;

/// Namespace WebAssembly
/// [`WebAssembly`](https://developer.mozilla.org/en-US/docs/Web/API/WebAssembly)
namespace WebAssembly {
    /// The validate function.
    /// [`WebAssembly.validate`](https://developer.mozilla.org/en-US/docs/Web/API/WebAssembly/validate)
    bool validate(const jsbind::Any& bytes);
    /// The compile function.
    /// [`WebAssembly.compile`](https://developer.mozilla.org/en-US/docs/Web/API/WebAssembly/compile)
    jsbind::Promise<Module> compile(const jsbind::Any& bytes);
    /// The instantiate function.
    /// [`WebAssembly.instantiate`](https://developer.mozilla.org/en-US/docs/Web/API/WebAssembly/instantiate)
    jsbind::Promise<Instance> instantiate(const Module& moduleObject);
    /// The instantiate function.
    /// [`WebAssembly.instantiate`](https://developer.mozilla.org/en-US/docs/Web/API/WebAssembly/instantiate)
    jsbind::Promise<Instance> instantiate(const Module& moduleObject, const jsbind::Object& importObject);
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