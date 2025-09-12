#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "WorkerGlobalScope.hpp"

namespace webbind {

class StructuredSerializeOptions;

/// Interface DedicatedWorkerGlobalScope
/// [`DedicatedWorkerGlobalScope`](https://developer.mozilla.org/en-US/docs/Web/API/DedicatedWorkerGlobalScope)
class DedicatedWorkerGlobalScope : public WorkerGlobalScope {
    explicit DedicatedWorkerGlobalScope(Handle h) noexcept;
public:
    explicit DedicatedWorkerGlobalScope(const emlite::Val &val) noexcept;
    static DedicatedWorkerGlobalScope take_ownership(Handle h) noexcept;
    [[nodiscard]] DedicatedWorkerGlobalScope clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// [`DedicatedWorkerGlobalScope.name`](https://developer.mozilla.org/en-US/docs/Web/API/DedicatedWorkerGlobalScope/name)
    /// [`DedicatedWorkerGlobalScope.name`](https://developer.mozilla.org/en-US/docs/Web/API/DedicatedWorkerGlobalScope/name)
    [[nodiscard]] jsbind::String name() const;
    /// The postMessage method.
    /// [`DedicatedWorkerGlobalScope.postMessage`](https://developer.mozilla.org/en-US/docs/Web/API/DedicatedWorkerGlobalScope/postMessage)
    jsbind::Undefined postMessage(const jsbind::Any& message, const jsbind::TypedArray<jsbind::Object>& transfer);
    /// The postMessage method.
    /// [`DedicatedWorkerGlobalScope.postMessage`](https://developer.mozilla.org/en-US/docs/Web/API/DedicatedWorkerGlobalScope/postMessage)
    jsbind::Undefined postMessage(const jsbind::Any& message);
    /// The postMessage method.
    /// [`DedicatedWorkerGlobalScope.postMessage`](https://developer.mozilla.org/en-US/docs/Web/API/DedicatedWorkerGlobalScope/postMessage)
    jsbind::Undefined postMessage(const jsbind::Any& message, const StructuredSerializeOptions& options);
    /// The close method.
    /// [`DedicatedWorkerGlobalScope.close`](https://developer.mozilla.org/en-US/docs/Web/API/DedicatedWorkerGlobalScope/close)
    jsbind::Undefined close();
    /// [`DedicatedWorkerGlobalScope.onrtctransform`](https://developer.mozilla.org/en-US/docs/Web/API/DedicatedWorkerGlobalScope/onrtctransform)
    /// [`DedicatedWorkerGlobalScope.onrtctransform`](https://developer.mozilla.org/en-US/docs/Web/API/DedicatedWorkerGlobalScope/onrtctransform)
    [[nodiscard]] jsbind::Any onrtctransform() const;
    /// Setter of the `onrtctransform` attribute.
    /// [`DedicatedWorkerGlobalScope.onrtctransform`](https://developer.mozilla.org/en-US/docs/Web/API/DedicatedWorkerGlobalScope/onrtctransform)
    void onrtctransform(const jsbind::Any& value);
    /// The requestAnimationFrame method.
    /// [`DedicatedWorkerGlobalScope.requestAnimationFrame`](https://developer.mozilla.org/en-US/docs/Web/API/DedicatedWorkerGlobalScope/requestAnimationFrame)
    unsigned long requestAnimationFrame(const jsbind::Function& callback);
    /// The cancelAnimationFrame method.
    /// [`DedicatedWorkerGlobalScope.cancelAnimationFrame`](https://developer.mozilla.org/en-US/docs/Web/API/DedicatedWorkerGlobalScope/cancelAnimationFrame)
    jsbind::Undefined cancelAnimationFrame(unsigned long handle);
    /// [`DedicatedWorkerGlobalScope.onmessage`](https://developer.mozilla.org/en-US/docs/Web/API/DedicatedWorkerGlobalScope/onmessage)
    /// [`DedicatedWorkerGlobalScope.onmessage`](https://developer.mozilla.org/en-US/docs/Web/API/DedicatedWorkerGlobalScope/onmessage)
    [[nodiscard]] jsbind::Any onmessage() const;
    /// Setter of the `onmessage` attribute.
    /// [`DedicatedWorkerGlobalScope.onmessage`](https://developer.mozilla.org/en-US/docs/Web/API/DedicatedWorkerGlobalScope/onmessage)
    void onmessage(const jsbind::Any& value);
    /// [`DedicatedWorkerGlobalScope.onmessageerror`](https://developer.mozilla.org/en-US/docs/Web/API/DedicatedWorkerGlobalScope/onmessageerror)
    /// [`DedicatedWorkerGlobalScope.onmessageerror`](https://developer.mozilla.org/en-US/docs/Web/API/DedicatedWorkerGlobalScope/onmessageerror)
    [[nodiscard]] jsbind::Any onmessageerror() const;
    /// Setter of the `onmessageerror` attribute.
    /// [`DedicatedWorkerGlobalScope.onmessageerror`](https://developer.mozilla.org/en-US/docs/Web/API/DedicatedWorkerGlobalScope/onmessageerror)
    void onmessageerror(const jsbind::Any& value);
};

} // namespace webbind