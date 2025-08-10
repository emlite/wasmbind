#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "EventTarget.hpp"
#include "StructuredSerializeOptions.hpp"

namespace webbind {

/// Interface MessagePort
/// [`MessagePort`](https://developer.mozilla.org/en-US/docs/Web/API/MessagePort)
class MessagePort : public EventTarget {
    explicit MessagePort(Handle h) noexcept;
public:
    explicit MessagePort(const emlite::Val &val) noexcept;
    static MessagePort take_ownership(Handle h) noexcept;
    [[nodiscard]] MessagePort clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// The postMessage method.
    /// [`MessagePort.postMessage`](https://developer.mozilla.org/en-US/docs/Web/API/MessagePort/postMessage)
    jsbind::Undefined postMessage(const jsbind::Any& message);
    /// The postMessage method.
    /// [`MessagePort.postMessage`](https://developer.mozilla.org/en-US/docs/Web/API/MessagePort/postMessage)
    jsbind::Undefined postMessage(const jsbind::Any& message, const StructuredSerializeOptions& options);
    /// The start method.
    /// [`MessagePort.start`](https://developer.mozilla.org/en-US/docs/Web/API/MessagePort/start)
    jsbind::Undefined start();
    /// The close method.
    /// [`MessagePort.close`](https://developer.mozilla.org/en-US/docs/Web/API/MessagePort/close)
    jsbind::Undefined close();
    /// Getter of the `onclose` attribute.
    /// [`MessagePort.onclose`](https://developer.mozilla.org/en-US/docs/Web/API/MessagePort/onclose)
    [[nodiscard]] jsbind::Any onclose() const;
    /// Setter of the `onclose` attribute.
    /// [`MessagePort.onclose`](https://developer.mozilla.org/en-US/docs/Web/API/MessagePort/onclose)
    void onclose(const jsbind::Any& value);
    /// Getter of the `onmessage` attribute.
    /// [`MessagePort.onmessage`](https://developer.mozilla.org/en-US/docs/Web/API/MessagePort/onmessage)
    [[nodiscard]] jsbind::Any onmessage() const;
    /// Setter of the `onmessage` attribute.
    /// [`MessagePort.onmessage`](https://developer.mozilla.org/en-US/docs/Web/API/MessagePort/onmessage)
    void onmessage(const jsbind::Any& value);
    /// Getter of the `onmessageerror` attribute.
    /// [`MessagePort.onmessageerror`](https://developer.mozilla.org/en-US/docs/Web/API/MessagePort/onmessageerror)
    [[nodiscard]] jsbind::Any onmessageerror() const;
    /// Setter of the `onmessageerror` attribute.
    /// [`MessagePort.onmessageerror`](https://developer.mozilla.org/en-US/docs/Web/API/MessagePort/onmessageerror)
    void onmessageerror(const jsbind::Any& value);
};

} // namespace webbind