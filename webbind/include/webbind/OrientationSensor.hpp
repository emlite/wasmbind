#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "Sensor.hpp"
#include "enums.hpp"


/// The OrientationSensor class.
/// [`OrientationSensor`](https://developer.mozilla.org/en-US/docs/Web/API/OrientationSensor)
class OrientationSensor : public Sensor {
    explicit OrientationSensor(Handle h) noexcept;

public:
    explicit OrientationSensor(const emlite::Val &val) noexcept;
    static OrientationSensor take_ownership(Handle h) noexcept;

    [[nodiscard]] OrientationSensor clone() const noexcept;
    /// Getter of the `quaternion` attribute.
    /// [`OrientationSensor.quaternion`](https://developer.mozilla.org/en-US/docs/Web/API/OrientationSensor/quaternion)
    [[nodiscard]] jsbind::TypedArray<double> quaternion() const;
    /// The populateMatrix method.
    /// [`OrientationSensor.populateMatrix`](https://developer.mozilla.org/en-US/docs/Web/API/OrientationSensor/populateMatrix)
    jsbind::Undefined populateMatrix(const jsbind::Any& targetMatrix);
};

