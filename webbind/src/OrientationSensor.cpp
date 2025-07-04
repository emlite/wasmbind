#include <webbind/OrientationSensor.hpp>


OrientationSensor OrientationSensor::take_ownership(Handle h) noexcept {
        return OrientationSensor(h);
    }
OrientationSensor OrientationSensor::clone() const noexcept { return *this; }
OrientationSensor::OrientationSensor(Handle h) noexcept : Sensor(emlite::Val::take_ownership(h)) {}
OrientationSensor::OrientationSensor(const emlite::Val &val) noexcept: Sensor(val) {}


jsbind::FrozenArray<double> OrientationSensor::quaternion() const {
    return Sensor::get("quaternion").as<jsbind::FrozenArray<double>>();
}

jsbind::Undefined OrientationSensor::populateMatrix(const jsbind::Any& targetMatrix) {
    return Sensor::call("populateMatrix", targetMatrix).as<jsbind::Undefined>();
}

