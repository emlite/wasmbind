#include <webbind/Accelerometer.hpp>
#include <webbind/AccelerometerSensorOptions.hpp>

namespace webbind {

Accelerometer Accelerometer::take_ownership(Handle h) noexcept {
    return Accelerometer(h);
}

Accelerometer Accelerometer::clone() const noexcept { return *this; }

emlite::Val Accelerometer::instance() noexcept { return emlite::Val::global("Accelerometer"); }

Accelerometer::Accelerometer(Handle h) noexcept : Sensor(emlite::Val::take_ownership(h)) {}

Accelerometer::Accelerometer(const emlite::Val &val) noexcept: Sensor(val) {}

Accelerometer::Accelerometer() : Sensor(emlite::Val::global("Accelerometer").new_()) {}

Accelerometer::Accelerometer(const AccelerometerSensorOptions& options) : Sensor(emlite::Val::global("Accelerometer").new_(options)) {}

double Accelerometer::x() const {
    return Sensor::get("x").as<double>();
}

double Accelerometer::y() const {
    return Sensor::get("y").as<double>();
}

double Accelerometer::z() const {
    return Sensor::get("z").as<double>();
}


} // namespace webbind