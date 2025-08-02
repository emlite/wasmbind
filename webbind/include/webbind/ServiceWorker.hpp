#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "EventTarget.hpp"
#include "MessagePort.hpp"
#include "enums.hpp"


/// The ServiceWorker class.
/// [`ServiceWorker`](https://developer.mozilla.org/en-US/docs/Web/API/ServiceWorker)
class ServiceWorker : public EventTarget {
    explicit ServiceWorker(Handle h) noexcept;

public:
    explicit ServiceWorker(const emlite::Val &val) noexcept;
    static ServiceWorker take_ownership(Handle h) noexcept;

    [[nodiscard]] ServiceWorker clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// Getter of the `scriptURL` attribute.
    /// [`ServiceWorker.scriptURL`](https://developer.mozilla.org/en-US/docs/Web/API/ServiceWorker/scriptURL)
    [[nodiscard]] jsbind::String scriptURL() const;
    /// Getter of the `state` attribute.
    /// [`ServiceWorker.state`](https://developer.mozilla.org/en-US/docs/Web/API/ServiceWorker/state)
    [[nodiscard]] ServiceWorkerState state() const;
    /// The postMessage method.
    /// [`ServiceWorker.postMessage`](https://developer.mozilla.org/en-US/docs/Web/API/ServiceWorker/postMessage)
    jsbind::Undefined postMessage(const jsbind::Any& message);
    /// The postMessage method.
    /// [`ServiceWorker.postMessage`](https://developer.mozilla.org/en-US/docs/Web/API/ServiceWorker/postMessage)
    jsbind::Undefined postMessage(const jsbind::Any& message, const StructuredSerializeOptions& options);
    /// Getter of the `onstatechange` attribute.
    /// [`ServiceWorker.onstatechange`](https://developer.mozilla.org/en-US/docs/Web/API/ServiceWorker/onstatechange)
    [[nodiscard]] jsbind::Any onstatechange() const;
    /// Setter of the `onstatechange` attribute.
    /// [`ServiceWorker.onstatechange`](https://developer.mozilla.org/en-US/docs/Web/API/ServiceWorker/onstatechange)
    void onstatechange(const jsbind::Any& value);
    /// Getter of the `onerror` attribute.
    /// [`ServiceWorker.onerror`](https://developer.mozilla.org/en-US/docs/Web/API/ServiceWorker/onerror)
    [[nodiscard]] jsbind::Any onerror() const;
    /// Setter of the `onerror` attribute.
    /// [`ServiceWorker.onerror`](https://developer.mozilla.org/en-US/docs/Web/API/ServiceWorker/onerror)
    void onerror(const jsbind::Any& value);
};

