#include <webbind/GeolocationSensorOptions.hpp>

namespace webbind {

GeolocationSensorOptions::GeolocationSensorOptions(Handle h) noexcept : SensorOptions(emlite::Val::take_ownership(h)) {}
GeolocationSensorOptions GeolocationSensorOptions::take_ownership(Handle h) noexcept {
    return GeolocationSensorOptions(h);
}

GeolocationSensorOptions::GeolocationSensorOptions(const emlite::Val &val) noexcept: SensorOptions(val) {}

GeolocationSensorOptions::GeolocationSensorOptions() noexcept: SensorOptions(emlite::Val::object()) {}

GeolocationSensorOptions GeolocationSensorOptions::clone() const noexcept { return *this; }


} // namespace webbind