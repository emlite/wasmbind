#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "Sensor.hpp"

namespace webbind {

class MagnetometerSensorOptions;

/// Interface Magnetometer
/// [`Magnetometer`](https://developer.mozilla.org/en-US/docs/Web/API/Magnetometer)
class Magnetometer : public Sensor {
    explicit Magnetometer(Handle h) noexcept;
public:
    explicit Magnetometer(const emlite::Val &val) noexcept;
    static Magnetometer take_ownership(Handle h) noexcept;
    [[nodiscard]] Magnetometer clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// The `new Magnetometer(..)` constructor, creating a new Magnetometer instance
    Magnetometer();
    /// The `new Magnetometer(..)` constructor, creating a new Magnetometer instance
    Magnetometer(const MagnetometerSensorOptions& sensorOptions);
    /// [`Magnetometer.x`](https://developer.mozilla.org/en-US/docs/Web/API/Magnetometer/x)
    /// [`Magnetometer.x`](https://developer.mozilla.org/en-US/docs/Web/API/Magnetometer/x)
    [[nodiscard]] double x() const;
    /// [`Magnetometer.y`](https://developer.mozilla.org/en-US/docs/Web/API/Magnetometer/y)
    /// [`Magnetometer.y`](https://developer.mozilla.org/en-US/docs/Web/API/Magnetometer/y)
    [[nodiscard]] double y() const;
    /// [`Magnetometer.z`](https://developer.mozilla.org/en-US/docs/Web/API/Magnetometer/z)
    /// [`Magnetometer.z`](https://developer.mozilla.org/en-US/docs/Web/API/Magnetometer/z)
    [[nodiscard]] double z() const;
};

} // namespace webbind