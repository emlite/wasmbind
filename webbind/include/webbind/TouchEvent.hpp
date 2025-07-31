#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "UIEvent.hpp"
#include "enums.hpp"

class TouchList;


/// The TouchEvent class.
/// [`TouchEvent`](https://developer.mozilla.org/en-US/docs/Web/API/TouchEvent)
class TouchEvent : public UIEvent {
    explicit TouchEvent(Handle h) noexcept;

public:
    explicit TouchEvent(const emlite::Val &val) noexcept;
    static TouchEvent take_ownership(Handle h) noexcept;

    [[nodiscard]] TouchEvent clone() const noexcept;
    /// The `new TouchEvent(..)` constructor, creating a new TouchEvent instance
    TouchEvent(const jsbind::String& type);
    /// The `new TouchEvent(..)` constructor, creating a new TouchEvent instance
    TouchEvent(const jsbind::String& type, const jsbind::Any& eventInitDict);
    /// Getter of the `touches` attribute.
    /// [`TouchEvent.touches`](https://developer.mozilla.org/en-US/docs/Web/API/TouchEvent/touches)
    [[nodiscard]] TouchList touches() const;
    /// Getter of the `targetTouches` attribute.
    /// [`TouchEvent.targetTouches`](https://developer.mozilla.org/en-US/docs/Web/API/TouchEvent/targetTouches)
    [[nodiscard]] TouchList targetTouches() const;
    /// Getter of the `changedTouches` attribute.
    /// [`TouchEvent.changedTouches`](https://developer.mozilla.org/en-US/docs/Web/API/TouchEvent/changedTouches)
    [[nodiscard]] TouchList changedTouches() const;
    /// Getter of the `altKey` attribute.
    /// [`TouchEvent.altKey`](https://developer.mozilla.org/en-US/docs/Web/API/TouchEvent/altKey)
    [[nodiscard]] bool altKey() const;
    /// Getter of the `metaKey` attribute.
    /// [`TouchEvent.metaKey`](https://developer.mozilla.org/en-US/docs/Web/API/TouchEvent/metaKey)
    [[nodiscard]] bool metaKey() const;
    /// Getter of the `ctrlKey` attribute.
    /// [`TouchEvent.ctrlKey`](https://developer.mozilla.org/en-US/docs/Web/API/TouchEvent/ctrlKey)
    [[nodiscard]] bool ctrlKey() const;
    /// Getter of the `shiftKey` attribute.
    /// [`TouchEvent.shiftKey`](https://developer.mozilla.org/en-US/docs/Web/API/TouchEvent/shiftKey)
    [[nodiscard]] bool shiftKey() const;
    /// The getModifierState method.
    /// [`TouchEvent.getModifierState`](https://developer.mozilla.org/en-US/docs/Web/API/TouchEvent/getModifierState)
    bool getModifierState(const jsbind::String& keyArg);
};

