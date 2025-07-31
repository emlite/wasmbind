#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "Accelerometer.hpp"
#include "enums.hpp"


/// The LinearAccelerationSensor class.
/// [`LinearAccelerationSensor`](https://developer.mozilla.org/en-US/docs/Web/API/LinearAccelerationSensor)
class LinearAccelerationSensor : public Accelerometer {
    explicit LinearAccelerationSensor(Handle h) noexcept;

public:
    explicit LinearAccelerationSensor(const emlite::Val &val) noexcept;
    static LinearAccelerationSensor take_ownership(Handle h) noexcept;

    [[nodiscard]] LinearAccelerationSensor clone() const noexcept;
    /// The `new LinearAccelerationSensor(..)` constructor, creating a new LinearAccelerationSensor instance
    LinearAccelerationSensor();
    /// The `new LinearAccelerationSensor(..)` constructor, creating a new LinearAccelerationSensor instance
    LinearAccelerationSensor(const jsbind::Any& options);
};

