#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "SensorOptions.hpp"

namespace webbind {

/// Dictionary type AccelerometerSensorOptions
/// [`AccelerometerSensorOptions`](https://developer.mozilla.org/en-US/docs/Web/API/AccelerometerSensorOptions)
class AccelerometerSensorOptions : public SensorOptions {
  explicit AccelerometerSensorOptions(Handle h) noexcept;
public:
    static AccelerometerSensorOptions take_ownership(Handle h) noexcept;
    explicit AccelerometerSensorOptions(const emlite::Val &val) noexcept;
    AccelerometerSensorOptions() noexcept;
    [[nodiscard]] AccelerometerSensorOptions clone() const noexcept;
    [[nodiscard]] AccelerometerLocalCoordinateSystem referenceFrame() const;
    void referenceFrame(const AccelerometerLocalCoordinateSystem& value);
};

} // namespace webbind