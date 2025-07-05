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
    PointerEvent(const jsbind::DOMString& type);
    PointerEvent(const jsbind::DOMString& type, const jsbind::Any& eventInitDict);
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
    jsbind::DOMString pointerType() const;
    bool isPrimary() const;
    long persistentDeviceId() const;
    jsbind::Sequence<PointerEvent> getCoalescedEvents();
    jsbind::Sequence<PointerEvent> getPredictedEvents();
};

