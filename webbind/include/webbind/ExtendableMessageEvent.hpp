#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "ExtendableEvent.hpp"

namespace webbind {

class ExtendableMessageEventInit;
class MessagePort;

/// Interface ExtendableMessageEvent
/// [`ExtendableMessageEvent`](https://developer.mozilla.org/en-US/docs/Web/API/ExtendableMessageEvent)
class ExtendableMessageEvent : public ExtendableEvent {
    explicit ExtendableMessageEvent(Handle h) noexcept;
public:
    explicit ExtendableMessageEvent(const emlite::Val &val) noexcept;
    static ExtendableMessageEvent take_ownership(Handle h) noexcept;
    [[nodiscard]] ExtendableMessageEvent clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// The `new ExtendableMessageEvent(..)` constructor, creating a new ExtendableMessageEvent instance
    ExtendableMessageEvent(const jsbind::String& type);
    /// The `new ExtendableMessageEvent(..)` constructor, creating a new ExtendableMessageEvent instance
    ExtendableMessageEvent(const jsbind::String& type, const ExtendableMessageEventInit& eventInitDict);
    /// [`ExtendableMessageEvent.data`](https://developer.mozilla.org/en-US/docs/Web/API/ExtendableMessageEvent/data)
    /// [`ExtendableMessageEvent.data`](https://developer.mozilla.org/en-US/docs/Web/API/ExtendableMessageEvent/data)
    [[nodiscard]] jsbind::Any data() const;
    /// [`ExtendableMessageEvent.origin`](https://developer.mozilla.org/en-US/docs/Web/API/ExtendableMessageEvent/origin)
    /// [`ExtendableMessageEvent.origin`](https://developer.mozilla.org/en-US/docs/Web/API/ExtendableMessageEvent/origin)
    [[nodiscard]] jsbind::String origin() const;
    /// [`ExtendableMessageEvent.lastEventId`](https://developer.mozilla.org/en-US/docs/Web/API/ExtendableMessageEvent/lastEventId)
    /// [`ExtendableMessageEvent.lastEventId`](https://developer.mozilla.org/en-US/docs/Web/API/ExtendableMessageEvent/lastEventId)
    [[nodiscard]] jsbind::String lastEventId() const;
    /// [`ExtendableMessageEvent.source`](https://developer.mozilla.org/en-US/docs/Web/API/ExtendableMessageEvent/source)
    /// [`ExtendableMessageEvent.source`](https://developer.mozilla.org/en-US/docs/Web/API/ExtendableMessageEvent/source)
    [[nodiscard]] jsbind::Any source() const;
    /// [`ExtendableMessageEvent.ports`](https://developer.mozilla.org/en-US/docs/Web/API/ExtendableMessageEvent/ports)
    /// [`ExtendableMessageEvent.ports`](https://developer.mozilla.org/en-US/docs/Web/API/ExtendableMessageEvent/ports)
    [[nodiscard]] jsbind::TypedArray<MessagePort> ports() const;
};

} // namespace webbind