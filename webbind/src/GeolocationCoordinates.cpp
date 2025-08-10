#include <webbind/GeolocationCoordinates.hpp>

namespace webbind {

GeolocationCoordinates GeolocationCoordinates::take_ownership(Handle h) noexcept {
        return GeolocationCoordinates(h);
    }
GeolocationCoordinates GeolocationCoordinates::clone() const noexcept { return *this; }
emlite::Val GeolocationCoordinates::instance() noexcept { return emlite::Val::global("GeolocationCoordinates"); }
GeolocationCoordinates::GeolocationCoordinates(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
GeolocationCoordinates::GeolocationCoordinates(const emlite::Val &val) noexcept: emlite::Val(val) {}

double GeolocationCoordinates::accuracy() const {
    return emlite::Val::get("accuracy").as<double>();
}

double GeolocationCoordinates::latitude() const {
    return emlite::Val::get("latitude").as<double>();
}

double GeolocationCoordinates::longitude() const {
    return emlite::Val::get("longitude").as<double>();
}

double GeolocationCoordinates::altitude() const {
    return emlite::Val::get("altitude").as<double>();
}

double GeolocationCoordinates::altitudeAccuracy() const {
    return emlite::Val::get("altitudeAccuracy").as<double>();
}

double GeolocationCoordinates::heading() const {
    return emlite::Val::get("heading").as<double>();
}

double GeolocationCoordinates::speed() const {
    return emlite::Val::get("speed").as<double>();
}

jsbind::Object GeolocationCoordinates::toJSON() {
    return emlite::Val::call("toJSON").as<jsbind::Object>();
}


} // namespace webbind