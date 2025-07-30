#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "Event.hpp"
#include "enums.hpp"

class DeviceMotionEventAcceleration;
class DeviceMotionEventRotationRate;


class DeviceMotionEvent : public Event {
    explicit DeviceMotionEvent(Handle h) noexcept;

public:
    explicit DeviceMotionEvent(const emlite::Val &val) noexcept;
    static DeviceMotionEvent take_ownership(Handle h) noexcept;

    DeviceMotionEvent clone() const noexcept;
    DeviceMotionEvent(const jsbind::String& type);
    DeviceMotionEvent(const jsbind::String& type, const jsbind::Any& eventInitDict);
    DeviceMotionEventAcceleration acceleration() const;
    DeviceMotionEventAcceleration accelerationIncludingGravity() const;
    DeviceMotionEventRotationRate rotationRate() const;
    double interval() const;
    static jsbind::Promise<PermissionState> requestPermission();
};

