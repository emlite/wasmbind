#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "EventTarget.hpp"
#include "enums.hpp"

class StructuredSerializeOptions;


class StructuredSerializeOptions : public emlite::Val {
  explicit StructuredSerializeOptions(Handle h) noexcept;
public:
    static StructuredSerializeOptions take_ownership(Handle h) noexcept;
    explicit StructuredSerializeOptions(const emlite::Val &val) noexcept;
    StructuredSerializeOptions() noexcept;
    [[nodiscard]] StructuredSerializeOptions clone() const noexcept;
    [[nodiscard]] jsbind::TypedArray<jsbind::Object> transfer() const;
    void transfer(const jsbind::TypedArray<jsbind::Object>& value);
};

/// The MessagePort class.
/// [`MessagePort`](https://developer.mozilla.org/en-US/docs/Web/API/MessagePort)
class MessagePort : public EventTarget {
    explicit MessagePort(Handle h) noexcept;

public:
    explicit MessagePort(const emlite::Val &val) noexcept;
    static MessagePort take_ownership(Handle h) noexcept;

    [[nodiscard]] MessagePort clone() const noexcept;
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

