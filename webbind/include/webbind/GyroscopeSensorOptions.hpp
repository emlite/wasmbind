#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "SensorOptions.hpp"

namespace webbind {

/// Dictionary type GyroscopeSensorOptions
/// [`GyroscopeSensorOptions`](https://developer.mozilla.org/en-US/docs/Web/API/GyroscopeSensorOptions)
class GyroscopeSensorOptions : public SensorOptions {
  explicit GyroscopeSensorOptions(Handle h) noexcept;
public:
    static GyroscopeSensorOptions take_ownership(Handle h) noexcept;
    explicit GyroscopeSensorOptions(const emlite::Val &val) noexcept;
    GyroscopeSensorOptions() noexcept;
    [[nodiscard]] GyroscopeSensorOptions clone() const noexcept;
    [[nodiscard]] GyroscopeLocalCoordinateSystem referenceFrame() const;
    void referenceFrame(const GyroscopeLocalCoordinateSystem& value);
};

} // namespace webbind