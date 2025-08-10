#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "UIEvent.hpp"

namespace webbind {

class TouchEventInit;
class TouchList;

/// Interface TouchEvent
/// [`TouchEvent`](https://developer.mozilla.org/en-US/docs/Web/API/TouchEvent)
class TouchEvent : public UIEvent {
    explicit TouchEvent(Handle h) noexcept;
public:
    explicit TouchEvent(const emlite::Val &val) noexcept;
    static TouchEvent take_ownership(Handle h) noexcept;
    [[nodiscard]] TouchEvent clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// The `new TouchEvent(..)` constructor, creating a new TouchEvent instance
    TouchEvent(const jsbind::String& type);
    /// The `new TouchEvent(..)` constructor, creating a new TouchEvent instance
    TouchEvent(const jsbind::String& type, const TouchEventInit& eventInitDict);
    /// [`TouchEvent.touches`](https://developer.mozilla.org/en-US/docs/Web/API/TouchEvent/touches)
    /// [`TouchEvent.touches`](https://developer.mozilla.org/en-US/docs/Web/API/TouchEvent/touches)
    [[nodiscard]] TouchList touches() const;
    /// [`TouchEvent.targetTouches`](https://developer.mozilla.org/en-US/docs/Web/API/TouchEvent/targetTouches)
    /// [`TouchEvent.targetTouches`](https://developer.mozilla.org/en-US/docs/Web/API/TouchEvent/targetTouches)
    [[nodiscard]] TouchList targetTouches() const;
    /// [`TouchEvent.changedTouches`](https://developer.mozilla.org/en-US/docs/Web/API/TouchEvent/changedTouches)
    /// [`TouchEvent.changedTouches`](https://developer.mozilla.org/en-US/docs/Web/API/TouchEvent/changedTouches)
    [[nodiscard]] TouchList changedTouches() const;
    /// [`TouchEvent.altKey`](https://developer.mozilla.org/en-US/docs/Web/API/TouchEvent/altKey)
    /// [`TouchEvent.altKey`](https://developer.mozilla.org/en-US/docs/Web/API/TouchEvent/altKey)
    [[nodiscard]] bool altKey() const;
    /// [`TouchEvent.metaKey`](https://developer.mozilla.org/en-US/docs/Web/API/TouchEvent/metaKey)
    /// [`TouchEvent.metaKey`](https://developer.mozilla.org/en-US/docs/Web/API/TouchEvent/metaKey)
    [[nodiscard]] bool metaKey() const;
    /// [`TouchEvent.ctrlKey`](https://developer.mozilla.org/en-US/docs/Web/API/TouchEvent/ctrlKey)
    /// [`TouchEvent.ctrlKey`](https://developer.mozilla.org/en-US/docs/Web/API/TouchEvent/ctrlKey)
    [[nodiscard]] bool ctrlKey() const;
    /// [`TouchEvent.shiftKey`](https://developer.mozilla.org/en-US/docs/Web/API/TouchEvent/shiftKey)
    /// [`TouchEvent.shiftKey`](https://developer.mozilla.org/en-US/docs/Web/API/TouchEvent/shiftKey)
    [[nodiscard]] bool shiftKey() const;
    /// The getModifierState method.
    /// [`TouchEvent.getModifierState`](https://developer.mozilla.org/en-US/docs/Web/API/TouchEvent/getModifierState)
    bool getModifierState(const jsbind::String& keyArg);
};

} // namespace webbind