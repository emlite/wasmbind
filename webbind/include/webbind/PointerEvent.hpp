#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "MouseEvent.hpp"
#include "enums.hpp"

class PointerEvent;


class PointerEvent : public MouseEvent {
    explicit PointerEvent(Handle h) noexcept;

public:
    explicit PointerEvent(const emlite::Val &val) noexcept;
    static PointerEvent take_ownership(Handle h) noexcept;

    PointerEvent clone() const noexcept;
    PointerEvent(const jsbind::String& type);
    PointerEvent(const jsbind::String& type, const jsbind::Any& eventInitDict);
    long pointerId() const;
    double width() const;
    double height() const;
    float pressure() const;
    float tangentialPressure() const;
    long tiltX() const;
    long tiltY() const;
    long twist() const;
    double altitudeAngle() const;
    double azimuthAngle() const;
    jsbind::String pointerType() const;
    bool isPrimary() const;
    long persistentDeviceId() const;
    jsbind::TypedArray<PointerEvent> getCoalescedEvents();
    jsbind::TypedArray<PointerEvent> getPredictedEvents();
};

