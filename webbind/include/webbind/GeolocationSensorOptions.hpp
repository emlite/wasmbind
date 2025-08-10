#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "SensorOptions.hpp"

namespace webbind {

/// Dictionary type GeolocationSensorOptions
/// [`GeolocationSensorOptions`](https://developer.mozilla.org/en-US/docs/Web/API/GeolocationSensorOptions)
class GeolocationSensorOptions : public SensorOptions {
  explicit GeolocationSensorOptions(Handle h) noexcept;
public:
    static GeolocationSensorOptions take_ownership(Handle h) noexcept;
    explicit GeolocationSensorOptions(const emlite::Val &val) noexcept;
    GeolocationSensorOptions() noexcept;
    [[nodiscard]] GeolocationSensorOptions clone() const noexcept;
};

} // namespace webbind