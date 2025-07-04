#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "OrientationSensor.hpp"
#include "enums.hpp"


class AbsoluteOrientationSensor : public OrientationSensor {
    explicit AbsoluteOrientationSensor(Handle h) noexcept;

public:
    explicit AbsoluteOrientationSensor(const emlite::Val &val) noexcept;
    static AbsoluteOrientationSensor take_ownership(Handle h) noexcept;

    AbsoluteOrientationSensor clone() const noexcept;
    AbsoluteOrientationSensor(const jsbind::Any& sensorOptions);
};

