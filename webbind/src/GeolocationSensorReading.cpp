#include <webbind/GeolocationSensorReading.hpp>

using emlite::Val;
namespace webbind {

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


} // namespace webbind