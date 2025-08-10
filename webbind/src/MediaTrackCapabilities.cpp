#include <webbind/MediaTrackCapabilities.hpp>

using emlite::Val;
namespace webbind {

MediaTrackCapabilities::MediaTrackCapabilities(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
MediaTrackCapabilities MediaTrackCapabilities::take_ownership(Handle h) noexcept {
        return MediaTrackCapabilities(h);
    }
MediaTrackCapabilities::MediaTrackCapabilities(const emlite::Val &val) noexcept: emlite::Val(val) {}
MediaTrackCapabilities::MediaTrackCapabilities() noexcept: emlite::Val(emlite::Val::object()) {}
MediaTrackCapabilities MediaTrackCapabilities::clone() const noexcept { return *this; }

jsbind::String MediaTrackCapabilities::displaySurface() const {
    return emlite::Val::get("displaySurface").as<jsbind::String>();
}

void MediaTrackCapabilities::displaySurface(const jsbind::String& value) {
    emlite::Val::set("displaySurface", value);
}

bool MediaTrackCapabilities::logicalSurface() const {
    return emlite::Val::get("logicalSurface").as<bool>();
}

void MediaTrackCapabilities::logicalSurface(bool value) {
    emlite::Val::set("logicalSurface", value);
}

jsbind::TypedArray<jsbind::String> MediaTrackCapabilities::cursor() const {
    return emlite::Val::get("cursor").as<jsbind::TypedArray<jsbind::String>>();
}

void MediaTrackCapabilities::cursor(const jsbind::TypedArray<jsbind::String>& value) {
    emlite::Val::set("cursor", value);
}


} // namespace webbind