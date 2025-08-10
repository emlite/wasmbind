#include <webbind/MediaTrackSettings.hpp>

namespace webbind {

MediaTrackSettings::MediaTrackSettings(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
MediaTrackSettings MediaTrackSettings::take_ownership(Handle h) noexcept {
    return MediaTrackSettings(h);
}

MediaTrackSettings::MediaTrackSettings(const emlite::Val &val) noexcept: emlite::Val(val) {}

MediaTrackSettings::MediaTrackSettings() noexcept: emlite::Val(emlite::Val::object()) {}

MediaTrackSettings MediaTrackSettings::clone() const noexcept { return *this; }

jsbind::String MediaTrackSettings::displaySurface() const {
    return emlite::Val::get("displaySurface").as<jsbind::String>();
}

void MediaTrackSettings::displaySurface(const jsbind::String& value) {
    emlite::Val::set("displaySurface", value);
}

bool MediaTrackSettings::logicalSurface() const {
    return emlite::Val::get("logicalSurface").as<bool>();
}

void MediaTrackSettings::logicalSurface(bool value) {
    emlite::Val::set("logicalSurface", value);
}

jsbind::String MediaTrackSettings::cursor() const {
    return emlite::Val::get("cursor").as<jsbind::String>();
}

void MediaTrackSettings::cursor(const jsbind::String& value) {
    emlite::Val::set("cursor", value);
}

bool MediaTrackSettings::restrictOwnAudio() const {
    return emlite::Val::get("restrictOwnAudio").as<bool>();
}

void MediaTrackSettings::restrictOwnAudio(bool value) {
    emlite::Val::set("restrictOwnAudio", value);
}

bool MediaTrackSettings::suppressLocalAudioPlayback() const {
    return emlite::Val::get("suppressLocalAudioPlayback").as<bool>();
}

void MediaTrackSettings::suppressLocalAudioPlayback(bool value) {
    emlite::Val::set("suppressLocalAudioPlayback", value);
}

double MediaTrackSettings::screenPixelRatio() const {
    return emlite::Val::get("screenPixelRatio").as<double>();
}

void MediaTrackSettings::screenPixelRatio(double value) {
    emlite::Val::set("screenPixelRatio", value);
}


} // namespace webbind