#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"


class DeviceMotionEventAcceleration : public emlite::Val {
    explicit DeviceMotionEventAcceleration(Handle h) noexcept;

public:
    explicit DeviceMotionEventAcceleration(const emlite::Val &val) noexcept;
    static DeviceMotionEventAcceleration take_ownership(Handle h) noexcept;

    DeviceMotionEventAcceleration clone() const noexcept;
    double x() const;
    double y() const;
    double z() const;
};

