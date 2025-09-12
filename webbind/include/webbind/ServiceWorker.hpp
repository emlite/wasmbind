#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "EventTarget.hpp"
#include "enums.hpp"

namespace webbind {

class StructuredSerializeOptions;

/// Interface ServiceWorker
/// [`ServiceWorker`](https://developer.mozilla.org/en-US/docs/Web/API/ServiceWorker)
class ServiceWorker : public EventTarget {
    explicit ServiceWorker(Handle h) noexcept;
public:
    explicit ServiceWorker(const emlite::Val &val) noexcept;
    static ServiceWorker take_ownership(Handle h) noexcept;
    [[nodiscard]] ServiceWorker clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// [`ServiceWorker.scriptURL`](https://developer.mozilla.org/en-US/docs/Web/API/ServiceWorker/scriptURL)
    /// [`ServiceWorker.scriptURL`](https://developer.mozilla.org/en-US/docs/Web/API/ServiceWorker/scriptURL)
    [[nodiscard]] jsbind::String scriptURL() const;
    /// [`ServiceWorker.state`](https://developer.mozilla.org/en-US/docs/Web/API/ServiceWorker/state)
    /// [`ServiceWorker.state`](https://developer.mozilla.org/en-US/docs/Web/API/ServiceWorker/state)
    [[nodiscard]] ServiceWorkerState state() const;
    /// The postMessage method.
    /// [`ServiceWorker.postMessage`](https://developer.mozilla.org/en-US/docs/Web/API/ServiceWorker/postMessage)
    jsbind::Undefined postMessage(const jsbind::Any& message, const jsbind::TypedArray<jsbind::Object>& transfer);
    /// The postMessage method.
    /// [`ServiceWorker.postMessage`](https://developer.mozilla.org/en-US/docs/Web/API/ServiceWorker/postMessage)
    jsbind::Undefined postMessage(const jsbind::Any& message);
    /// The postMessage method.
    /// [`ServiceWorker.postMessage`](https://developer.mozilla.org/en-US/docs/Web/API/ServiceWorker/postMessage)
    jsbind::Undefined postMessage(const jsbind::Any& message, const StructuredSerializeOptions& options);
    /// [`ServiceWorker.onstatechange`](https://developer.mozilla.org/en-US/docs/Web/API/ServiceWorker/onstatechange)
    /// [`ServiceWorker.onstatechange`](https://developer.mozilla.org/en-US/docs/Web/API/ServiceWorker/onstatechange)
    [[nodiscard]] jsbind::Any onstatechange() const;
    /// Setter of the `onstatechange` attribute.
    /// [`ServiceWorker.onstatechange`](https://developer.mozilla.org/en-US/docs/Web/API/ServiceWorker/onstatechange)
    void onstatechange(const jsbind::Any& value);
    /// [`ServiceWorker.onerror`](https://developer.mozilla.org/en-US/docs/Web/API/ServiceWorker/onerror)
    /// [`ServiceWorker.onerror`](https://developer.mozilla.org/en-US/docs/Web/API/ServiceWorker/onerror)
    [[nodiscard]] jsbind::Any onerror() const;
    /// Setter of the `onerror` attribute.
    /// [`ServiceWorker.onerror`](https://developer.mozilla.org/en-US/docs/Web/API/ServiceWorker/onerror)
    void onerror(const jsbind::Any& value);
};

} // namespace webbind