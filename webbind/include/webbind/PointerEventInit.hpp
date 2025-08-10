#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "MouseEventInit.hpp"

namespace webbind {

class PointerEvent;

/// Dictionary type PointerEventInit
class PointerEventInit : public MouseEventInit {
  explicit PointerEventInit(Handle h) noexcept;
public:
    static PointerEventInit take_ownership(Handle h) noexcept;
    explicit PointerEventInit(const emlite::Val &val) noexcept;
    PointerEventInit() noexcept;
    [[nodiscard]] PointerEventInit clone() const noexcept;
    /// Getter of the `pointerId` attribute.
    [[nodiscard]] long pointerId() const;
    /// Setter of the `pointerId` attribute.
    void pointerId(long value);
    /// Getter of the `width` attribute.
    [[nodiscard]] double width() const;
    /// Setter of the `width` attribute.
    void width(double value);
    /// Getter of the `height` attribute.
    [[nodiscard]] double height() const;
    /// Setter of the `height` attribute.
    void height(double value);
    /// Getter of the `pressure` attribute.
    [[nodiscard]] float pressure() const;
    /// Setter of the `pressure` attribute.
    void pressure(float value);
    /// Getter of the `tangentialPressure` attribute.
    [[nodiscard]] float tangentialPressure() const;
    /// Setter of the `tangentialPressure` attribute.
    void tangentialPressure(float value);
    /// Getter of the `tiltX` attribute.
    [[nodiscard]] long tiltX() const;
    /// Setter of the `tiltX` attribute.
    void tiltX(long value);
    /// Getter of the `tiltY` attribute.
    [[nodiscard]] long tiltY() const;
    /// Setter of the `tiltY` attribute.
    void tiltY(long value);
    /// Getter of the `twist` attribute.
    [[nodiscard]] long twist() const;
    /// Setter of the `twist` attribute.
    void twist(long value);
    /// Getter of the `altitudeAngle` attribute.
    [[nodiscard]] double altitudeAngle() const;
    /// Setter of the `altitudeAngle` attribute.
    void altitudeAngle(double value);
    /// Getter of the `azimuthAngle` attribute.
    [[nodiscard]] double azimuthAngle() const;
    /// Setter of the `azimuthAngle` attribute.
    void azimuthAngle(double value);
    /// Getter of the `pointerType` attribute.
    [[nodiscard]] jsbind::String pointerType() const;
    /// Setter of the `pointerType` attribute.
    void pointerType(const jsbind::String& value);
    /// Getter of the `isPrimary` attribute.
    [[nodiscard]] bool isPrimary() const;
    /// Setter of the `isPrimary` attribute.
    void isPrimary(bool value);
    /// Getter of the `persistentDeviceId` attribute.
    [[nodiscard]] long persistentDeviceId() const;
    /// Setter of the `persistentDeviceId` attribute.
    void persistentDeviceId(long value);
    /// Getter of the `coalescedEvents` attribute.
    [[nodiscard]] jsbind::TypedArray<PointerEvent> coalescedEvents() const;
    /// Setter of the `coalescedEvents` attribute.
    void coalescedEvents(const jsbind::TypedArray<PointerEvent>& value);
    /// Getter of the `predictedEvents` attribute.
    [[nodiscard]] jsbind::TypedArray<PointerEvent> predictedEvents() const;
    /// Setter of the `predictedEvents` attribute.
    void predictedEvents(const jsbind::TypedArray<PointerEvent>& value);
};

} // namespace webbind