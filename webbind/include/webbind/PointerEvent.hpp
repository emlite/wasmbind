#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "MouseEvent.hpp"
#include "enums.hpp"

class PointerEvent;


/// The PointerEvent class.
/// [`PointerEvent`](https://developer.mozilla.org/en-US/docs/Web/API/PointerEvent)
class PointerEvent : public MouseEvent {
    explicit PointerEvent(Handle h) noexcept;

public:
    explicit PointerEvent(const emlite::Val &val) noexcept;
    static PointerEvent take_ownership(Handle h) noexcept;

    [[nodiscard]] PointerEvent clone() const noexcept;
    /// The `new PointerEvent(..)` constructor, creating a new PointerEvent instance
    PointerEvent(const jsbind::String& type);
    /// The `new PointerEvent(..)` constructor, creating a new PointerEvent instance
    PointerEvent(const jsbind::String& type, const jsbind::Any& eventInitDict);
    /// Getter of the `pointerId` attribute.
    /// [`PointerEvent.pointerId`](https://developer.mozilla.org/en-US/docs/Web/API/PointerEvent/pointerId)
    [[nodiscard]] long pointerId() const;
    /// Getter of the `width` attribute.
    /// [`PointerEvent.width`](https://developer.mozilla.org/en-US/docs/Web/API/PointerEvent/width)
    [[nodiscard]] double width() const;
    /// Getter of the `height` attribute.
    /// [`PointerEvent.height`](https://developer.mozilla.org/en-US/docs/Web/API/PointerEvent/height)
    [[nodiscard]] double height() const;
    /// Getter of the `pressure` attribute.
    /// [`PointerEvent.pressure`](https://developer.mozilla.org/en-US/docs/Web/API/PointerEvent/pressure)
    [[nodiscard]] float pressure() const;
    /// Getter of the `tangentialPressure` attribute.
    /// [`PointerEvent.tangentialPressure`](https://developer.mozilla.org/en-US/docs/Web/API/PointerEvent/tangentialPressure)
    [[nodiscard]] float tangentialPressure() const;
    /// Getter of the `tiltX` attribute.
    /// [`PointerEvent.tiltX`](https://developer.mozilla.org/en-US/docs/Web/API/PointerEvent/tiltX)
    [[nodiscard]] long tiltX() const;
    /// Getter of the `tiltY` attribute.
    /// [`PointerEvent.tiltY`](https://developer.mozilla.org/en-US/docs/Web/API/PointerEvent/tiltY)
    [[nodiscard]] long tiltY() const;
    /// Getter of the `twist` attribute.
    /// [`PointerEvent.twist`](https://developer.mozilla.org/en-US/docs/Web/API/PointerEvent/twist)
    [[nodiscard]] long twist() const;
    /// Getter of the `altitudeAngle` attribute.
    /// [`PointerEvent.altitudeAngle`](https://developer.mozilla.org/en-US/docs/Web/API/PointerEvent/altitudeAngle)
    [[nodiscard]] double altitudeAngle() const;
    /// Getter of the `azimuthAngle` attribute.
    /// [`PointerEvent.azimuthAngle`](https://developer.mozilla.org/en-US/docs/Web/API/PointerEvent/azimuthAngle)
    [[nodiscard]] double azimuthAngle() const;
    /// Getter of the `pointerType` attribute.
    /// [`PointerEvent.pointerType`](https://developer.mozilla.org/en-US/docs/Web/API/PointerEvent/pointerType)
    [[nodiscard]] jsbind::String pointerType() const;
    /// Getter of the `isPrimary` attribute.
    /// [`PointerEvent.isPrimary`](https://developer.mozilla.org/en-US/docs/Web/API/PointerEvent/isPrimary)
    [[nodiscard]] bool isPrimary() const;
    /// Getter of the `persistentDeviceId` attribute.
    /// [`PointerEvent.persistentDeviceId`](https://developer.mozilla.org/en-US/docs/Web/API/PointerEvent/persistentDeviceId)
    [[nodiscard]] long persistentDeviceId() const;
    /// The getCoalescedEvents method.
    /// [`PointerEvent.getCoalescedEvents`](https://developer.mozilla.org/en-US/docs/Web/API/PointerEvent/getCoalescedEvents)
    jsbind::TypedArray<PointerEvent> getCoalescedEvents();
    /// The getPredictedEvents method.
    /// [`PointerEvent.getPredictedEvents`](https://developer.mozilla.org/en-US/docs/Web/API/PointerEvent/getPredictedEvents)
    jsbind::TypedArray<PointerEvent> getPredictedEvents();
};

