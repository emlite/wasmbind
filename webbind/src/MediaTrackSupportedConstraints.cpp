#include <webbind/MediaTrackSupportedConstraints.hpp>

using emlite::Val;
namespace webbind {

MediaTrackSupportedConstraints::MediaTrackSupportedConstraints(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
MediaTrackSupportedConstraints MediaTrackSupportedConstraints::take_ownership(Handle h) noexcept {
        return MediaTrackSupportedConstraints(h);
    }
MediaTrackSupportedConstraints::MediaTrackSupportedConstraints(const emlite::Val &val) noexcept: emlite::Val(val) {}
MediaTrackSupportedConstraints::MediaTrackSupportedConstraints() noexcept: emlite::Val(emlite::Val::object()) {}
MediaTrackSupportedConstraints MediaTrackSupportedConstraints::clone() const noexcept { return *this; }

bool MediaTrackSupportedConstraints::displaySurface() const {
    return emlite::Val::get("displaySurface").as<bool>();
}

void MediaTrackSupportedConstraints::displaySurface(bool value) {
    emlite::Val::set("displaySurface", value);
}

bool MediaTrackSupportedConstraints::logicalSurface() const {
    return emlite::Val::get("logicalSurface").as<bool>();
}

void MediaTrackSupportedConstraints::logicalSurface(bool value) {
    emlite::Val::set("logicalSurface", value);
}

bool MediaTrackSupportedConstraints::cursor() const {
    return emlite::Val::get("cursor").as<bool>();
}

void MediaTrackSupportedConstraints::cursor(bool value) {
    emlite::Val::set("cursor", value);
}

bool MediaTrackSupportedConstraints::restrictOwnAudio() const {
    return emlite::Val::get("restrictOwnAudio").as<bool>();
}

void MediaTrackSupportedConstraints::restrictOwnAudio(bool value) {
    emlite::Val::set("restrictOwnAudio", value);
}

bool MediaTrackSupportedConstraints::suppressLocalAudioPlayback() const {
    return emlite::Val::get("suppressLocalAudioPlayback").as<bool>();
}

void MediaTrackSupportedConstraints::suppressLocalAudioPlayback(bool value) {
    emlite::Val::set("suppressLocalAudioPlayback", value);
}


} // namespace webbind