#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "Sensor.hpp"
#include "enums.hpp"


class Accelerometer : public Sensor {
    explicit Accelerometer(Handle h) noexcept;

public:
    explicit Accelerometer(const emlite::Val &val) noexcept;
    static Accelerometer take_ownership(Handle h) noexcept;

    Accelerometer clone() const noexcept;
    Accelerometer(const jsbind::Any& options);
    double x() const;
    double y() const;
    double z() const;
};

