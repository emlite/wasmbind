#include <webbind/OrientationSensorOptions.hpp>

using emlite::Val;
namespace webbind {

OrientationSensorOptions::OrientationSensorOptions(Handle h) noexcept : SensorOptions(emlite::Val::take_ownership(h)) {}
OrientationSensorOptions OrientationSensorOptions::take_ownership(Handle h) noexcept {
        return OrientationSensorOptions(h);
    }
OrientationSensorOptions::OrientationSensorOptions(const emlite::Val &val) noexcept: SensorOptions(val) {}
OrientationSensorOptions::OrientationSensorOptions() noexcept: SensorOptions(emlite::Val::object()) {}
OrientationSensorOptions OrientationSensorOptions::clone() const noexcept { return *this; }

OrientationSensorLocalCoordinateSystem OrientationSensorOptions::referenceFrame() const {
    return emlite::Val::get("referenceFrame").as<OrientationSensorLocalCoordinateSystem>();
}

void OrientationSensorOptions::referenceFrame(const OrientationSensorLocalCoordinateSystem& value) {
    emlite::Val::set("referenceFrame", value);
}


} // namespace webbind