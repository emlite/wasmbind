#include <webbind/MagnetometerSensorOptions.hpp>

namespace webbind {

MagnetometerSensorOptions::MagnetometerSensorOptions(Handle h) noexcept : SensorOptions(emlite::Val::take_ownership(h)) {}
MagnetometerSensorOptions MagnetometerSensorOptions::take_ownership(Handle h) noexcept {
    return MagnetometerSensorOptions(h);
}

MagnetometerSensorOptions::MagnetometerSensorOptions(const emlite::Val &val) noexcept: SensorOptions(val) {}

MagnetometerSensorOptions::MagnetometerSensorOptions() noexcept: SensorOptions(emlite::Val::object()) {}

MagnetometerSensorOptions MagnetometerSensorOptions::clone() const noexcept { return *this; }

MagnetometerLocalCoordinateSystem MagnetometerSensorOptions::referenceFrame() const {
    return emlite::Val::get("referenceFrame").as<MagnetometerLocalCoordinateSystem>();
}

void MagnetometerSensorOptions::referenceFrame(const MagnetometerLocalCoordinateSystem& value) {
    emlite::Val::set("referenceFrame", value);
}


} // namespace webbind