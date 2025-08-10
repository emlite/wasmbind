#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "SensorOptions.hpp"

namespace webbind {

/// Dictionary type OrientationSensorOptions
class OrientationSensorOptions : public SensorOptions {
  explicit OrientationSensorOptions(Handle h) noexcept;
public:
    static OrientationSensorOptions take_ownership(Handle h) noexcept;
    explicit OrientationSensorOptions(const emlite::Val &val) noexcept;
    OrientationSensorOptions() noexcept;
    [[nodiscard]] OrientationSensorOptions clone() const noexcept;
    /// Getter of the `referenceFrame` attribute.
    [[nodiscard]] OrientationSensorLocalCoordinateSystem referenceFrame() const;
    /// Setter of the `referenceFrame` attribute.
    void referenceFrame(const OrientationSensorLocalCoordinateSystem& value);
};

} // namespace webbind