#include <webbind/GeolocationSensor.hpp>
#include <webbind/AbortSignal.hpp>


GeolocationSensorReading::GeolocationSensorReading(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
GeolocationSensorReading GeolocationSensorReading::take_ownership(Handle h) noexcept {
        return GeolocationSensorReading(h);
    }
GeolocationSensorReading::GeolocationSensorReading(const emlite::Val &val) noexcept: emlite::Val(val) {}
GeolocationSensorReading::GeolocationSensorReading() noexcept: emlite::Val(emlite::Val::object()) {}
GeolocationSensorReading GeolocationSensorReading::clone() const noexcept { return *this; }

jsbind::Any GeolocationSensorReading::timestamp() const {
    return emlite::Val::get("timestamp").as<jsbind::Any>();
}

void GeolocationSensorReading::timestamp(const jsbind::Any& value) {
    emlite::Val::set("timestamp", value);
}

double GeolocationSensorReading::latitude() const {
    return emlite::Val::get("latitude").as<double>();
}

void GeolocationSensorReading::latitude(double value) {
    emlite::Val::set("latitude", value);
}

double GeolocationSensorReading::longitude() const {
    return emlite::Val::get("longitude").as<double>();
}

void GeolocationSensorReading::longitude(double value) {
    emlite::Val::set("longitude", value);
}

double GeolocationSensorReading::altitude() const {
    return emlite::Val::get("altitude").as<double>();
}

void GeolocationSensorReading::altitude(double value) {
    emlite::Val::set("altitude", value);
}

double GeolocationSensorReading::accuracy() const {
    return emlite::Val::get("accuracy").as<double>();
}

void GeolocationSensorReading::accuracy(double value) {
    emlite::Val::set("accuracy", value);
}

double GeolocationSensorReading::altitudeAccuracy() const {
    return emlite::Val::get("altitudeAccuracy").as<double>();
}

void GeolocationSensorReading::altitudeAccuracy(double value) {
    emlite::Val::set("altitudeAccuracy", value);
}

double GeolocationSensorReading::heading() const {
    return emlite::Val::get("heading").as<double>();
}

void GeolocationSensorReading::heading(double value) {
    emlite::Val::set("heading", value);
}

double GeolocationSensorReading::speed() const {
    return emlite::Val::get("speed").as<double>();
}

void GeolocationSensorReading::speed(double value) {
    emlite::Val::set("speed", value);
}

ReadOptions::ReadOptions(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
ReadOptions ReadOptions::take_ownership(Handle h) noexcept {
        return ReadOptions(h);
    }
ReadOptions::ReadOptions(const emlite::Val &val) noexcept: emlite::Val(val) {}
ReadOptions::ReadOptions() noexcept: emlite::Val(emlite::Val::object()) {}
ReadOptions ReadOptions::clone() const noexcept { return *this; }

AbortSignal ReadOptions::signal() const {
    return emlite::Val::get("signal").as<AbortSignal>();
}

void ReadOptions::signal(const AbortSignal& value) {
    emlite::Val::set("signal", value);
}

GeolocationSensor GeolocationSensor::take_ownership(Handle h) noexcept {
        return GeolocationSensor(h);
    }
GeolocationSensor GeolocationSensor::clone() const noexcept { return *this; }
GeolocationSensor::GeolocationSensor(Handle h) noexcept : Sensor(emlite::Val::take_ownership(h)) {}
GeolocationSensor::GeolocationSensor(const emlite::Val &val) noexcept: Sensor(val) {}


GeolocationSensor::GeolocationSensor() : Sensor(emlite::Val::global("GeolocationSensor").new_()) {}

GeolocationSensor::GeolocationSensor(const jsbind::Any& options) : Sensor(emlite::Val::global("GeolocationSensor").new_(options)) {}

jsbind::Promise GeolocationSensor::read() {
    return emlite::Val::global("geolocationsensor").call("read").as<jsbind::Promise>();
}

jsbind::Promise GeolocationSensor::read(const ReadOptions& readOptions) {
    return emlite::Val::global("geolocationsensor").call("read", readOptions).as<jsbind::Promise>();
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

