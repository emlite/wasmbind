#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"


class DeviceMotionEventRotationRate : public emlite::Val {
    explicit DeviceMotionEventRotationRate(Handle h) noexcept;

public:
    explicit DeviceMotionEventRotationRate(const emlite::Val &val) noexcept;
    static DeviceMotionEventRotationRate take_ownership(Handle h) noexcept;

    DeviceMotionEventRotationRate clone() const noexcept;
    double alpha() const;
    double beta() const;
    double gamma() const;
};

