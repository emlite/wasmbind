#include "webbind/SourceBuffer.hpp"
#include "webbind/TimeRanges.hpp"
#include "webbind/AudioTrackList.hpp"
#include "webbind/VideoTrackList.hpp"
#include "webbind/TextTrackList.hpp"

namespace webbind {

SourceBuffer SourceBuffer::take_ownership(Handle h) noexcept {
        return SourceBuffer(h);
    }
SourceBuffer SourceBuffer::clone() const noexcept { return *this; }
emlite::Val SourceBuffer::instance() noexcept { return emlite::Val::global("SourceBuffer"); }
SourceBuffer::SourceBuffer(Handle h) noexcept : EventTarget(emlite::Val::take_ownership(h)) {}
SourceBuffer::SourceBuffer(const emlite::Val &val) noexcept: EventTarget(val) {}

AppendMode SourceBuffer::mode() const {
    return EventTarget::get("mode").as<AppendMode>();
}

void SourceBuffer::mode(const AppendMode& value) {
    EventTarget::set("mode", value);
}

bool SourceBuffer::updating() const {
    return EventTarget::get("updating").as<bool>();
}

TimeRanges SourceBuffer::buffered() const {
    return EventTarget::get("buffered").as<TimeRanges>();
}

double SourceBuffer::timestampOffset() const {
    return EventTarget::get("timestampOffset").as<double>();
}

void SourceBuffer::timestampOffset(double value) {
    EventTarget::set("timestampOffset", value);
}

AudioTrackList SourceBuffer::audioTracks() const {
    return EventTarget::get("audioTracks").as<AudioTrackList>();
}

VideoTrackList SourceBuffer::videoTracks() const {
    return EventTarget::get("videoTracks").as<VideoTrackList>();
}

TextTrackList SourceBuffer::textTracks() const {
    return EventTarget::get("textTracks").as<TextTrackList>();
}

double SourceBuffer::appendWindowStart() const {
    return EventTarget::get("appendWindowStart").as<double>();
}

void SourceBuffer::appendWindowStart(double value) {
    EventTarget::set("appendWindowStart", value);
}

double SourceBuffer::appendWindowEnd() const {
    return EventTarget::get("appendWindowEnd").as<double>();
}

void SourceBuffer::appendWindowEnd(double value) {
    EventTarget::set("appendWindowEnd", value);
}

jsbind::Any SourceBuffer::onupdatestart() const {
    return EventTarget::get("onupdatestart").as<jsbind::Any>();
}

void SourceBuffer::onupdatestart(const jsbind::Any& value) {
    EventTarget::set("onupdatestart", value);
}

jsbind::Any SourceBuffer::onupdate() const {
    return EventTarget::get("onupdate").as<jsbind::Any>();
}

void SourceBuffer::onupdate(const jsbind::Any& value) {
    EventTarget::set("onupdate", value);
}

jsbind::Any SourceBuffer::onupdateend() const {
    return EventTarget::get("onupdateend").as<jsbind::Any>();
}

void SourceBuffer::onupdateend(const jsbind::Any& value) {
    EventTarget::set("onupdateend", value);
}

jsbind::Any SourceBuffer::onerror() const {
    return EventTarget::get("onerror").as<jsbind::Any>();
}

void SourceBuffer::onerror(const jsbind::Any& value) {
    EventTarget::set("onerror", value);
}

jsbind::Any SourceBuffer::onabort() const {
    return EventTarget::get("onabort").as<jsbind::Any>();
}

void SourceBuffer::onabort(const jsbind::Any& value) {
    EventTarget::set("onabort", value);
}

jsbind::Undefined SourceBuffer::appendBuffer(const jsbind::Any& data) {
    return EventTarget::call("appendBuffer", data).as<jsbind::Undefined>();
}

jsbind::Undefined SourceBuffer::abort() {
    return EventTarget::call("abort").as<jsbind::Undefined>();
}

jsbind::Undefined SourceBuffer::changeType(const jsbind::String& type) {
    return EventTarget::call("changeType", type).as<jsbind::Undefined>();
}

jsbind::Undefined SourceBuffer::remove(double start, double end) {
    return EventTarget::call("remove", start, end).as<jsbind::Undefined>();
}


} // namespace webbind