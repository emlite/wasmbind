#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "Accelerometer.hpp"
#include "enums.hpp"


class GravitySensor : public Accelerometer {
    explicit GravitySensor(Handle h) noexcept;

public:
    explicit GravitySensor(const emlite::Val &val) noexcept;
    static GravitySensor take_ownership(Handle h) noexcept;

    GravitySensor clone() const noexcept;
    GravitySensor(const jsbind::Any& options);
};

