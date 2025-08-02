#include <webbind/MediaRecorder.hpp>
#include <webbind/MediaStream.hpp>


MediaRecorder MediaRecorder::take_ownership(Handle h) noexcept {
        return MediaRecorder(h);
    }
MediaRecorder MediaRecorder::clone() const noexcept { return *this; }
emlite::Val MediaRecorder::instance() noexcept { return emlite::Val::global("MediaRecorder"); }
MediaRecorder::MediaRecorder(Handle h) noexcept : EventTarget(emlite::Val::take_ownership(h)) {}
MediaRecorder::MediaRecorder(const emlite::Val &val) noexcept: EventTarget(val) {}


MediaRecorder::MediaRecorder(const MediaStream& stream) : EventTarget(emlite::Val::global("MediaRecorder").new_(stream)) {}

MediaRecorder::MediaRecorder(const MediaStream& stream, const jsbind::Any& options) : EventTarget(emlite::Val::global("MediaRecorder").new_(stream, options)) {}

MediaStream MediaRecorder::stream() const {
    return EventTarget::get("stream").as<MediaStream>();
}

jsbind::String MediaRecorder::mimeType() const {
    return EventTarget::get("mimeType").as<jsbind::String>();
}

RecordingState MediaRecorder::state() const {
    return EventTarget::get("state").as<RecordingState>();
}

jsbind::Any MediaRecorder::onstart() const {
    return EventTarget::get("onstart").as<jsbind::Any>();
}

void MediaRecorder::onstart(const jsbind::Any& value) {
    EventTarget::set("onstart", value);
}

jsbind::Any MediaRecorder::onstop() const {
    return EventTarget::get("onstop").as<jsbind::Any>();
}

void MediaRecorder::onstop(const jsbind::Any& value) {
    EventTarget::set("onstop", value);
}

jsbind::Any MediaRecorder::ondataavailable() const {
    return EventTarget::get("ondataavailable").as<jsbind::Any>();
}

void MediaRecorder::ondataavailable(const jsbind::Any& value) {
    EventTarget::set("ondataavailable", value);
}

jsbind::Any MediaRecorder::onpause() const {
    return EventTarget::get("onpause").as<jsbind::Any>();
}

void MediaRecorder::onpause(const jsbind::Any& value) {
    EventTarget::set("onpause", value);
}

jsbind::Any MediaRecorder::onresume() const {
    return EventTarget::get("onresume").as<jsbind::Any>();
}

void MediaRecorder::onresume(const jsbind::Any& value) {
    EventTarget::set("onresume", value);
}

jsbind::Any MediaRecorder::onerror() const {
    return EventTarget::get("onerror").as<jsbind::Any>();
}

void MediaRecorder::onerror(const jsbind::Any& value) {
    EventTarget::set("onerror", value);
}

unsigned long MediaRecorder::videoBitsPerSecond() const {
    return EventTarget::get("videoBitsPerSecond").as<unsigned long>();
}

unsigned long MediaRecorder::audioBitsPerSecond() const {
    return EventTarget::get("audioBitsPerSecond").as<unsigned long>();
}

BitrateMode MediaRecorder::audioBitrateMode() const {
    return EventTarget::get("audioBitrateMode").as<BitrateMode>();
}

jsbind::Undefined MediaRecorder::start() {
    return EventTarget::call("start").as<jsbind::Undefined>();
}

jsbind::Undefined MediaRecorder::start(unsigned long timeslice) {
    return EventTarget::call("start", timeslice).as<jsbind::Undefined>();
}

jsbind::Undefined MediaRecorder::stop() {
    return EventTarget::call("stop").as<jsbind::Undefined>();
}

jsbind::Undefined MediaRecorder::pause() {
    return EventTarget::call("pause").as<jsbind::Undefined>();
}

jsbind::Undefined MediaRecorder::resume() {
    return EventTarget::call("resume").as<jsbind::Undefined>();
}

jsbind::Undefined MediaRecorder::requestData() {
    return EventTarget::call("requestData").as<jsbind::Undefined>();
}

bool MediaRecorder::isTypeSupported(const jsbind::String& type) {
    return emlite::Val::global("mediarecorder").call("isTypeSupported", type).as<bool>();
}

