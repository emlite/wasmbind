#include <webbind/GeolocationPositionError.hpp>


GeolocationPositionError GeolocationPositionError::take_ownership(Handle h) noexcept {
        return GeolocationPositionError(h);
    }
GeolocationPositionError GeolocationPositionError::clone() const noexcept { return *this; }
GeolocationPositionError::GeolocationPositionError(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
GeolocationPositionError::GeolocationPositionError(const emlite::Val &val) noexcept: emlite::Val(val) {}


unsigned short GeolocationPositionError::code() const {
    return emlite::Val::get("code").as<unsigned short>();
}

jsbind::DOMString GeolocationPositionError::message() const {
    return emlite::Val::get("message").as<jsbind::DOMString>();
}

