#include <webbind/MediaError.hpp>

namespace webbind {

MediaError MediaError::take_ownership(Handle h) noexcept {
    return MediaError(h);
}

MediaError MediaError::clone() const noexcept { return *this; }

emlite::Val MediaError::instance() noexcept { return emlite::Val::global("MediaError"); }

MediaError::MediaError(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}

MediaError::MediaError(const emlite::Val &val) noexcept: emlite::Val(val) {}

unsigned short MediaError::code() const {
    return emlite::Val::get("code").as<unsigned short>();
}

jsbind::String MediaError::message() const {
    return emlite::Val::get("message").as<jsbind::String>();
}


} // namespace webbind