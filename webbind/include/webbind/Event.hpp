#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "EventInit.hpp"

namespace webbind {

class EventTarget;

/// Interface Event
/// [`Event`](https://developer.mozilla.org/en-US/docs/Web/API/Event)
class Event : public emlite::Val {
    explicit Event(Handle h) noexcept;
public:
    explicit Event(const emlite::Val &val) noexcept;
    static Event take_ownership(Handle h) noexcept;
    [[nodiscard]] Event clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// The `new Event(..)` constructor, creating a new Event instance
    Event(const jsbind::String& type);
    /// The `new Event(..)` constructor, creating a new Event instance
    Event(const jsbind::String& type, const EventInit& eventInitDict);
    /// [`Event.type`](https://developer.mozilla.org/en-US/docs/Web/API/Event/type)
    /// [`Event.type`](https://developer.mozilla.org/en-US/docs/Web/API/Event/type)
    [[nodiscard]] jsbind::String type() const;
    /// [`Event.target`](https://developer.mozilla.org/en-US/docs/Web/API/Event/target)
    /// [`Event.target`](https://developer.mozilla.org/en-US/docs/Web/API/Event/target)
    [[nodiscard]] EventTarget target() const;
    /// [`Event.srcElement`](https://developer.mozilla.org/en-US/docs/Web/API/Event/srcElement)
    /// [`Event.srcElement`](https://developer.mozilla.org/en-US/docs/Web/API/Event/srcElement)
    [[nodiscard]] EventTarget srcElement() const;
    /// [`Event.currentTarget`](https://developer.mozilla.org/en-US/docs/Web/API/Event/currentTarget)
    /// [`Event.currentTarget`](https://developer.mozilla.org/en-US/docs/Web/API/Event/currentTarget)
    [[nodiscard]] EventTarget currentTarget() const;
    /// The composedPath method.
    /// [`Event.composedPath`](https://developer.mozilla.org/en-US/docs/Web/API/Event/composedPath)
    jsbind::TypedArray<EventTarget> composedPath();
    /// [`Event.eventPhase`](https://developer.mozilla.org/en-US/docs/Web/API/Event/eventPhase)
    /// [`Event.eventPhase`](https://developer.mozilla.org/en-US/docs/Web/API/Event/eventPhase)
    [[nodiscard]] unsigned short eventPhase() const;
    /// The stopPropagation method.
    /// [`Event.stopPropagation`](https://developer.mozilla.org/en-US/docs/Web/API/Event/stopPropagation)
    jsbind::Undefined stopPropagation();
    /// [`Event.cancelBubble`](https://developer.mozilla.org/en-US/docs/Web/API/Event/cancelBubble)
    /// [`Event.cancelBubble`](https://developer.mozilla.org/en-US/docs/Web/API/Event/cancelBubble)
    [[nodiscard]] bool cancelBubble() const;
    /// Setter of the `cancelBubble` attribute.
    /// [`Event.cancelBubble`](https://developer.mozilla.org/en-US/docs/Web/API/Event/cancelBubble)
    void cancelBubble(bool value);
    /// The stopImmediatePropagation method.
    /// [`Event.stopImmediatePropagation`](https://developer.mozilla.org/en-US/docs/Web/API/Event/stopImmediatePropagation)
    jsbind::Undefined stopImmediatePropagation();
    /// [`Event.bubbles`](https://developer.mozilla.org/en-US/docs/Web/API/Event/bubbles)
    /// [`Event.bubbles`](https://developer.mozilla.org/en-US/docs/Web/API/Event/bubbles)
    [[nodiscard]] bool bubbles() const;
    /// [`Event.cancelable`](https://developer.mozilla.org/en-US/docs/Web/API/Event/cancelable)
    /// [`Event.cancelable`](https://developer.mozilla.org/en-US/docs/Web/API/Event/cancelable)
    [[nodiscard]] bool cancelable() const;
    /// [`Event.returnValue`](https://developer.mozilla.org/en-US/docs/Web/API/Event/returnValue)
    /// [`Event.returnValue`](https://developer.mozilla.org/en-US/docs/Web/API/Event/returnValue)
    [[nodiscard]] bool returnValue() const;
    /// Setter of the `returnValue` attribute.
    /// [`Event.returnValue`](https://developer.mozilla.org/en-US/docs/Web/API/Event/returnValue)
    void returnValue(bool value);
    /// The preventDefault method.
    /// [`Event.preventDefault`](https://developer.mozilla.org/en-US/docs/Web/API/Event/preventDefault)
    jsbind::Undefined preventDefault();
    /// [`Event.defaultPrevented`](https://developer.mozilla.org/en-US/docs/Web/API/Event/defaultPrevented)
    /// [`Event.defaultPrevented`](https://developer.mozilla.org/en-US/docs/Web/API/Event/defaultPrevented)
    [[nodiscard]] bool defaultPrevented() const;
    /// [`Event.composed`](https://developer.mozilla.org/en-US/docs/Web/API/Event/composed)
    /// [`Event.composed`](https://developer.mozilla.org/en-US/docs/Web/API/Event/composed)
    [[nodiscard]] bool composed() const;
    /// [`Event.isTrusted`](https://developer.mozilla.org/en-US/docs/Web/API/Event/isTrusted)
    /// [`Event.isTrusted`](https://developer.mozilla.org/en-US/docs/Web/API/Event/isTrusted)
    [[nodiscard]] bool isTrusted() const;
    /// [`Event.timeStamp`](https://developer.mozilla.org/en-US/docs/Web/API/Event/timeStamp)
    /// [`Event.timeStamp`](https://developer.mozilla.org/en-US/docs/Web/API/Event/timeStamp)
    [[nodiscard]] jsbind::Any timeStamp() const;
    /// The initEvent method.
    /// [`Event.initEvent`](https://developer.mozilla.org/en-US/docs/Web/API/Event/initEvent)
    jsbind::Undefined initEvent(const jsbind::String& type);
    /// The initEvent method.
    /// [`Event.initEvent`](https://developer.mozilla.org/en-US/docs/Web/API/Event/initEvent)
    jsbind::Undefined initEvent(const jsbind::String& type, bool bubbles);
    /// The initEvent method.
    /// [`Event.initEvent`](https://developer.mozilla.org/en-US/docs/Web/API/Event/initEvent)
    jsbind::Undefined initEvent(const jsbind::String& type, bool bubbles, bool cancelable);
};

} // namespace webbind