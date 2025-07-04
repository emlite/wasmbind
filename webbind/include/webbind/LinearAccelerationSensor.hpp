#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "Accelerometer.hpp"
#include "enums.hpp"


class LinearAccelerationSensor : public Accelerometer {
    explicit LinearAccelerationSensor(Handle h) noexcept;

public:
    explicit LinearAccelerationSensor(const emlite::Val &val) noexcept;
    static LinearAccelerationSensor take_ownership(Handle h) noexcept;

    LinearAccelerationSensor clone() const noexcept;
    LinearAccelerationSensor(const jsbind::Any& options);
};

