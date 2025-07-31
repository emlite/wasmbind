#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "Sensor.hpp"
#include "enums.hpp"


/// The Accelerometer class.
/// [`Accelerometer`](https://developer.mozilla.org/en-US/docs/Web/API/Accelerometer)
class Accelerometer : public Sensor {
    explicit Accelerometer(Handle h) noexcept;

public:
    explicit Accelerometer(const emlite::Val &val) noexcept;
    static Accelerometer take_ownership(Handle h) noexcept;

    [[nodiscard]] Accelerometer clone() const noexcept;
    /// The `new Accelerometer(..)` constructor, creating a new Accelerometer instance
    Accelerometer();
    /// The `new Accelerometer(..)` constructor, creating a new Accelerometer instance
    Accelerometer(const jsbind::Any& options);
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

