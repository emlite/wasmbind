#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "OrientationSensor.hpp"
#include "enums.hpp"


/// The RelativeOrientationSensor class.
/// [`RelativeOrientationSensor`](https://developer.mozilla.org/en-US/docs/Web/API/RelativeOrientationSensor)
class RelativeOrientationSensor : public OrientationSensor {
    explicit RelativeOrientationSensor(Handle h) noexcept;

public:
    explicit RelativeOrientationSensor(const emlite::Val &val) noexcept;
    static RelativeOrientationSensor take_ownership(Handle h) noexcept;

    [[nodiscard]] RelativeOrientationSensor clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// The `new RelativeOrientationSensor(..)` constructor, creating a new RelativeOrientationSensor instance
    RelativeOrientationSensor();
    /// The `new RelativeOrientationSensor(..)` constructor, creating a new RelativeOrientationSensor instance
    RelativeOrientationSensor(const jsbind::Any& sensorOptions);
};

