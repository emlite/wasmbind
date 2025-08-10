#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "Accelerometer.hpp"

namespace webbind {

class AccelerometerSensorOptions;

/// Interface LinearAccelerationSensor
/// [`LinearAccelerationSensor`](https://developer.mozilla.org/en-US/docs/Web/API/LinearAccelerationSensor)
class LinearAccelerationSensor : public Accelerometer {
    explicit LinearAccelerationSensor(Handle h) noexcept;
public:
    explicit LinearAccelerationSensor(const emlite::Val &val) noexcept;
    static LinearAccelerationSensor take_ownership(Handle h) noexcept;
    [[nodiscard]] LinearAccelerationSensor clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// The `new LinearAccelerationSensor(..)` constructor, creating a new LinearAccelerationSensor instance
    LinearAccelerationSensor();
    /// The `new LinearAccelerationSensor(..)` constructor, creating a new LinearAccelerationSensor instance
    LinearAccelerationSensor(const AccelerometerSensorOptions& options);
};

} // namespace webbind