#include <webbind/Accelerometer.hpp>


Accelerometer Accelerometer::take_ownership(Handle h) noexcept {
        return Accelerometer(h);
    }
Accelerometer Accelerometer::clone() const noexcept { return *this; }
Accelerometer::Accelerometer(Handle h) noexcept : Sensor(emlite::Val::take_ownership(h)) {}
Accelerometer::Accelerometer(const emlite::Val &val) noexcept: Sensor(val) {}


Accelerometer::Accelerometer() : Sensor(emlite::Val::global("Accelerometer").new_()) {}

Accelerometer::Accelerometer(const jsbind::Any& options) : Sensor(emlite::Val::global("Accelerometer").new_(options)) {}

double Accelerometer::x() const {
    return Sensor::get("x").as<double>();
}

double Accelerometer::y() const {
    return Sensor::get("y").as<double>();
}

double Accelerometer::z() const {
    return Sensor::get("z").as<double>();
}

