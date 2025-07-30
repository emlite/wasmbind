#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "Sensor.hpp"
#include "enums.hpp"


class OrientationSensor : public Sensor {
    explicit OrientationSensor(Handle h) noexcept;

public:
    explicit OrientationSensor(const emlite::Val &val) noexcept;
    static OrientationSensor take_ownership(Handle h) noexcept;

    OrientationSensor clone() const noexcept;
    jsbind::TypedArray<double> quaternion() const;
    jsbind::Undefined populateMatrix(const jsbind::Any& targetMatrix);
};

