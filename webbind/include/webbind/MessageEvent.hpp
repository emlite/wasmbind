#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "Event.hpp"
#include "enums.hpp"

class MessagePort;


/// The MessageEvent class.
/// [`MessageEvent`](https://developer.mozilla.org/en-US/docs/Web/API/MessageEvent)
class MessageEvent : public Event {
    explicit MessageEvent(Handle h) noexcept;

public:
    explicit MessageEvent(const emlite::Val &val) noexcept;
    static MessageEvent take_ownership(Handle h) noexcept;

    [[nodiscard]] MessageEvent clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// The `new MessageEvent(..)` constructor, creating a new MessageEvent instance
    MessageEvent(const jsbind::String& type);
    /// The `new MessageEvent(..)` constructor, creating a new MessageEvent instance
    MessageEvent(const jsbind::String& type, const jsbind::Any& eventInitDict);
    /// Getter of the `data` attribute.
    /// [`MessageEvent.data`](https://developer.mozilla.org/en-US/docs/Web/API/MessageEvent/data)
    [[nodiscard]] jsbind::Any data() const;
    /// Getter of the `origin` attribute.
    /// [`MessageEvent.origin`](https://developer.mozilla.org/en-US/docs/Web/API/MessageEvent/origin)
    [[nodiscard]] jsbind::String origin() const;
    /// Getter of the `lastEventId` attribute.
    /// [`MessageEvent.lastEventId`](https://developer.mozilla.org/en-US/docs/Web/API/MessageEvent/lastEventId)
    [[nodiscard]] jsbind::String lastEventId() const;
    /// Getter of the `source` attribute.
    /// [`MessageEvent.source`](https://developer.mozilla.org/en-US/docs/Web/API/MessageEvent/source)
    [[nodiscard]] jsbind::Any source() const;
    /// Getter of the `ports` attribute.
    /// [`MessageEvent.ports`](https://developer.mozilla.org/en-US/docs/Web/API/MessageEvent/ports)
    [[nodiscard]] jsbind::TypedArray<jsbind::Any> ports() const;
    /// The initMessageEvent method.
    /// [`MessageEvent.initMessageEvent`](https://developer.mozilla.org/en-US/docs/Web/API/MessageEvent/initMessageEvent)
    jsbind::Undefined initMessageEvent(const jsbind::String& type);
    /// The initMessageEvent method.
    /// [`MessageEvent.initMessageEvent`](https://developer.mozilla.org/en-US/docs/Web/API/MessageEvent/initMessageEvent)
    jsbind::Undefined initMessageEvent(const jsbind::String& type, bool bubbles);
    /// The initMessageEvent method.
    /// [`MessageEvent.initMessageEvent`](https://developer.mozilla.org/en-US/docs/Web/API/MessageEvent/initMessageEvent)
    jsbind::Undefined initMessageEvent(const jsbind::String& type, bool bubbles, bool cancelable);
    /// The initMessageEvent method.
    /// [`MessageEvent.initMessageEvent`](https://developer.mozilla.org/en-US/docs/Web/API/MessageEvent/initMessageEvent)
    jsbind::Undefined initMessageEvent(const jsbind::String& type, bool bubbles, bool cancelable, const jsbind::Any& data);
    /// The initMessageEvent method.
    /// [`MessageEvent.initMessageEvent`](https://developer.mozilla.org/en-US/docs/Web/API/MessageEvent/initMessageEvent)
    jsbind::Undefined initMessageEvent(const jsbind::String& type, bool bubbles, bool cancelable, const jsbind::Any& data, const jsbind::String& origin);
    /// The initMessageEvent method.
    /// [`MessageEvent.initMessageEvent`](https://developer.mozilla.org/en-US/docs/Web/API/MessageEvent/initMessageEvent)
    jsbind::Undefined initMessageEvent(const jsbind::String& type, bool bubbles, bool cancelable, const jsbind::Any& data, const jsbind::String& origin, const jsbind::String& lastEventId);
    /// The initMessageEvent method.
    /// [`MessageEvent.initMessageEvent`](https://developer.mozilla.org/en-US/docs/Web/API/MessageEvent/initMessageEvent)
    jsbind::Undefined initMessageEvent(const jsbind::String& type, bool bubbles, bool cancelable, const jsbind::Any& data, const jsbind::String& origin, const jsbind::String& lastEventId, const jsbind::Any& source);
    /// The initMessageEvent method.
    /// [`MessageEvent.initMessageEvent`](https://developer.mozilla.org/en-US/docs/Web/API/MessageEvent/initMessageEvent)
    jsbind::Undefined initMessageEvent(const jsbind::String& type, bool bubbles, bool cancelable, const jsbind::Any& data, const jsbind::String& origin, const jsbind::String& lastEventId, const jsbind::Any& source, const jsbind::TypedArray<jsbind::Any>& ports);
};

