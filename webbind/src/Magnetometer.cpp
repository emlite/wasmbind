#include <webbind/Magnetometer.hpp>


Magnetometer Magnetometer::take_ownership(Handle h) noexcept {
        return Magnetometer(h);
    }
Magnetometer Magnetometer::clone() const noexcept { return *this; }
emlite::Val Magnetometer::instance() noexcept { return emlite::Val::global("Magnetometer"); }
Magnetometer::Magnetometer(Handle h) noexcept : Sensor(emlite::Val::take_ownership(h)) {}
Magnetometer::Magnetometer(const emlite::Val &val) noexcept: Sensor(val) {}


Magnetometer::Magnetometer() : Sensor(emlite::Val::global("Magnetometer").new_()) {}

Magnetometer::Magnetometer(const jsbind::Any& sensorOptions) : Sensor(emlite::Val::global("Magnetometer").new_(sensorOptions)) {}

double Magnetometer::x() const {
    return Sensor::get("x").as<double>();
}

double Magnetometer::y() const {
    return Sensor::get("y").as<double>();
}

double Magnetometer::z() const {
    return Sensor::get("z").as<double>();
}

