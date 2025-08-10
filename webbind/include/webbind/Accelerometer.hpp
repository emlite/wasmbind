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
    /// [`Accelerometer.x`](https://developer.mozilla.org/en-US/docs/Web/API/Accelerometer/x)
    /// [`Accelerometer.x`](https://developer.mozilla.org/en-US/docs/Web/API/Accelerometer/x)
    [[nodiscard]] double x() const;
    /// [`Accelerometer.y`](https://developer.mozilla.org/en-US/docs/Web/API/Accelerometer/y)
    /// [`Accelerometer.y`](https://developer.mozilla.org/en-US/docs/Web/API/Accelerometer/y)
    [[nodiscard]] double y() const;
    /// [`Accelerometer.z`](https://developer.mozilla.org/en-US/docs/Web/API/Accelerometer/z)
    /// [`Accelerometer.z`](https://developer.mozilla.org/en-US/docs/Web/API/Accelerometer/z)
    [[nodiscard]] double z() const;
};

} // namespace webbind