#include <webbind/GravitySensor.hpp>
#include <webbind/AccelerometerSensorOptions.hpp>

namespace webbind {

GravitySensor GravitySensor::take_ownership(Handle h) noexcept {
        return GravitySensor(h);
    }
GravitySensor GravitySensor::clone() const noexcept { return *this; }
emlite::Val GravitySensor::instance() noexcept { return emlite::Val::global("GravitySensor"); }
GravitySensor::GravitySensor(Handle h) noexcept : Accelerometer(emlite::Val::take_ownership(h)) {}
GravitySensor::GravitySensor(const emlite::Val &val) noexcept: Accelerometer(val) {}

GravitySensor::GravitySensor() : Accelerometer(emlite::Val::global("GravitySensor").new_()) {}

GravitySensor::GravitySensor(const AccelerometerSensorOptions& options) : Accelerometer(emlite::Val::global("GravitySensor").new_(options)) {}


} // namespace webbind