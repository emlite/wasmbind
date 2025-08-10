#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "MouseEvent.hpp"

namespace webbind {

class WheelEventInit;

/// Interface WheelEvent
/// [`WheelEvent`](https://developer.mozilla.org/en-US/docs/Web/API/WheelEvent)
class WheelEvent : public MouseEvent {
    explicit WheelEvent(Handle h) noexcept;
public:
    explicit WheelEvent(const emlite::Val &val) noexcept;
    static WheelEvent take_ownership(Handle h) noexcept;
    [[nodiscard]] WheelEvent clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// The `new WheelEvent(..)` constructor, creating a new WheelEvent instance
    WheelEvent(const jsbind::String& type);
    /// The `new WheelEvent(..)` constructor, creating a new WheelEvent instance
    WheelEvent(const jsbind::String& type, const WheelEventInit& eventInitDict);
    /// [`WheelEvent.deltaX`](https://developer.mozilla.org/en-US/docs/Web/API/WheelEvent/deltaX)
    /// [`WheelEvent.deltaX`](https://developer.mozilla.org/en-US/docs/Web/API/WheelEvent/deltaX)
    [[nodiscard]] double deltaX() const;
    /// [`WheelEvent.deltaY`](https://developer.mozilla.org/en-US/docs/Web/API/WheelEvent/deltaY)
    /// [`WheelEvent.deltaY`](https://developer.mozilla.org/en-US/docs/Web/API/WheelEvent/deltaY)
    [[nodiscard]] double deltaY() const;
    /// [`WheelEvent.deltaZ`](https://developer.mozilla.org/en-US/docs/Web/API/WheelEvent/deltaZ)
    /// [`WheelEvent.deltaZ`](https://developer.mozilla.org/en-US/docs/Web/API/WheelEvent/deltaZ)
    [[nodiscard]] double deltaZ() const;
    /// [`WheelEvent.deltaMode`](https://developer.mozilla.org/en-US/docs/Web/API/WheelEvent/deltaMode)
    /// [`WheelEvent.deltaMode`](https://developer.mozilla.org/en-US/docs/Web/API/WheelEvent/deltaMode)
    [[nodiscard]] unsigned long deltaMode() const;
};

} // namespace webbind