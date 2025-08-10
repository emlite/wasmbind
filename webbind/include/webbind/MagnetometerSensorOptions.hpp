#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "SensorOptions.hpp"

namespace webbind {

/// Dictionary type MagnetometerSensorOptions
/// [`MagnetometerSensorOptions`](https://developer.mozilla.org/en-US/docs/Web/API/MagnetometerSensorOptions)
class MagnetometerSensorOptions : public SensorOptions {
  explicit MagnetometerSensorOptions(Handle h) noexcept;
public:
    static MagnetometerSensorOptions take_ownership(Handle h) noexcept;
    explicit MagnetometerSensorOptions(const emlite::Val &val) noexcept;
    MagnetometerSensorOptions() noexcept;
    [[nodiscard]] MagnetometerSensorOptions clone() const noexcept;
    [[nodiscard]] MagnetometerLocalCoordinateSystem referenceFrame() const;
    void referenceFrame(const MagnetometerLocalCoordinateSystem& value);
};

} // namespace webbind