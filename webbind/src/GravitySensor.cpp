#include <webbind/GravitySensor.hpp>


GravitySensor GravitySensor::take_ownership(Handle h) noexcept {
        return GravitySensor(h);
    }
GravitySensor GravitySensor::clone() const noexcept { return *this; }
GravitySensor::GravitySensor(Handle h) noexcept : Accelerometer(emlite::Val::take_ownership(h)) {}
GravitySensor::GravitySensor(const emlite::Val &val) noexcept: Accelerometer(val) {}


GravitySensor::GravitySensor(const jsbind::Any& options): Accelerometer(emlite::Val::global("GravitySensor").new_(options)) {}

