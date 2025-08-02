#include <webbind/GeolocationPosition.hpp>
#include <webbind/GeolocationCoordinates.hpp>


GeolocationPosition GeolocationPosition::take_ownership(Handle h) noexcept {
        return GeolocationPosition(h);
    }
GeolocationPosition GeolocationPosition::clone() const noexcept { return *this; }
emlite::Val GeolocationPosition::instance() noexcept { return emlite::Val::global("GeolocationPosition"); }
GeolocationPosition::GeolocationPosition(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
GeolocationPosition::GeolocationPosition(const emlite::Val &val) noexcept: emlite::Val(val) {}


GeolocationCoordinates GeolocationPosition::coords() const {
    return emlite::Val::get("coords").as<GeolocationCoordinates>();
}

jsbind::Any GeolocationPosition::timestamp() const {
    return emlite::Val::get("timestamp").as<jsbind::Any>();
}

jsbind::Object GeolocationPosition::toJSON() {
    return emlite::Val::call("toJSON").as<jsbind::Object>();
}

