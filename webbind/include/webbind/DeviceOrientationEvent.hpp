#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "Event.hpp"
#include "enums.hpp"


class DeviceOrientationEvent : public Event {
    explicit DeviceOrientationEvent(Handle h) noexcept;

public:
    explicit DeviceOrientationEvent(const emlite::Val &val) noexcept;
    static DeviceOrientationEvent take_ownership(Handle h) noexcept;

    DeviceOrientationEvent clone() const noexcept;
    DeviceOrientationEvent(const jsbind::String& type);
    DeviceOrientationEvent(const jsbind::String& type, const jsbind::Any& eventInitDict);
    double alpha() const;
    double beta() const;
    double gamma() const;
    bool absolute() const;
    static jsbind::Promise<PermissionState> requestPermission();
    static jsbind::Promise<PermissionState> requestPermission(bool absolute);
};

