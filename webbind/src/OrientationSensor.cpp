#include <webbind/OrientationSensor.hpp>

namespace webbind {

OrientationSensor OrientationSensor::take_ownership(Handle h) noexcept {
    return OrientationSensor(h);
}

OrientationSensor OrientationSensor::clone() const noexcept { return *this; }

emlite::Val OrientationSensor::instance() noexcept { return emlite::Val::global("OrientationSensor"); }

OrientationSensor::OrientationSensor(Handle h) noexcept : Sensor(emlite::Val::take_ownership(h)) {}

OrientationSensor::OrientationSensor(const emlite::Val &val) noexcept: Sensor(val) {}

jsbind::TypedArray<double> OrientationSensor::quaternion() const {
    return Sensor::get("quaternion").as<jsbind::TypedArray<double>>();
}

jsbind::Undefined OrientationSensor::populateMatrix(const jsbind::Any& targetMatrix) {
    return Sensor::call("populateMatrix", targetMatrix).as<jsbind::Undefined>();
}


} // namespace webbind