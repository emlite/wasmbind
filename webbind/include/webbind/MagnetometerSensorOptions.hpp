#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "SensorOptions.hpp"

namespace webbind {

/// Dictionary type MagnetometerSensorOptions
class MagnetometerSensorOptions : public SensorOptions {
  explicit MagnetometerSensorOptions(Handle h) noexcept;
public:
    static MagnetometerSensorOptions take_ownership(Handle h) noexcept;
    explicit MagnetometerSensorOptions(const emlite::Val &val) noexcept;
    MagnetometerSensorOptions() noexcept;
    [[nodiscard]] MagnetometerSensorOptions clone() const noexcept;
    /// Getter of the `referenceFrame` attribute.
    [[nodiscard]] MagnetometerLocalCoordinateSystem referenceFrame() const;
    /// Setter of the `referenceFrame` attribute.
    void referenceFrame(const MagnetometerLocalCoordinateSystem& value);
};

} // namespace webbind