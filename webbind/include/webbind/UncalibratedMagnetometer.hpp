#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "Sensor.hpp"
#include "enums.hpp"


/// The UncalibratedMagnetometer class.
/// [`UncalibratedMagnetometer`](https://developer.mozilla.org/en-US/docs/Web/API/UncalibratedMagnetometer)
class UncalibratedMagnetometer : public Sensor {
    explicit UncalibratedMagnetometer(Handle h) noexcept;

public:
    explicit UncalibratedMagnetometer(const emlite::Val &val) noexcept;
    static UncalibratedMagnetometer take_ownership(Handle h) noexcept;

    [[nodiscard]] UncalibratedMagnetometer clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// The `new UncalibratedMagnetometer(..)` constructor, creating a new UncalibratedMagnetometer instance
    UncalibratedMagnetometer();
    /// The `new UncalibratedMagnetometer(..)` constructor, creating a new UncalibratedMagnetometer instance
    UncalibratedMagnetometer(const jsbind::Any& sensorOptions);
    /// Getter of the `x` attribute.
    /// [`UncalibratedMagnetometer.x`](https://developer.mozilla.org/en-US/docs/Web/API/UncalibratedMagnetometer/x)
    [[nodiscard]] double x() const;
    /// Getter of the `y` attribute.
    /// [`UncalibratedMagnetometer.y`](https://developer.mozilla.org/en-US/docs/Web/API/UncalibratedMagnetometer/y)
    [[nodiscard]] double y() const;
    /// Getter of the `z` attribute.
    /// [`UncalibratedMagnetometer.z`](https://developer.mozilla.org/en-US/docs/Web/API/UncalibratedMagnetometer/z)
    [[nodiscard]] double z() const;
    /// Getter of the `xBias` attribute.
    /// [`UncalibratedMagnetometer.xBias`](https://developer.mozilla.org/en-US/docs/Web/API/UncalibratedMagnetometer/xBias)
    [[nodiscard]] double xBias() const;
    /// Getter of the `yBias` attribute.
    /// [`UncalibratedMagnetometer.yBias`](https://developer.mozilla.org/en-US/docs/Web/API/UncalibratedMagnetometer/yBias)
    [[nodiscard]] double yBias() const;
    /// Getter of the `zBias` attribute.
    /// [`UncalibratedMagnetometer.zBias`](https://developer.mozilla.org/en-US/docs/Web/API/UncalibratedMagnetometer/zBias)
    [[nodiscard]] double zBias() const;
};

