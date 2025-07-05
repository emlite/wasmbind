#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "Sensor.hpp"
#include "enums.hpp"


class UncalibratedMagnetometer : public Sensor {
    explicit UncalibratedMagnetometer(Handle h) noexcept;

public:
    explicit UncalibratedMagnetometer(const emlite::Val &val) noexcept;
    static UncalibratedMagnetometer take_ownership(Handle h) noexcept;

    UncalibratedMagnetometer clone() const noexcept;
    UncalibratedMagnetometer();
    UncalibratedMagnetometer(const jsbind::Any& sensorOptions);
    double x() const;
    double y() const;
    double z() const;
    double xBias() const;
    double yBias() const;
    double zBias() const;
};

