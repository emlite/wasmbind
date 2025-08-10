#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "Sensor.hpp"
#include "MagnetometerSensorOptions.hpp"

namespace webbind {

/// Interface UncalibratedMagnetometer
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
    UncalibratedMagnetometer(const MagnetometerSensorOptions& sensorOptions);
    /// [`UncalibratedMagnetometer.x`](https://developer.mozilla.org/en-US/docs/Web/API/UncalibratedMagnetometer/x)
    /// [`UncalibratedMagnetometer.x`](https://developer.mozilla.org/en-US/docs/Web/API/UncalibratedMagnetometer/x)
    [[nodiscard]] double x() const;
    /// [`UncalibratedMagnetometer.y`](https://developer.mozilla.org/en-US/docs/Web/API/UncalibratedMagnetometer/y)
    /// [`UncalibratedMagnetometer.y`](https://developer.mozilla.org/en-US/docs/Web/API/UncalibratedMagnetometer/y)
    [[nodiscard]] double y() const;
    /// [`UncalibratedMagnetometer.z`](https://developer.mozilla.org/en-US/docs/Web/API/UncalibratedMagnetometer/z)
    /// [`UncalibratedMagnetometer.z`](https://developer.mozilla.org/en-US/docs/Web/API/UncalibratedMagnetometer/z)
    [[nodiscard]] double z() const;
    /// [`UncalibratedMagnetometer.xBias`](https://developer.mozilla.org/en-US/docs/Web/API/UncalibratedMagnetometer/xBias)
    /// [`UncalibratedMagnetometer.xBias`](https://developer.mozilla.org/en-US/docs/Web/API/UncalibratedMagnetometer/xBias)
    [[nodiscard]] double xBias() const;
    /// [`UncalibratedMagnetometer.yBias`](https://developer.mozilla.org/en-US/docs/Web/API/UncalibratedMagnetometer/yBias)
    /// [`UncalibratedMagnetometer.yBias`](https://developer.mozilla.org/en-US/docs/Web/API/UncalibratedMagnetometer/yBias)
    [[nodiscard]] double yBias() const;
    /// [`UncalibratedMagnetometer.zBias`](https://developer.mozilla.org/en-US/docs/Web/API/UncalibratedMagnetometer/zBias)
    /// [`UncalibratedMagnetometer.zBias`](https://developer.mozilla.org/en-US/docs/Web/API/UncalibratedMagnetometer/zBias)
    [[nodiscard]] double zBias() const;
};

} // namespace webbind