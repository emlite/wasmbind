#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "Sensor.hpp"
#include "enums.hpp"


/// The Magnetometer class.
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
    Magnetometer(const jsbind::Any& sensorOptions);
    /// Getter of the `x` attribute.
    /// [`Magnetometer.x`](https://developer.mozilla.org/en-US/docs/Web/API/Magnetometer/x)
    [[nodiscard]] double x() const;
    /// Getter of the `y` attribute.
    /// [`Magnetometer.y`](https://developer.mozilla.org/en-US/docs/Web/API/Magnetometer/y)
    [[nodiscard]] double y() const;
    /// Getter of the `z` attribute.
    /// [`Magnetometer.z`](https://developer.mozilla.org/en-US/docs/Web/API/Magnetometer/z)
    [[nodiscard]] double z() const;
};

