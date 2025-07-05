#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "Sensor.hpp"
#include "enums.hpp"


class ProximitySensor : public Sensor {
    explicit ProximitySensor(Handle h) noexcept;

public:
    explicit ProximitySensor(const emlite::Val &val) noexcept;
    static ProximitySensor take_ownership(Handle h) noexcept;

    ProximitySensor clone() const noexcept;
    ProximitySensor();
    ProximitySensor(const jsbind::Any& sensorOptions);
    double distance() const;
    double max() const;
    bool near() const;
};

