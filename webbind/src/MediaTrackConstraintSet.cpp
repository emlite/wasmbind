#include "webbind/MediaTrackConstraintSet.hpp"

using emlite::Val;
namespace webbind {

MediaTrackConstraintSet::MediaTrackConstraintSet(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
MediaTrackConstraintSet MediaTrackConstraintSet::take_ownership(Handle h) noexcept {
        return MediaTrackConstraintSet(h);
    }
MediaTrackConstraintSet::MediaTrackConstraintSet(const emlite::Val &val) noexcept: emlite::Val(val) {}
MediaTrackConstraintSet::MediaTrackConstraintSet() noexcept: emlite::Val(emlite::Val::object()) {}
MediaTrackConstraintSet MediaTrackConstraintSet::clone() const noexcept { return *this; }

jsbind::Any MediaTrackConstraintSet::displaySurface() const {
    return emlite::Val::get("displaySurface").as<jsbind::Any>();
}

void MediaTrackConstraintSet::displaySurface(const jsbind::Any& value) {
    emlite::Val::set("displaySurface", value);
}

jsbind::Any MediaTrackConstraintSet::logicalSurface() const {
    return emlite::Val::get("logicalSurface").as<jsbind::Any>();
}

void MediaTrackConstraintSet::logicalSurface(const jsbind::Any& value) {
    emlite::Val::set("logicalSurface", value);
}

jsbind::Any MediaTrackConstraintSet::cursor() const {
    return emlite::Val::get("cursor").as<jsbind::Any>();
}

void MediaTrackConstraintSet::cursor(const jsbind::Any& value) {
    emlite::Val::set("cursor", value);
}

jsbind::Any MediaTrackConstraintSet::restrictOwnAudio() const {
    return emlite::Val::get("restrictOwnAudio").as<jsbind::Any>();
}

void MediaTrackConstraintSet::restrictOwnAudio(const jsbind::Any& value) {
    emlite::Val::set("restrictOwnAudio", value);
}

jsbind::Any MediaTrackConstraintSet::suppressLocalAudioPlayback() const {
    return emlite::Val::get("suppressLocalAudioPlayback").as<jsbind::Any>();
}

void MediaTrackConstraintSet::suppressLocalAudioPlayback(const jsbind::Any& value) {
    emlite::Val::set("suppressLocalAudioPlayback", value);
}


} // namespace webbind