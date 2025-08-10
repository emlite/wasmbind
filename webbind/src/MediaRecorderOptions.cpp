#include <webbind/MediaRecorderOptions.hpp>

namespace webbind {

MediaRecorderOptions::MediaRecorderOptions(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
MediaRecorderOptions MediaRecorderOptions::take_ownership(Handle h) noexcept {
    return MediaRecorderOptions(h);
}

MediaRecorderOptions::MediaRecorderOptions(const emlite::Val &val) noexcept: emlite::Val(val) {}

MediaRecorderOptions::MediaRecorderOptions() noexcept: emlite::Val(emlite::Val::object()) {}

MediaRecorderOptions MediaRecorderOptions::clone() const noexcept { return *this; }

jsbind::String MediaRecorderOptions::mimeType() const {
    return emlite::Val::get("mimeType").as<jsbind::String>();
}

void MediaRecorderOptions::mimeType(const jsbind::String& value) {
    emlite::Val::set("mimeType", value);
}

unsigned long MediaRecorderOptions::audioBitsPerSecond() const {
    return emlite::Val::get("audioBitsPerSecond").as<unsigned long>();
}

void MediaRecorderOptions::audioBitsPerSecond(unsigned long value) {
    emlite::Val::set("audioBitsPerSecond", value);
}

unsigned long MediaRecorderOptions::videoBitsPerSecond() const {
    return emlite::Val::get("videoBitsPerSecond").as<unsigned long>();
}

void MediaRecorderOptions::videoBitsPerSecond(unsigned long value) {
    emlite::Val::set("videoBitsPerSecond", value);
}

unsigned long MediaRecorderOptions::bitsPerSecond() const {
    return emlite::Val::get("bitsPerSecond").as<unsigned long>();
}

void MediaRecorderOptions::bitsPerSecond(unsigned long value) {
    emlite::Val::set("bitsPerSecond", value);
}

BitrateMode MediaRecorderOptions::audioBitrateMode() const {
    return emlite::Val::get("audioBitrateMode").as<BitrateMode>();
}

void MediaRecorderOptions::audioBitrateMode(const BitrateMode& value) {
    emlite::Val::set("audioBitrateMode", value);
}

jsbind::Any MediaRecorderOptions::videoKeyFrameIntervalDuration() const {
    return emlite::Val::get("videoKeyFrameIntervalDuration").as<jsbind::Any>();
}

void MediaRecorderOptions::videoKeyFrameIntervalDuration(const jsbind::Any& value) {
    emlite::Val::set("videoKeyFrameIntervalDuration", value);
}

unsigned long MediaRecorderOptions::videoKeyFrameIntervalCount() const {
    return emlite::Val::get("videoKeyFrameIntervalCount").as<unsigned long>();
}

void MediaRecorderOptions::videoKeyFrameIntervalCount(unsigned long value) {
    emlite::Val::set("videoKeyFrameIntervalCount", value);
}


} // namespace webbind