#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "OrientationSensor.hpp"

namespace webbind {

class OrientationSensorOptions;

/// Interface AbsoluteOrientationSensor
/// [`AbsoluteOrientationSensor`](https://developer.mozilla.org/en-US/docs/Web/API/AbsoluteOrientationSensor)
class AbsoluteOrientationSensor : public OrientationSensor {
    explicit AbsoluteOrientationSensor(Handle h) noexcept;
public:
    explicit AbsoluteOrientationSensor(const emlite::Val &val) noexcept;
    static AbsoluteOrientationSensor take_ownership(Handle h) noexcept;
    [[nodiscard]] AbsoluteOrientationSensor clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// The `new AbsoluteOrientationSensor(..)` constructor, creating a new AbsoluteOrientationSensor instance
    AbsoluteOrientationSensor();
    /// The `new AbsoluteOrientationSensor(..)` constructor, creating a new AbsoluteOrientationSensor instance
    AbsoluteOrientationSensor(const OrientationSensorOptions& sensorOptions);
};

} // namespace webbind