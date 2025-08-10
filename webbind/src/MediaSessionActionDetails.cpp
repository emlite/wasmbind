#include <webbind/MediaSessionActionDetails.hpp>

namespace webbind {

MediaSessionActionDetails::MediaSessionActionDetails(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
MediaSessionActionDetails MediaSessionActionDetails::take_ownership(Handle h) noexcept {
    return MediaSessionActionDetails(h);
}

MediaSessionActionDetails::MediaSessionActionDetails(const emlite::Val &val) noexcept: emlite::Val(val) {}

MediaSessionActionDetails::MediaSessionActionDetails() noexcept: emlite::Val(emlite::Val::object()) {}

MediaSessionActionDetails MediaSessionActionDetails::clone() const noexcept { return *this; }

MediaSessionAction MediaSessionActionDetails::action() const {
    return emlite::Val::get("action").as<MediaSessionAction>();
}

void MediaSessionActionDetails::action(const MediaSessionAction& value) {
    emlite::Val::set("action", value);
}

double MediaSessionActionDetails::seekOffset() const {
    return emlite::Val::get("seekOffset").as<double>();
}

void MediaSessionActionDetails::seekOffset(double value) {
    emlite::Val::set("seekOffset", value);
}

double MediaSessionActionDetails::seekTime() const {
    return emlite::Val::get("seekTime").as<double>();
}

void MediaSessionActionDetails::seekTime(double value) {
    emlite::Val::set("seekTime", value);
}

bool MediaSessionActionDetails::fastSeek() const {
    return emlite::Val::get("fastSeek").as<bool>();
}

void MediaSessionActionDetails::fastSeek(bool value) {
    emlite::Val::set("fastSeek", value);
}

bool MediaSessionActionDetails::isActivating() const {
    return emlite::Val::get("isActivating").as<bool>();
}

void MediaSessionActionDetails::isActivating(bool value) {
    emlite::Val::set("isActivating", value);
}


} // namespace webbind