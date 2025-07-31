#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "EventTarget.hpp"
#include "MessagePort.hpp"
#include "enums.hpp"


/// The Worker class.
/// [`Worker`](https://developer.mozilla.org/en-US/docs/Web/API/Worker)
class Worker : public EventTarget {
    explicit Worker(Handle h) noexcept;

public:
    explicit Worker(const emlite::Val &val) noexcept;
    static Worker take_ownership(Handle h) noexcept;

    [[nodiscard]] Worker clone() const noexcept;
    /// The `new Worker(..)` constructor, creating a new Worker instance
    Worker(const jsbind::Any& scriptURL);
    /// The `new Worker(..)` constructor, creating a new Worker instance
    Worker(const jsbind::Any& scriptURL, const jsbind::Any& options);
    /// The terminate method.
    /// [`Worker.terminate`](https://developer.mozilla.org/en-US/docs/Web/API/Worker/terminate)
    jsbind::Undefined terminate();
    /// The postMessage method.
    /// [`Worker.postMessage`](https://developer.mozilla.org/en-US/docs/Web/API/Worker/postMessage)
    jsbind::Undefined postMessage(const jsbind::Any& message);
    /// The postMessage method.
    /// [`Worker.postMessage`](https://developer.mozilla.org/en-US/docs/Web/API/Worker/postMessage)
    jsbind::Undefined postMessage(const jsbind::Any& message, const StructuredSerializeOptions& options);
    /// Getter of the `onerror` attribute.
    /// [`Worker.onerror`](https://developer.mozilla.org/en-US/docs/Web/API/Worker/onerror)
    [[nodiscard]] jsbind::Any onerror() const;
    /// Setter of the `onerror` attribute.
    /// [`Worker.onerror`](https://developer.mozilla.org/en-US/docs/Web/API/Worker/onerror)
    void onerror(const jsbind::Any& value);
    /// Getter of the `onmessage` attribute.
    /// [`Worker.onmessage`](https://developer.mozilla.org/en-US/docs/Web/API/Worker/onmessage)
    [[nodiscard]] jsbind::Any onmessage() const;
    /// Setter of the `onmessage` attribute.
    /// [`Worker.onmessage`](https://developer.mozilla.org/en-US/docs/Web/API/Worker/onmessage)
    void onmessage(const jsbind::Any& value);
    /// Getter of the `onmessageerror` attribute.
    /// [`Worker.onmessageerror`](https://developer.mozilla.org/en-US/docs/Web/API/Worker/onmessageerror)
    [[nodiscard]] jsbind::Any onmessageerror() const;
    /// Setter of the `onmessageerror` attribute.
    /// [`Worker.onmessageerror`](https://developer.mozilla.org/en-US/docs/Web/API/Worker/onmessageerror)
    void onmessageerror(const jsbind::Any& value);
};

