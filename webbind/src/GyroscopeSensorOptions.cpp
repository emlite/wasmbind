#include <webbind/GyroscopeSensorOptions.hpp>

using emlite::Val;
namespace webbind {

GyroscopeSensorOptions::GyroscopeSensorOptions(Handle h) noexcept : SensorOptions(emlite::Val::take_ownership(h)) {}
GyroscopeSensorOptions GyroscopeSensorOptions::take_ownership(Handle h) noexcept {
        return GyroscopeSensorOptions(h);
    }
GyroscopeSensorOptions::GyroscopeSensorOptions(const emlite::Val &val) noexcept: SensorOptions(val) {}
GyroscopeSensorOptions::GyroscopeSensorOptions() noexcept: SensorOptions(emlite::Val::object()) {}
GyroscopeSensorOptions GyroscopeSensorOptions::clone() const noexcept { return *this; }

GyroscopeLocalCoordinateSystem GyroscopeSensorOptions::referenceFrame() const {
    return emlite::Val::get("referenceFrame").as<GyroscopeLocalCoordinateSystem>();
}

void GyroscopeSensorOptions::referenceFrame(const GyroscopeLocalCoordinateSystem& value) {
    emlite::Val::set("referenceFrame", value);
}


} // namespace webbind