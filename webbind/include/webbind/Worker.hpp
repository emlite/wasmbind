#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "EventTarget.hpp"

namespace webbind {

class WorkerOptions;
class StructuredSerializeOptions;

/// Interface Worker
/// [`Worker`](https://developer.mozilla.org/en-US/docs/Web/API/Worker)
class Worker : public EventTarget {
    explicit Worker(Handle h) noexcept;
public:
    explicit Worker(const emlite::Val &val) noexcept;
    static Worker take_ownership(Handle h) noexcept;
    [[nodiscard]] Worker clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// The `new Worker(..)` constructor, creating a new Worker instance
    Worker(const jsbind::Any& scriptURL);
    /// The `new Worker(..)` constructor, creating a new Worker instance
    Worker(const jsbind::Any& scriptURL, const WorkerOptions& options);
    /// The terminate method.
    /// [`Worker.terminate`](https://developer.mozilla.org/en-US/docs/Web/API/Worker/terminate)
    jsbind::Undefined terminate();
    /// The postMessage method.
    /// [`Worker.postMessage`](https://developer.mozilla.org/en-US/docs/Web/API/Worker/postMessage)
    jsbind::Undefined postMessage(const jsbind::Any& message);
    /// The postMessage method.
    /// [`Worker.postMessage`](https://developer.mozilla.org/en-US/docs/Web/API/Worker/postMessage)
    jsbind::Undefined postMessage(const jsbind::Any& message, const StructuredSerializeOptions& options);
    /// [`Worker.onerror`](https://developer.mozilla.org/en-US/docs/Web/API/Worker/onerror)
    /// [`Worker.onerror`](https://developer.mozilla.org/en-US/docs/Web/API/Worker/onerror)
    [[nodiscard]] jsbind::Any onerror() const;
    /// Setter of the `onerror` attribute.
    /// [`Worker.onerror`](https://developer.mozilla.org/en-US/docs/Web/API/Worker/onerror)
    void onerror(const jsbind::Any& value);
    /// [`Worker.onmessage`](https://developer.mozilla.org/en-US/docs/Web/API/Worker/onmessage)
    /// [`Worker.onmessage`](https://developer.mozilla.org/en-US/docs/Web/API/Worker/onmessage)
    [[nodiscard]] jsbind::Any onmessage() const;
    /// Setter of the `onmessage` attribute.
    /// [`Worker.onmessage`](https://developer.mozilla.org/en-US/docs/Web/API/Worker/onmessage)
    void onmessage(const jsbind::Any& value);
    /// [`Worker.onmessageerror`](https://developer.mozilla.org/en-US/docs/Web/API/Worker/onmessageerror)
    /// [`Worker.onmessageerror`](https://developer.mozilla.org/en-US/docs/Web/API/Worker/onmessageerror)
    [[nodiscard]] jsbind::Any onmessageerror() const;
    /// Setter of the `onmessageerror` attribute.
    /// [`Worker.onmessageerror`](https://developer.mozilla.org/en-US/docs/Web/API/Worker/onmessageerror)
    void onmessageerror(const jsbind::Any& value);
};

} // namespace webbind