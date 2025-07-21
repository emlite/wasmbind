#include <webbind/MediaDevices.hpp>
#include <webbind/MediaDeviceInfo.hpp>
#include <webbind/MediaStream.hpp>
#include <webbind/CaptureController.hpp>


AudioOutputOptions::AudioOutputOptions(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
AudioOutputOptions AudioOutputOptions::take_ownership(Handle h) noexcept {
        return AudioOutputOptions(h);
    }
AudioOutputOptions::AudioOutputOptions(const emlite::Val &val) noexcept: emlite::Val(val) {}
AudioOutputOptions::AudioOutputOptions() noexcept: emlite::Val(emlite::Val::object()) {}
AudioOutputOptions AudioOutputOptions::clone() const noexcept { return *this; }

jsbind::DOMString AudioOutputOptions::deviceId() const {
    return emlite::Val::get("deviceId").as<jsbind::DOMString>();
}

void AudioOutputOptions::deviceId(const jsbind::DOMString& value) {
    emlite::Val::set("deviceId", value);
}

CaptureHandleConfig::CaptureHandleConfig(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
CaptureHandleConfig CaptureHandleConfig::take_ownership(Handle h) noexcept {
        return CaptureHandleConfig(h);
    }
CaptureHandleConfig::CaptureHandleConfig(const emlite::Val &val) noexcept: emlite::Val(val) {}
CaptureHandleConfig::CaptureHandleConfig() noexcept: emlite::Val(emlite::Val::object()) {}
CaptureHandleConfig CaptureHandleConfig::clone() const noexcept { return *this; }

bool CaptureHandleConfig::exposeOrigin() const {
    return emlite::Val::get("exposeOrigin").as<bool>();
}

void CaptureHandleConfig::exposeOrigin(bool value) {
    emlite::Val::set("exposeOrigin", value);
}

jsbind::DOMString CaptureHandleConfig::handle() const {
    return emlite::Val::get("handle").as<jsbind::DOMString>();
}

void CaptureHandleConfig::handle(const jsbind::DOMString& value) {
    emlite::Val::set("handle", value);
}

jsbind::Sequence<jsbind::DOMString> CaptureHandleConfig::permittedOrigins() const {
    return emlite::Val::get("permittedOrigins").as<jsbind::Sequence<jsbind::DOMString>>();
}

void CaptureHandleConfig::permittedOrigins(const jsbind::Sequence<jsbind::DOMString>& value) {
    emlite::Val::set("permittedOrigins", value);
}

MediaTrackSupportedConstraints::MediaTrackSupportedConstraints(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
MediaTrackSupportedConstraints MediaTrackSupportedConstraints::take_ownership(Handle h) noexcept {
        return MediaTrackSupportedConstraints(h);
    }
MediaTrackSupportedConstraints::MediaTrackSupportedConstraints(const emlite::Val &val) noexcept: emlite::Val(val) {}
MediaTrackSupportedConstraints::MediaTrackSupportedConstraints() noexcept: emlite::Val(emlite::Val::object()) {}
MediaTrackSupportedConstraints MediaTrackSupportedConstraints::clone() const noexcept { return *this; }

bool MediaTrackSupportedConstraints::displaySurface() const {
    return emlite::Val::get("displaySurface").as<bool>();
}

void MediaTrackSupportedConstraints::displaySurface(bool value) {
    emlite::Val::set("displaySurface", value);
}

bool MediaTrackSupportedConstraints::logicalSurface() const {
    return emlite::Val::get("logicalSurface").as<bool>();
}

void MediaTrackSupportedConstraints::logicalSurface(bool value) {
    emlite::Val::set("logicalSurface", value);
}

bool MediaTrackSupportedConstraints::cursor() const {
    return emlite::Val::get("cursor").as<bool>();
}

void MediaTrackSupportedConstraints::cursor(bool value) {
    emlite::Val::set("cursor", value);
}

bool MediaTrackSupportedConstraints::restrictOwnAudio() const {
    return emlite::Val::get("restrictOwnAudio").as<bool>();
}

void MediaTrackSupportedConstraints::restrictOwnAudio(bool value) {
    emlite::Val::set("restrictOwnAudio", value);
}

bool MediaTrackSupportedConstraints::suppressLocalAudioPlayback() const {
    return emlite::Val::get("suppressLocalAudioPlayback").as<bool>();
}

void MediaTrackSupportedConstraints::suppressLocalAudioPlayback(bool value) {
    emlite::Val::set("suppressLocalAudioPlayback", value);
}

MediaStreamConstraints::MediaStreamConstraints(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
MediaStreamConstraints MediaStreamConstraints::take_ownership(Handle h) noexcept {
        return MediaStreamConstraints(h);
    }
MediaStreamConstraints::MediaStreamConstraints(const emlite::Val &val) noexcept: emlite::Val(val) {}
MediaStreamConstraints::MediaStreamConstraints() noexcept: emlite::Val(emlite::Val::object()) {}
MediaStreamConstraints MediaStreamConstraints::clone() const noexcept { return *this; }

jsbind::DOMString MediaStreamConstraints::peerIdentity() const {
    return emlite::Val::get("peerIdentity").as<jsbind::DOMString>();
}

void MediaStreamConstraints::peerIdentity(const jsbind::DOMString& value) {
    emlite::Val::set("peerIdentity", value);
}

DisplayMediaStreamOptions::DisplayMediaStreamOptions(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
DisplayMediaStreamOptions DisplayMediaStreamOptions::take_ownership(Handle h) noexcept {
        return DisplayMediaStreamOptions(h);
    }
DisplayMediaStreamOptions::DisplayMediaStreamOptions(const emlite::Val &val) noexcept: emlite::Val(val) {}
DisplayMediaStreamOptions::DisplayMediaStreamOptions() noexcept: emlite::Val(emlite::Val::object()) {}
DisplayMediaStreamOptions DisplayMediaStreamOptions::clone() const noexcept { return *this; }

jsbind::Any DisplayMediaStreamOptions::video() const {
    return emlite::Val::get("video").as<jsbind::Any>();
}

void DisplayMediaStreamOptions::video(const jsbind::Any& value) {
    emlite::Val::set("video", value);
}

jsbind::Any DisplayMediaStreamOptions::audio() const {
    return emlite::Val::get("audio").as<jsbind::Any>();
}

void DisplayMediaStreamOptions::audio(const jsbind::Any& value) {
    emlite::Val::set("audio", value);
}

CaptureController DisplayMediaStreamOptions::controller() const {
    return emlite::Val::get("controller").as<CaptureController>();
}

void DisplayMediaStreamOptions::controller(const CaptureController& value) {
    emlite::Val::set("controller", value);
}

SelfCapturePreferenceEnum DisplayMediaStreamOptions::selfBrowserSurface() const {
    return emlite::Val::get("selfBrowserSurface").as<SelfCapturePreferenceEnum>();
}

void DisplayMediaStreamOptions::selfBrowserSurface(const SelfCapturePreferenceEnum& value) {
    emlite::Val::set("selfBrowserSurface", value);
}

SystemAudioPreferenceEnum DisplayMediaStreamOptions::systemAudio() const {
    return emlite::Val::get("systemAudio").as<SystemAudioPreferenceEnum>();
}

void DisplayMediaStreamOptions::systemAudio(const SystemAudioPreferenceEnum& value) {
    emlite::Val::set("systemAudio", value);
}

WindowAudioPreferenceEnum DisplayMediaStreamOptions::windowAudio() const {
    return emlite::Val::get("windowAudio").as<WindowAudioPreferenceEnum>();
}

void DisplayMediaStreamOptions::windowAudio(const WindowAudioPreferenceEnum& value) {
    emlite::Val::set("windowAudio", value);
}

SurfaceSwitchingPreferenceEnum DisplayMediaStreamOptions::surfaceSwitching() const {
    return emlite::Val::get("surfaceSwitching").as<SurfaceSwitchingPreferenceEnum>();
}

void DisplayMediaStreamOptions::surfaceSwitching(const SurfaceSwitchingPreferenceEnum& value) {
    emlite::Val::set("surfaceSwitching", value);
}

MonitorTypeSurfacesEnum DisplayMediaStreamOptions::monitorTypeSurfaces() const {
    return emlite::Val::get("monitorTypeSurfaces").as<MonitorTypeSurfacesEnum>();
}

void DisplayMediaStreamOptions::monitorTypeSurfaces(const MonitorTypeSurfacesEnum& value) {
    emlite::Val::set("monitorTypeSurfaces", value);
}

MediaDevices MediaDevices::take_ownership(Handle h) noexcept {
        return MediaDevices(h);
    }
MediaDevices MediaDevices::clone() const noexcept { return *this; }
MediaDevices::MediaDevices(Handle h) noexcept : EventTarget(emlite::Val::take_ownership(h)) {}
MediaDevices::MediaDevices(const emlite::Val &val) noexcept: EventTarget(val) {}


jsbind::Any MediaDevices::ondevicechange() const {
    return EventTarget::get("ondevicechange").as<jsbind::Any>();
}

void MediaDevices::ondevicechange(const jsbind::Any& value) {
    EventTarget::set("ondevicechange", value);
}

jsbind::Promise<jsbind::Sequence<MediaDeviceInfo>> MediaDevices::enumerateDevices() {
    return EventTarget::call("enumerateDevices").as<jsbind::Promise<jsbind::Sequence<MediaDeviceInfo>>>();
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

jsbind::Undefined MediaDevices::setSupportedCaptureActions(const jsbind::Sequence<jsbind::DOMString>& actions) {
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

