#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "Sensor.hpp"
#include "enums.hpp"


class AmbientLightSensor : public Sensor {
    explicit AmbientLightSensor(Handle h) noexcept;

public:
    explicit AmbientLightSensor(const emlite::Val &val) noexcept;
    static AmbientLightSensor take_ownership(Handle h) noexcept;

    AmbientLightSensor clone() const noexcept;
    AmbientLightSensor();
    AmbientLightSensor(const jsbind::Any& sensorOptions);
    double illuminance() const;
};

