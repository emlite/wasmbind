#include <webbind/RelativeOrientationSensor.hpp>


RelativeOrientationSensor RelativeOrientationSensor::take_ownership(Handle h) noexcept {
        return RelativeOrientationSensor(h);
    }
RelativeOrientationSensor RelativeOrientationSensor::clone() const noexcept { return *this; }
RelativeOrientationSensor::RelativeOrientationSensor(Handle h) noexcept : OrientationSensor(emlite::Val::take_ownership(h)) {}
RelativeOrientationSensor::RelativeOrientationSensor(const emlite::Val &val) noexcept: OrientationSensor(val) {}


RelativeOrientationSensor::RelativeOrientationSensor() : OrientationSensor(emlite::Val::global("RelativeOrientationSensor").new_()) {}

RelativeOrientationSensor::RelativeOrientationSensor(const jsbind::Any& sensorOptions) : OrientationSensor(emlite::Val::global("RelativeOrientationSensor").new_(sensorOptions)) {}

