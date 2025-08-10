#include <webbind/DisplayMediaStreamOptions.hpp>
#include <webbind/CaptureController.hpp>

namespace webbind {

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


} // namespace webbind