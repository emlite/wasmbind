#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "ExtendableEvent.hpp"
#include "enums.hpp"

class MessagePort;


/// The ExtendableMessageEvent class.
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
    ExtendableMessageEvent(const jsbind::String& type, const jsbind::Any& eventInitDict);
    /// Getter of the `data` attribute.
    /// [`ExtendableMessageEvent.data`](https://developer.mozilla.org/en-US/docs/Web/API/ExtendableMessageEvent/data)
    [[nodiscard]] jsbind::Any data() const;
    /// Getter of the `origin` attribute.
    /// [`ExtendableMessageEvent.origin`](https://developer.mozilla.org/en-US/docs/Web/API/ExtendableMessageEvent/origin)
    [[nodiscard]] jsbind::String origin() const;
    /// Getter of the `lastEventId` attribute.
    /// [`ExtendableMessageEvent.lastEventId`](https://developer.mozilla.org/en-US/docs/Web/API/ExtendableMessageEvent/lastEventId)
    [[nodiscard]] jsbind::String lastEventId() const;
    /// Getter of the `source` attribute.
    /// [`ExtendableMessageEvent.source`](https://developer.mozilla.org/en-US/docs/Web/API/ExtendableMessageEvent/source)
    [[nodiscard]] jsbind::Any source() const;
    /// Getter of the `ports` attribute.
    /// [`ExtendableMessageEvent.ports`](https://developer.mozilla.org/en-US/docs/Web/API/ExtendableMessageEvent/ports)
    [[nodiscard]] jsbind::TypedArray<jsbind::Any> ports() const;
};

