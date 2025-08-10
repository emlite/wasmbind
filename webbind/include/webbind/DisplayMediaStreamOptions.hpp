#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

class CaptureController;

/// Dictionary type DisplayMediaStreamOptions
/// [`DisplayMediaStreamOptions`](https://developer.mozilla.org/en-US/docs/Web/API/DisplayMediaStreamOptions)
class DisplayMediaStreamOptions : public emlite::Val {
  explicit DisplayMediaStreamOptions(Handle h) noexcept;
public:
    static DisplayMediaStreamOptions take_ownership(Handle h) noexcept;
    explicit DisplayMediaStreamOptions(const emlite::Val &val) noexcept;
    DisplayMediaStreamOptions() noexcept;
    [[nodiscard]] DisplayMediaStreamOptions clone() const noexcept;
    [[nodiscard]] jsbind::Any video() const;
    void video(const jsbind::Any& value);
    [[nodiscard]] jsbind::Any audio() const;
    void audio(const jsbind::Any& value);
    [[nodiscard]] CaptureController controller() const;
    void controller(const CaptureController& value);
    [[nodiscard]] SelfCapturePreferenceEnum selfBrowserSurface() const;
    void selfBrowserSurface(const SelfCapturePreferenceEnum& value);
    [[nodiscard]] SystemAudioPreferenceEnum systemAudio() const;
    void systemAudio(const SystemAudioPreferenceEnum& value);
    [[nodiscard]] WindowAudioPreferenceEnum windowAudio() const;
    void windowAudio(const WindowAudioPreferenceEnum& value);
    [[nodiscard]] SurfaceSwitchingPreferenceEnum surfaceSwitching() const;
    void surfaceSwitching(const SurfaceSwitchingPreferenceEnum& value);
    [[nodiscard]] MonitorTypeSurfacesEnum monitorTypeSurfaces() const;
    void monitorTypeSurfaces(const MonitorTypeSurfacesEnum& value);
};

} // namespace webbind