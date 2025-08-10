#include <webbind/GeolocationSensor.hpp>
#include <webbind/GeolocationSensorOptions.hpp>
#include <webbind/GeolocationSensorReading.hpp>
#include <webbind/ReadOptions.hpp>

namespace webbind {

GeolocationSensor GeolocationSensor::take_ownership(Handle h) noexcept {
        return GeolocationSensor(h);
    }
GeolocationSensor GeolocationSensor::clone() const noexcept { return *this; }
emlite::Val GeolocationSensor::instance() noexcept { return emlite::Val::global("GeolocationSensor"); }
GeolocationSensor::GeolocationSensor(Handle h) noexcept : Sensor(emlite::Val::take_ownership(h)) {}
GeolocationSensor::GeolocationSensor(const emlite::Val &val) noexcept: Sensor(val) {}

GeolocationSensor::GeolocationSensor() : Sensor(emlite::Val::global("GeolocationSensor").new_()) {}

GeolocationSensor::GeolocationSensor(const GeolocationSensorOptions& options) : Sensor(emlite::Val::global("GeolocationSensor").new_(options)) {}

jsbind::Promise<GeolocationSensorReading> GeolocationSensor::read() {
    return emlite::Val::global("geolocationsensor").call("read").as<jsbind::Promise<GeolocationSensorReading>>();
}

jsbind::Promise<GeolocationSensorReading> GeolocationSensor::read(const ReadOptions& readOptions) {
    return emlite::Val::global("geolocationsensor").call("read", readOptions).as<jsbind::Promise<GeolocationSensorReading>>();
}

double GeolocationSensor::latitude() const {
    return Sensor::get("latitude").as<double>();
}

double GeolocationSensor::longitude() const {
    return Sensor::get("longitude").as<double>();
}

double GeolocationSensor::altitude() const {
    return Sensor::get("altitude").as<double>();
}

double GeolocationSensor::accuracy() const {
    return Sensor::get("accuracy").as<double>();
}

double GeolocationSensor::altitudeAccuracy() const {
    return Sensor::get("altitudeAccuracy").as<double>();
}

double GeolocationSensor::heading() const {
    return Sensor::get("heading").as<double>();
}

double GeolocationSensor::speed() const {
    return Sensor::get("speed").as<double>();
}


} // namespace webbind