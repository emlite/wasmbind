#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "SensorOptions.hpp"

namespace webbind {

/// Dictionary type OrientationSensorOptions
/// [`OrientationSensorOptions`](https://developer.mozilla.org/en-US/docs/Web/API/OrientationSensorOptions)
class OrientationSensorOptions : public SensorOptions {
  explicit OrientationSensorOptions(Handle h) noexcept;
public:
    static OrientationSensorOptions take_ownership(Handle h) noexcept;
    explicit OrientationSensorOptions(const emlite::Val &val) noexcept;
    OrientationSensorOptions() noexcept;
    [[nodiscard]] OrientationSensorOptions clone() const noexcept;
    [[nodiscard]] OrientationSensorLocalCoordinateSystem referenceFrame() const;
    void referenceFrame(const OrientationSensorLocalCoordinateSystem& value);
};

} // namespace webbind