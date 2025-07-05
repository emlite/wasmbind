#include <webbind/MediaSource.hpp>
#include <webbind/MediaSourceHandle.hpp>
#include <webbind/SourceBufferList.hpp>
#include <webbind/SourceBuffer.hpp>


MediaSource MediaSource::take_ownership(Handle h) noexcept {
        return MediaSource(h);
    }
MediaSource MediaSource::clone() const noexcept { return *this; }
MediaSource::MediaSource(Handle h) noexcept : EventTarget(emlite::Val::take_ownership(h)) {}
MediaSource::MediaSource(const emlite::Val &val) noexcept: EventTarget(val) {}


MediaSource::MediaSource() : EventTarget(emlite::Val::global("MediaSource").new_()) {}

MediaSourceHandle MediaSource::handle() const {
    return EventTarget::get("handle").as<MediaSourceHandle>();
}

SourceBufferList MediaSource::sourceBuffers() const {
    return EventTarget::get("sourceBuffers").as<SourceBufferList>();
}

SourceBufferList MediaSource::activeSourceBuffers() const {
    return EventTarget::get("activeSourceBuffers").as<SourceBufferList>();
}

ReadyState MediaSource::readyState() const {
    return EventTarget::get("readyState").as<ReadyState>();
}

double MediaSource::duration() const {
    return EventTarget::get("duration").as<double>();
}

void MediaSource::duration(double value) {
    EventTarget::set("duration", value);
}

jsbind::Any MediaSource::onsourceopen() const {
    return EventTarget::get("onsourceopen").as<jsbind::Any>();
}

void MediaSource::onsourceopen(const jsbind::Any& value) {
    EventTarget::set("onsourceopen", value);
}

jsbind::Any MediaSource::onsourceended() const {
    return EventTarget::get("onsourceended").as<jsbind::Any>();
}

void MediaSource::onsourceended(const jsbind::Any& value) {
    EventTarget::set("onsourceended", value);
}

jsbind::Any MediaSource::onsourceclose() const {
    return EventTarget::get("onsourceclose").as<jsbind::Any>();
}

void MediaSource::onsourceclose(const jsbind::Any& value) {
    EventTarget::set("onsourceclose", value);
}

bool MediaSource::canConstructInDedicatedWorker() {
    return emlite::Val::global("mediasource").get("canConstructInDedicatedWorker").as<bool>();
}

SourceBuffer MediaSource::addSourceBuffer(const jsbind::DOMString& type) {
    return EventTarget::call("addSourceBuffer", type).as<SourceBuffer>();
}

jsbind::Undefined MediaSource::removeSourceBuffer(const SourceBuffer& sourceBuffer) {
    return EventTarget::call("removeSourceBuffer", sourceBuffer).as<jsbind::Undefined>();
}

jsbind::Undefined MediaSource::endOfStream() {
    return EventTarget::call("endOfStream").as<jsbind::Undefined>();
}

jsbind::Undefined MediaSource::endOfStream(const EndOfStreamError& error) {
    return EventTarget::call("endOfStream", error).as<jsbind::Undefined>();
}

jsbind::Undefined MediaSource::setLiveSeekableRange(double start, double end) {
    return EventTarget::call("setLiveSeekableRange", start, end).as<jsbind::Undefined>();
}

jsbind::Undefined MediaSource::clearLiveSeekableRange() {
    return EventTarget::call("clearLiveSeekableRange").as<jsbind::Undefined>();
}

bool MediaSource::isTypeSupported(const jsbind::DOMString& type) {
    return emlite::Val::global("mediasource").call("isTypeSupported", type).as<bool>();
}

