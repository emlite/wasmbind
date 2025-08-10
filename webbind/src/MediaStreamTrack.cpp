#include "webbind/MediaStreamTrack.hpp"
#include "webbind/MediaStreamTrack.hpp"
#include "webbind/MediaTrackCapabilities.hpp"
#include "webbind/MediaTrackConstraints.hpp"
#include "webbind/MediaTrackSettings.hpp"
#include "webbind/CaptureHandle.hpp"

namespace webbind {

MediaStreamTrack MediaStreamTrack::take_ownership(Handle h) noexcept {
        return MediaStreamTrack(h);
    }
MediaStreamTrack MediaStreamTrack::clone() const noexcept { return *this; }
emlite::Val MediaStreamTrack::instance() noexcept { return emlite::Val::global("MediaStreamTrack"); }
MediaStreamTrack::MediaStreamTrack(Handle h) noexcept : EventTarget(emlite::Val::take_ownership(h)) {}
MediaStreamTrack::MediaStreamTrack(const emlite::Val &val) noexcept: EventTarget(val) {}

jsbind::String MediaStreamTrack::kind() const {
    return EventTarget::get("kind").as<jsbind::String>();
}

jsbind::String MediaStreamTrack::id() const {
    return EventTarget::get("id").as<jsbind::String>();
}

jsbind::String MediaStreamTrack::label() const {
    return EventTarget::get("label").as<jsbind::String>();
}

bool MediaStreamTrack::enabled() const {
    return EventTarget::get("enabled").as<bool>();
}

void MediaStreamTrack::enabled(bool value) {
    EventTarget::set("enabled", value);
}

bool MediaStreamTrack::muted() const {
    return EventTarget::get("muted").as<bool>();
}

jsbind::Any MediaStreamTrack::onmute() const {
    return EventTarget::get("onmute").as<jsbind::Any>();
}

void MediaStreamTrack::onmute(const jsbind::Any& value) {
    EventTarget::set("onmute", value);
}

jsbind::Any MediaStreamTrack::onunmute() const {
    return EventTarget::get("onunmute").as<jsbind::Any>();
}

void MediaStreamTrack::onunmute(const jsbind::Any& value) {
    EventTarget::set("onunmute", value);
}

MediaStreamTrackState MediaStreamTrack::readyState() const {
    return EventTarget::get("readyState").as<MediaStreamTrackState>();
}

jsbind::Any MediaStreamTrack::onended() const {
    return EventTarget::get("onended").as<jsbind::Any>();
}

void MediaStreamTrack::onended(const jsbind::Any& value) {
    EventTarget::set("onended", value);
}

MediaStreamTrack MediaStreamTrack::clone() {
    return EventTarget::call("clone").as<MediaStreamTrack>();
}

jsbind::Undefined MediaStreamTrack::stop() {
    return EventTarget::call("stop").as<jsbind::Undefined>();
}

MediaTrackCapabilities MediaStreamTrack::getCapabilities() {
    return EventTarget::call("getCapabilities").as<MediaTrackCapabilities>();
}

MediaTrackConstraints MediaStreamTrack::getConstraints() {
    return EventTarget::call("getConstraints").as<MediaTrackConstraints>();
}

MediaTrackSettings MediaStreamTrack::getSettings() {
    return EventTarget::call("getSettings").as<MediaTrackSettings>();
}

jsbind::Promise<jsbind::Undefined> MediaStreamTrack::applyConstraints() {
    return EventTarget::call("applyConstraints").as<jsbind::Promise<jsbind::Undefined>>();
}

jsbind::Promise<jsbind::Undefined> MediaStreamTrack::applyConstraints(const MediaTrackConstraints& constraints) {
    return EventTarget::call("applyConstraints", constraints).as<jsbind::Promise<jsbind::Undefined>>();
}

CaptureHandle MediaStreamTrack::getCaptureHandle() {
    return EventTarget::call("getCaptureHandle").as<CaptureHandle>();
}

jsbind::Any MediaStreamTrack::oncapturehandlechange() const {
    return EventTarget::get("oncapturehandlechange").as<jsbind::Any>();
}

void MediaStreamTrack::oncapturehandlechange(const jsbind::Any& value) {
    EventTarget::set("oncapturehandlechange", value);
}

jsbind::TypedArray<jsbind::String> MediaStreamTrack::getSupportedCaptureActions() {
    return EventTarget::call("getSupportedCaptureActions").as<jsbind::TypedArray<jsbind::String>>();
}

jsbind::Promise<jsbind::Undefined> MediaStreamTrack::sendCaptureAction(const CaptureAction& action) {
    return EventTarget::call("sendCaptureAction", action).as<jsbind::Promise<jsbind::Undefined>>();
}

jsbind::String MediaStreamTrack::contentHint() const {
    return EventTarget::get("contentHint").as<jsbind::String>();
}

void MediaStreamTrack::contentHint(const jsbind::String& value) {
    EventTarget::set("contentHint", value);
}

bool MediaStreamTrack::isolated() const {
    return EventTarget::get("isolated").as<bool>();
}

jsbind::Any MediaStreamTrack::onisolationchange() const {
    return EventTarget::get("onisolationchange").as<jsbind::Any>();
}

void MediaStreamTrack::onisolationchange(const jsbind::Any& value) {
    EventTarget::set("onisolationchange", value);
}


} // namespace webbind