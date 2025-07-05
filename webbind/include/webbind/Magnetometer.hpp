#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "Sensor.hpp"
#include "enums.hpp"


class Magnetometer : public Sensor {
    explicit Magnetometer(Handle h) noexcept;

public:
    explicit Magnetometer(const emlite::Val &val) noexcept;
    static Magnetometer take_ownership(Handle h) noexcept;

    Magnetometer clone() const noexcept;
    Magnetometer();
    Magnetometer(const jsbind::Any& sensorOptions);
    double x() const;
    double y() const;
    double z() const;
};

