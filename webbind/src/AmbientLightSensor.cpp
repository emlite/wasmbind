#include <webbind/AmbientLightSensor.hpp>


AmbientLightSensor AmbientLightSensor::take_ownership(Handle h) noexcept {
        return AmbientLightSensor(h);
    }
AmbientLightSensor AmbientLightSensor::clone() const noexcept { return *this; }
AmbientLightSensor::AmbientLightSensor(Handle h) noexcept : Sensor(emlite::Val::take_ownership(h)) {}
AmbientLightSensor::AmbientLightSensor(const emlite::Val &val) noexcept: Sensor(val) {}


AmbientLightSensor::AmbientLightSensor(const jsbind::Any& sensorOptions): Sensor(emlite::Val::global("AmbientLightSensor").new_(sensorOptions)) {}

double AmbientLightSensor::illuminance() const {
    return Sensor::get("illuminance").as<double>();
}

