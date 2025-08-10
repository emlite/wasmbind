#include <webbind/RelativeOrientationSensor.hpp>
#include <webbind/OrientationSensorOptions.hpp>

namespace webbind {

RelativeOrientationSensor RelativeOrientationSensor::take_ownership(Handle h) noexcept {
    return RelativeOrientationSensor(h);
}

RelativeOrientationSensor RelativeOrientationSensor::clone() const noexcept { return *this; }

emlite::Val RelativeOrientationSensor::instance() noexcept { return emlite::Val::global("RelativeOrientationSensor"); }

RelativeOrientationSensor::RelativeOrientationSensor(Handle h) noexcept : OrientationSensor(emlite::Val::take_ownership(h)) {}

RelativeOrientationSensor::RelativeOrientationSensor(const emlite::Val &val) noexcept: OrientationSensor(val) {}

RelativeOrientationSensor::RelativeOrientationSensor() : OrientationSensor(emlite::Val::global("RelativeOrientationSensor").new_()) {}

RelativeOrientationSensor::RelativeOrientationSensor(const OrientationSensorOptions& sensorOptions) : OrientationSensor(emlite::Val::global("RelativeOrientationSensor").new_(sensorOptions)) {}


} // namespace webbind