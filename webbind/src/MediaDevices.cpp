#include <webbind/MediaDevices.hpp>
#include <webbind/MediaDeviceInfo.hpp>
#include <webbind/AudioOutputOptions.hpp>
#include <webbind/CaptureHandleConfig.hpp>
#include <webbind/MediaTrackSupportedConstraints.hpp>
#include <webbind/MediaStream.hpp>
#include <webbind/MediaStreamConstraints.hpp>
#include <webbind/DisplayMediaStreamOptions.hpp>

namespace webbind {

MediaDevices MediaDevices::take_ownership(Handle h) noexcept {
        return MediaDevices(h);
    }
MediaDevices MediaDevices::clone() const noexcept { return *this; }
emlite::Val MediaDevices::instance() noexcept { return emlite::Val::global("MediaDevices"); }
MediaDevices::MediaDevices(Handle h) noexcept : EventTarget(emlite::Val::take_ownership(h)) {}
MediaDevices::MediaDevices(const emlite::Val &val) noexcept: EventTarget(val) {}

jsbind::Any MediaDevices::ondevicechange() const {
    return EventTarget::get("ondevicechange").as<jsbind::Any>();
}

void MediaDevices::ondevicechange(const jsbind::Any& value) {
    EventTarget::set("ondevicechange", value);
}

jsbind::Promise<jsbind::TypedArray<MediaDeviceInfo>> MediaDevices::enumerateDevices() {
    return EventTarget::call("enumerateDevices").as<jsbind::Promise<jsbind::TypedArray<MediaDeviceInfo>>>();
}

jsbind::Promise<MediaDeviceInfo> MediaDevices::selectAudioOutput() {
    return EventTarget::call("selectAudioOutput").as<jsbind::Promise<MediaDeviceInfo>>();
}

jsbind::Promise<MediaDeviceInfo> MediaDevices::selectAudioOutput(const AudioOutputOptions& options) {
    return EventTarget::call("selectAudioOutput", options).as<jsbind::Promise<MediaDeviceInfo>>();
}

jsbind::Undefined MediaDevices::setCaptureHandleConfig() {
    return EventTarget::call("setCaptureHandleConfig").as<jsbind::Undefined>();
}

jsbind::Undefined MediaDevices::setCaptureHandleConfig(const CaptureHandleConfig& config) {
    return EventTarget::call("setCaptureHandleConfig", config).as<jsbind::Undefined>();
}

jsbind::Undefined MediaDevices::setSupportedCaptureActions(const jsbind::TypedArray<jsbind::String>& actions) {
    return EventTarget::call("setSupportedCaptureActions", actions).as<jsbind::Undefined>();
}

jsbind::Any MediaDevices::oncaptureaction() const {
    return EventTarget::get("oncaptureaction").as<jsbind::Any>();
}

void MediaDevices::oncaptureaction(const jsbind::Any& value) {
    EventTarget::set("oncaptureaction", value);
}

MediaTrackSupportedConstraints MediaDevices::getSupportedConstraints() {
    return EventTarget::call("getSupportedConstraints").as<MediaTrackSupportedConstraints>();
}

jsbind::Promise<MediaStream> MediaDevices::getUserMedia() {
    return EventTarget::call("getUserMedia").as<jsbind::Promise<MediaStream>>();
}

jsbind::Promise<MediaStream> MediaDevices::getUserMedia(const MediaStreamConstraints& constraints) {
    return EventTarget::call("getUserMedia", constraints).as<jsbind::Promise<MediaStream>>();
}

jsbind::Promise<MediaStream> MediaDevices::getViewportMedia() {
    return EventTarget::call("getViewportMedia").as<jsbind::Promise<MediaStream>>();
}

jsbind::Promise<MediaStream> MediaDevices::getViewportMedia(const DisplayMediaStreamOptions& options) {
    return EventTarget::call("getViewportMedia", options).as<jsbind::Promise<MediaStream>>();
}

jsbind::Promise<MediaStream> MediaDevices::getDisplayMedia() {
    return EventTarget::call("getDisplayMedia").as<jsbind::Promise<MediaStream>>();
}

jsbind::Promise<MediaStream> MediaDevices::getDisplayMedia(const DisplayMediaStreamOptions& options) {
    return EventTarget::call("getDisplayMedia", options).as<jsbind::Promise<MediaStream>>();
}


} // namespace webbind