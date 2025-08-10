#include "webbind/AmbientLightSensor.hpp"
#include "webbind/SensorOptions.hpp"

namespace webbind {

AmbientLightSensor AmbientLightSensor::take_ownership(Handle h) noexcept {
        return AmbientLightSensor(h);
    }
AmbientLightSensor AmbientLightSensor::clone() const noexcept { return *this; }
emlite::Val AmbientLightSensor::instance() noexcept { return emlite::Val::global("AmbientLightSensor"); }
AmbientLightSensor::AmbientLightSensor(Handle h) noexcept : Sensor(emlite::Val::take_ownership(h)) {}
AmbientLightSensor::AmbientLightSensor(const emlite::Val &val) noexcept: Sensor(val) {}

AmbientLightSensor::AmbientLightSensor() : Sensor(emlite::Val::global("AmbientLightSensor").new_()) {}

AmbientLightSensor::AmbientLightSensor(const SensorOptions& sensorOptions) : Sensor(emlite::Val::global("AmbientLightSensor").new_(sensorOptions)) {}

double AmbientLightSensor::illuminance() const {
    return Sensor::get("illuminance").as<double>();
}


} // namespace webbind