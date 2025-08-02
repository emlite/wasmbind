#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "Sensor.hpp"
#include "enums.hpp"


/// The AmbientLightSensor class.
/// [`AmbientLightSensor`](https://developer.mozilla.org/en-US/docs/Web/API/AmbientLightSensor)
class AmbientLightSensor : public Sensor {
    explicit AmbientLightSensor(Handle h) noexcept;

public:
    explicit AmbientLightSensor(const emlite::Val &val) noexcept;
    static AmbientLightSensor take_ownership(Handle h) noexcept;

    [[nodiscard]] AmbientLightSensor clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// The `new AmbientLightSensor(..)` constructor, creating a new AmbientLightSensor instance
    AmbientLightSensor();
    /// The `new AmbientLightSensor(..)` constructor, creating a new AmbientLightSensor instance
    AmbientLightSensor(const jsbind::Any& sensorOptions);
    /// Getter of the `illuminance` attribute.
    /// [`AmbientLightSensor.illuminance`](https://developer.mozilla.org/en-US/docs/Web/API/AmbientLightSensor/illuminance)
    [[nodiscard]] double illuminance() const;
};

