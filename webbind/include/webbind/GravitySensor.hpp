#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "Accelerometer.hpp"
#include "enums.hpp"


/// The GravitySensor class.
/// [`GravitySensor`](https://developer.mozilla.org/en-US/docs/Web/API/GravitySensor)
class GravitySensor : public Accelerometer {
    explicit GravitySensor(Handle h) noexcept;

public:
    explicit GravitySensor(const emlite::Val &val) noexcept;
    static GravitySensor take_ownership(Handle h) noexcept;

    [[nodiscard]] GravitySensor clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// The `new GravitySensor(..)` constructor, creating a new GravitySensor instance
    GravitySensor();
    /// The `new GravitySensor(..)` constructor, creating a new GravitySensor instance
    GravitySensor(const jsbind::Any& options);
};

