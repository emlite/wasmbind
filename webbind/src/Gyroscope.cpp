#include <webbind/Gyroscope.hpp>
#include <webbind/GyroscopeSensorOptions.hpp>

namespace webbind {

Gyroscope Gyroscope::take_ownership(Handle h) noexcept {
        return Gyroscope(h);
    }
Gyroscope Gyroscope::clone() const noexcept { return *this; }
emlite::Val Gyroscope::instance() noexcept { return emlite::Val::global("Gyroscope"); }
Gyroscope::Gyroscope(Handle h) noexcept : Sensor(emlite::Val::take_ownership(h)) {}
Gyroscope::Gyroscope(const emlite::Val &val) noexcept: Sensor(val) {}

Gyroscope::Gyroscope() : Sensor(emlite::Val::global("Gyroscope").new_()) {}

Gyroscope::Gyroscope(const GyroscopeSensorOptions& sensorOptions) : Sensor(emlite::Val::global("Gyroscope").new_(sensorOptions)) {}

double Gyroscope::x() const {
    return Sensor::get("x").as<double>();
}

double Gyroscope::y() const {
    return Sensor::get("y").as<double>();
}

double Gyroscope::z() const {
    return Sensor::get("z").as<double>();
}


} // namespace webbind