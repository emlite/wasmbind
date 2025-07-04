#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "Sensor.hpp"
#include "enums.hpp"


class Gyroscope : public Sensor {
    explicit Gyroscope(Handle h) noexcept;

public:
    explicit Gyroscope(const emlite::Val &val) noexcept;
    static Gyroscope take_ownership(Handle h) noexcept;

    Gyroscope clone() const noexcept;
    Gyroscope(const jsbind::Any& sensorOptions);
    double x() const;
    double y() const;
    double z() const;
};

