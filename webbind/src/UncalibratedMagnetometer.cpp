#include <webbind/UncalibratedMagnetometer.hpp>


UncalibratedMagnetometer UncalibratedMagnetometer::take_ownership(Handle h) noexcept {
        return UncalibratedMagnetometer(h);
    }
UncalibratedMagnetometer UncalibratedMagnetometer::clone() const noexcept { return *this; }
UncalibratedMagnetometer::UncalibratedMagnetometer(Handle h) noexcept : Sensor(emlite::Val::take_ownership(h)) {}
UncalibratedMagnetometer::UncalibratedMagnetometer(const emlite::Val &val) noexcept: Sensor(val) {}


UncalibratedMagnetometer::UncalibratedMagnetometer() : Sensor(emlite::Val::global("UncalibratedMagnetometer").new_()) {}

UncalibratedMagnetometer::UncalibratedMagnetometer(const jsbind::Any& sensorOptions) : Sensor(emlite::Val::global("UncalibratedMagnetometer").new_(sensorOptions)) {}

double UncalibratedMagnetometer::x() const {
    return Sensor::get("x").as<double>();
}

double UncalibratedMagnetometer::y() const {
    return Sensor::get("y").as<double>();
}

double UncalibratedMagnetometer::z() const {
    return Sensor::get("z").as<double>();
}

double UncalibratedMagnetometer::xBias() const {
    return Sensor::get("xBias").as<double>();
}

double UncalibratedMagnetometer::yBias() const {
    return Sensor::get("yBias").as<double>();
}

double UncalibratedMagnetometer::zBias() const {
    return Sensor::get("zBias").as<double>();
}

