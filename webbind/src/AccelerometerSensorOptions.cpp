#include <webbind/AccelerometerSensorOptions.hpp>

using emlite::Val;
namespace webbind {

AccelerometerSensorOptions::AccelerometerSensorOptions(Handle h) noexcept : SensorOptions(emlite::Val::take_ownership(h)) {}
AccelerometerSensorOptions AccelerometerSensorOptions::take_ownership(Handle h) noexcept {
        return AccelerometerSensorOptions(h);
    }
AccelerometerSensorOptions::AccelerometerSensorOptions(const emlite::Val &val) noexcept: SensorOptions(val) {}
AccelerometerSensorOptions::AccelerometerSensorOptions() noexcept: SensorOptions(emlite::Val::object()) {}
AccelerometerSensorOptions AccelerometerSensorOptions::clone() const noexcept { return *this; }

AccelerometerLocalCoordinateSystem AccelerometerSensorOptions::referenceFrame() const {
    return emlite::Val::get("referenceFrame").as<AccelerometerLocalCoordinateSystem>();
}

void AccelerometerSensorOptions::referenceFrame(const AccelerometerLocalCoordinateSystem& value) {
    emlite::Val::set("referenceFrame", value);
}


} // namespace webbind