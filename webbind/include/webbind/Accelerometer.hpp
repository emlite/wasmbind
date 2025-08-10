#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "Sensor.hpp"
#include "AccelerometerSensorOptions.hpp"

namespace webbind {

/// Interface Accelerometer
/// [`Accelerometer`](https://developer.mozilla.org/en-US/docs/Web/API/Accelerometer)
class Accelerometer : public Sensor {
    explicit Accelerometer(Handle h) noexcept;
public:
    explicit Accelerometer(const emlite::Val &val) noexcept;
    static Accelerometer take_ownership(Handle h) noexcept;
    [[nodiscard]] Accelerometer clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// The `new Accelerometer(..)` constructor, creating a new Accelerometer instance
    Accelerometer();
    /// The `new Accelerometer(..)` constructor, creating a new Accelerometer instance
    Accelerometer(const AccelerometerSensorOptions& options);
    /// Getter of the `x` attribute.
    /// [`Accelerometer.x`](https://developer.mozilla.org/en-US/docs/Web/API/Accelerometer/x)
    [[nodiscard]] double x() const;
    /// Getter of the `y` attribute.
    /// [`Accelerometer.y`](https://developer.mozilla.org/en-US/docs/Web/API/Accelerometer/y)
    [[nodiscard]] double y() const;
    /// Getter of the `z` attribute.
    /// [`Accelerometer.z`](https://developer.mozilla.org/en-US/docs/Web/API/Accelerometer/z)
    [[nodiscard]] double z() const;
};

} // namespace webbind