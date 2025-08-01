#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "Sensor.hpp"
#include "enums.hpp"


/// The ProximitySensor class.
/// [`ProximitySensor`](https://developer.mozilla.org/en-US/docs/Web/API/ProximitySensor)
class ProximitySensor : public Sensor {
    explicit ProximitySensor(Handle h) noexcept;

public:
    explicit ProximitySensor(const emlite::Val &val) noexcept;
    static ProximitySensor take_ownership(Handle h) noexcept;

    [[nodiscard]] ProximitySensor clone() const noexcept;
    /// The `new ProximitySensor(..)` constructor, creating a new ProximitySensor instance
    ProximitySensor();
    /// The `new ProximitySensor(..)` constructor, creating a new ProximitySensor instance
    ProximitySensor(const jsbind::Any& sensorOptions);
    /// Getter of the `distance` attribute.
    /// [`ProximitySensor.distance`](https://developer.mozilla.org/en-US/docs/Web/API/ProximitySensor/distance)
    [[nodiscard]] double distance() const;
    /// Getter of the `max` attribute.
    /// [`ProximitySensor.max`](https://developer.mozilla.org/en-US/docs/Web/API/ProximitySensor/max)
    [[nodiscard]] double max() const;
    /// Getter of the `near` attribute.
    /// [`ProximitySensor.near`](https://developer.mozilla.org/en-US/docs/Web/API/ProximitySensor/near)
    [[nodiscard]] bool near() const;
};

