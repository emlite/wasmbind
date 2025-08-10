#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "EventTarget.hpp"

namespace webbind {

/// Interface BroadcastChannel
/// [`BroadcastChannel`](https://developer.mozilla.org/en-US/docs/Web/API/BroadcastChannel)
class BroadcastChannel : public EventTarget {
    explicit BroadcastChannel(Handle h) noexcept;
public:
    explicit BroadcastChannel(const emlite::Val &val) noexcept;
    static BroadcastChannel take_ownership(Handle h) noexcept;
    [[nodiscard]] BroadcastChannel clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// The `new BroadcastChannel(..)` constructor, creating a new BroadcastChannel instance
    BroadcastChannel(const jsbind::String& name);
    /// [`BroadcastChannel.name`](https://developer.mozilla.org/en-US/docs/Web/API/BroadcastChannel/name)
    /// [`BroadcastChannel.name`](https://developer.mozilla.org/en-US/docs/Web/API/BroadcastChannel/name)
    [[nodiscard]] jsbind::String name() const;
    /// The postMessage method.
    /// [`BroadcastChannel.postMessage`](https://developer.mozilla.org/en-US/docs/Web/API/BroadcastChannel/postMessage)
    jsbind::Undefined postMessage(const jsbind::Any& message);
    /// The close method.
    /// [`BroadcastChannel.close`](https://developer.mozilla.org/en-US/docs/Web/API/BroadcastChannel/close)
    jsbind::Undefined close();
    /// [`BroadcastChannel.onmessage`](https://developer.mozilla.org/en-US/docs/Web/API/BroadcastChannel/onmessage)
    /// [`BroadcastChannel.onmessage`](https://developer.mozilla.org/en-US/docs/Web/API/BroadcastChannel/onmessage)
    [[nodiscard]] jsbind::Any onmessage() const;
    /// Setter of the `onmessage` attribute.
    /// [`BroadcastChannel.onmessage`](https://developer.mozilla.org/en-US/docs/Web/API/BroadcastChannel/onmessage)
    void onmessage(const jsbind::Any& value);
    /// [`BroadcastChannel.onmessageerror`](https://developer.mozilla.org/en-US/docs/Web/API/BroadcastChannel/onmessageerror)
    /// [`BroadcastChannel.onmessageerror`](https://developer.mozilla.org/en-US/docs/Web/API/BroadcastChannel/onmessageerror)
    [[nodiscard]] jsbind::Any onmessageerror() const;
    /// Setter of the `onmessageerror` attribute.
    /// [`BroadcastChannel.onmessageerror`](https://developer.mozilla.org/en-US/docs/Web/API/BroadcastChannel/onmessageerror)
    void onmessageerror(const jsbind::Any& value);
};

} // namespace webbind