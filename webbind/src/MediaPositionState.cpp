#include <webbind/MediaPositionState.hpp>

using emlite::Val;
namespace webbind {

MediaPositionState::MediaPositionState(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
MediaPositionState MediaPositionState::take_ownership(Handle h) noexcept {
        return MediaPositionState(h);
    }
MediaPositionState::MediaPositionState(const emlite::Val &val) noexcept: emlite::Val(val) {}
MediaPositionState::MediaPositionState() noexcept: emlite::Val(emlite::Val::object()) {}
MediaPositionState MediaPositionState::clone() const noexcept { return *this; }

double MediaPositionState::duration() const {
    return emlite::Val::get("duration").as<double>();
}

void MediaPositionState::duration(double value) {
    emlite::Val::set("duration", value);
}

double MediaPositionState::playbackRate() const {
    return emlite::Val::get("playbackRate").as<double>();
}

void MediaPositionState::playbackRate(double value) {
    emlite::Val::set("playbackRate", value);
}

double MediaPositionState::position() const {
    return emlite::Val::get("position").as<double>();
}

void MediaPositionState::position(double value) {
    emlite::Val::set("position", value);
}


} // namespace webbind