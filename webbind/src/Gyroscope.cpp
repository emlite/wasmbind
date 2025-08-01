#include <webbind/Gyroscope.hpp>


Gyroscope Gyroscope::take_ownership(Handle h) noexcept {
        return Gyroscope(h);
    }
Gyroscope Gyroscope::clone() const noexcept { return *this; }
Gyroscope::Gyroscope(Handle h) noexcept : Sensor(emlite::Val::take_ownership(h)) {}
Gyroscope::Gyroscope(const emlite::Val &val) noexcept: Sensor(val) {}


Gyroscope::Gyroscope() : Sensor(emlite::Val::global("Gyroscope").new_()) {}

Gyroscope::Gyroscope(const jsbind::Any& sensorOptions) : Sensor(emlite::Val::global("Gyroscope").new_(sensorOptions)) {}

double Gyroscope::x() const {
    return Sensor::get("x").as<double>();
}

double Gyroscope::y() const {
    return Sensor::get("y").as<double>();
}

double Gyroscope::z() const {
    return Sensor::get("z").as<double>();
}

