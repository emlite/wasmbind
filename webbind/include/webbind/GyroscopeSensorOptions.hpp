#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "SensorOptions.hpp"

namespace webbind {

/// Dictionary type GyroscopeSensorOptions
class GyroscopeSensorOptions : public SensorOptions {
  explicit GyroscopeSensorOptions(Handle h) noexcept;
public:
    static GyroscopeSensorOptions take_ownership(Handle h) noexcept;
    explicit GyroscopeSensorOptions(const emlite::Val &val) noexcept;
    GyroscopeSensorOptions() noexcept;
    [[nodiscard]] GyroscopeSensorOptions clone() const noexcept;
    /// Getter of the `referenceFrame` attribute.
    [[nodiscard]] GyroscopeLocalCoordinateSystem referenceFrame() const;
    /// Setter of the `referenceFrame` attribute.
    void referenceFrame(const GyroscopeLocalCoordinateSystem& value);
};

} // namespace webbind