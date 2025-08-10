#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "Sensor.hpp"
#include "GyroscopeSensorOptions.hpp"

namespace webbind {

/// Interface Gyroscope
/// [`Gyroscope`](https://developer.mozilla.org/en-US/docs/Web/API/Gyroscope)
class Gyroscope : public Sensor {
    explicit Gyroscope(Handle h) noexcept;
public:
    explicit Gyroscope(const emlite::Val &val) noexcept;
    static Gyroscope take_ownership(Handle h) noexcept;
    [[nodiscard]] Gyroscope clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// The `new Gyroscope(..)` constructor, creating a new Gyroscope instance
    Gyroscope();
    /// The `new Gyroscope(..)` constructor, creating a new Gyroscope instance
    Gyroscope(const GyroscopeSensorOptions& sensorOptions);
    /// Getter of the `x` attribute.
    /// [`Gyroscope.x`](https://developer.mozilla.org/en-US/docs/Web/API/Gyroscope/x)
    [[nodiscard]] double x() const;
    /// Getter of the `y` attribute.
    /// [`Gyroscope.y`](https://developer.mozilla.org/en-US/docs/Web/API/Gyroscope/y)
    [[nodiscard]] double y() const;
    /// Getter of the `z` attribute.
    /// [`Gyroscope.z`](https://developer.mozilla.org/en-US/docs/Web/API/Gyroscope/z)
    [[nodiscard]] double z() const;
};

} // namespace webbind