#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "MouseEvent.hpp"

namespace webbind {

class PointerEventInit;
class PointerEvent;

/// Interface PointerEvent
/// [`PointerEvent`](https://developer.mozilla.org/en-US/docs/Web/API/PointerEvent)
class PointerEvent : public MouseEvent {
    explicit PointerEvent(Handle h) noexcept;
public:
    explicit PointerEvent(const emlite::Val &val) noexcept;
    static PointerEvent take_ownership(Handle h) noexcept;
    [[nodiscard]] PointerEvent clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// The `new PointerEvent(..)` constructor, creating a new PointerEvent instance
    PointerEvent(const jsbind::String& type);
    /// The `new PointerEvent(..)` constructor, creating a new PointerEvent instance
    PointerEvent(const jsbind::String& type, const PointerEventInit& eventInitDict);
    /// [`PointerEvent.pointerId`](https://developer.mozilla.org/en-US/docs/Web/API/PointerEvent/pointerId)
    /// [`PointerEvent.pointerId`](https://developer.mozilla.org/en-US/docs/Web/API/PointerEvent/pointerId)
    [[nodiscard]] long pointerId() const;
    /// [`PointerEvent.width`](https://developer.mozilla.org/en-US/docs/Web/API/PointerEvent/width)
    /// [`PointerEvent.width`](https://developer.mozilla.org/en-US/docs/Web/API/PointerEvent/width)
    [[nodiscard]] double width() const;
    /// [`PointerEvent.height`](https://developer.mozilla.org/en-US/docs/Web/API/PointerEvent/height)
    /// [`PointerEvent.height`](https://developer.mozilla.org/en-US/docs/Web/API/PointerEvent/height)
    [[nodiscard]] double height() const;
    /// [`PointerEvent.pressure`](https://developer.mozilla.org/en-US/docs/Web/API/PointerEvent/pressure)
    /// [`PointerEvent.pressure`](https://developer.mozilla.org/en-US/docs/Web/API/PointerEvent/pressure)
    [[nodiscard]] float pressure() const;
    /// [`PointerEvent.tangentialPressure`](https://developer.mozilla.org/en-US/docs/Web/API/PointerEvent/tangentialPressure)
    /// [`PointerEvent.tangentialPressure`](https://developer.mozilla.org/en-US/docs/Web/API/PointerEvent/tangentialPressure)
    [[nodiscard]] float tangentialPressure() const;
    /// [`PointerEvent.tiltX`](https://developer.mozilla.org/en-US/docs/Web/API/PointerEvent/tiltX)
    /// [`PointerEvent.tiltX`](https://developer.mozilla.org/en-US/docs/Web/API/PointerEvent/tiltX)
    [[nodiscard]] long tiltX() const;
    /// [`PointerEvent.tiltY`](https://developer.mozilla.org/en-US/docs/Web/API/PointerEvent/tiltY)
    /// [`PointerEvent.tiltY`](https://developer.mozilla.org/en-US/docs/Web/API/PointerEvent/tiltY)
    [[nodiscard]] long tiltY() const;
    /// [`PointerEvent.twist`](https://developer.mozilla.org/en-US/docs/Web/API/PointerEvent/twist)
    /// [`PointerEvent.twist`](https://developer.mozilla.org/en-US/docs/Web/API/PointerEvent/twist)
    [[nodiscard]] long twist() const;
    /// [`PointerEvent.altitudeAngle`](https://developer.mozilla.org/en-US/docs/Web/API/PointerEvent/altitudeAngle)
    /// [`PointerEvent.altitudeAngle`](https://developer.mozilla.org/en-US/docs/Web/API/PointerEvent/altitudeAngle)
    [[nodiscard]] double altitudeAngle() const;
    /// [`PointerEvent.azimuthAngle`](https://developer.mozilla.org/en-US/docs/Web/API/PointerEvent/azimuthAngle)
    /// [`PointerEvent.azimuthAngle`](https://developer.mozilla.org/en-US/docs/Web/API/PointerEvent/azimuthAngle)
    [[nodiscard]] double azimuthAngle() const;
    /// [`PointerEvent.pointerType`](https://developer.mozilla.org/en-US/docs/Web/API/PointerEvent/pointerType)
    /// [`PointerEvent.pointerType`](https://developer.mozilla.org/en-US/docs/Web/API/PointerEvent/pointerType)
    [[nodiscard]] jsbind::String pointerType() const;
    /// [`PointerEvent.isPrimary`](https://developer.mozilla.org/en-US/docs/Web/API/PointerEvent/isPrimary)
    /// [`PointerEvent.isPrimary`](https://developer.mozilla.org/en-US/docs/Web/API/PointerEvent/isPrimary)
    [[nodiscard]] bool isPrimary() const;
    /// [`PointerEvent.persistentDeviceId`](https://developer.mozilla.org/en-US/docs/Web/API/PointerEvent/persistentDeviceId)
    /// [`PointerEvent.persistentDeviceId`](https://developer.mozilla.org/en-US/docs/Web/API/PointerEvent/persistentDeviceId)
    [[nodiscard]] long persistentDeviceId() const;
    /// The getCoalescedEvents method.
    /// [`PointerEvent.getCoalescedEvents`](https://developer.mozilla.org/en-US/docs/Web/API/PointerEvent/getCoalescedEvents)
    jsbind::TypedArray<PointerEvent> getCoalescedEvents();
    /// The getPredictedEvents method.
    /// [`PointerEvent.getPredictedEvents`](https://developer.mozilla.org/en-US/docs/Web/API/PointerEvent/getPredictedEvents)
    jsbind::TypedArray<PointerEvent> getPredictedEvents();
};

} // namespace webbind