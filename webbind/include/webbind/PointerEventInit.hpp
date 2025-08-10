#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "MouseEventInit.hpp"

namespace webbind {

class PointerEvent;

/// Dictionary type PointerEventInit
/// [`PointerEventInit`](https://developer.mozilla.org/en-US/docs/Web/API/PointerEventInit)
class PointerEventInit : public MouseEventInit {
  explicit PointerEventInit(Handle h) noexcept;
public:
    static PointerEventInit take_ownership(Handle h) noexcept;
    explicit PointerEventInit(const emlite::Val &val) noexcept;
    PointerEventInit() noexcept;
    [[nodiscard]] PointerEventInit clone() const noexcept;
    [[nodiscard]] long pointerId() const;
    void pointerId(long value);
    [[nodiscard]] double width() const;
    void width(double value);
    [[nodiscard]] double height() const;
    void height(double value);
    [[nodiscard]] float pressure() const;
    void pressure(float value);
    [[nodiscard]] float tangentialPressure() const;
    void tangentialPressure(float value);
    [[nodiscard]] long tiltX() const;
    void tiltX(long value);
    [[nodiscard]] long tiltY() const;
    void tiltY(long value);
    [[nodiscard]] long twist() const;
    void twist(long value);
    [[nodiscard]] double altitudeAngle() const;
    void altitudeAngle(double value);
    [[nodiscard]] double azimuthAngle() const;
    void azimuthAngle(double value);
    [[nodiscard]] jsbind::String pointerType() const;
    void pointerType(const jsbind::String& value);
    [[nodiscard]] bool isPrimary() const;
    void isPrimary(bool value);
    [[nodiscard]] long persistentDeviceId() const;
    void persistentDeviceId(long value);
    [[nodiscard]] jsbind::TypedArray<PointerEvent> coalescedEvents() const;
    void coalescedEvents(const jsbind::TypedArray<PointerEvent>& value);
    [[nodiscard]] jsbind::TypedArray<PointerEvent> predictedEvents() const;
    void predictedEvents(const jsbind::TypedArray<PointerEvent>& value);
};

} // namespace webbind