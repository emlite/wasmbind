#include <webbind/MediaError.hpp>


MediaError MediaError::take_ownership(Handle h) noexcept {
        return MediaError(h);
    }
MediaError MediaError::clone() const noexcept { return *this; }
MediaError::MediaError(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
MediaError::MediaError(const emlite::Val &val) noexcept: emlite::Val(val) {}


unsigned short MediaError::code() const {
    return emlite::Val::get("code").as<unsigned short>();
}

jsbind::DOMString MediaError::message() const {
    return emlite::Val::get("message").as<jsbind::DOMString>();
}

