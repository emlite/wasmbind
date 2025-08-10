#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "MouseEvent.hpp"
#include "WheelEventInit.hpp"

namespace webbind {

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
    /// Getter of the `deltaX` attribute.
    /// [`WheelEvent.deltaX`](https://developer.mozilla.org/en-US/docs/Web/API/WheelEvent/deltaX)
    [[nodiscard]] double deltaX() const;
    /// Getter of the `deltaY` attribute.
    /// [`WheelEvent.deltaY`](https://developer.mozilla.org/en-US/docs/Web/API/WheelEvent/deltaY)
    [[nodiscard]] double deltaY() const;
    /// Getter of the `deltaZ` attribute.
    /// [`WheelEvent.deltaZ`](https://developer.mozilla.org/en-US/docs/Web/API/WheelEvent/deltaZ)
    [[nodiscard]] double deltaZ() const;
    /// Getter of the `deltaMode` attribute.
    /// [`WheelEvent.deltaMode`](https://developer.mozilla.org/en-US/docs/Web/API/WheelEvent/deltaMode)
    [[nodiscard]] unsigned long deltaMode() const;
};

} // namespace webbind