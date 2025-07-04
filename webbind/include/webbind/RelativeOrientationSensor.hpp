#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "OrientationSensor.hpp"
#include "enums.hpp"


class RelativeOrientationSensor : public OrientationSensor {
    explicit RelativeOrientationSensor(Handle h) noexcept;

public:
    explicit RelativeOrientationSensor(const emlite::Val &val) noexcept;
    static RelativeOrientationSensor take_ownership(Handle h) noexcept;

    RelativeOrientationSensor clone() const noexcept;
    RelativeOrientationSensor(const jsbind::Any& sensorOptions);
};

