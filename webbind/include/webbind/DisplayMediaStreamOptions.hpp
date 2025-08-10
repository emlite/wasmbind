#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

class CaptureController;

/// Dictionary type DisplayMediaStreamOptions
class DisplayMediaStreamOptions : public emlite::Val {
  explicit DisplayMediaStreamOptions(Handle h) noexcept;
public:
    static DisplayMediaStreamOptions take_ownership(Handle h) noexcept;
    explicit DisplayMediaStreamOptions(const emlite::Val &val) noexcept;
    DisplayMediaStreamOptions() noexcept;
    [[nodiscard]] DisplayMediaStreamOptions clone() const noexcept;
    /// Getter of the `video` attribute.
    [[nodiscard]] jsbind::Any video() const;
    /// Setter of the `video` attribute.
    void video(const jsbind::Any& value);
    /// Getter of the `audio` attribute.
    [[nodiscard]] jsbind::Any audio() const;
    /// Setter of the `audio` attribute.
    void audio(const jsbind::Any& value);
    /// Getter of the `controller` attribute.
    [[nodiscard]] CaptureController controller() const;
    /// Setter of the `controller` attribute.
    void controller(const CaptureController& value);
    /// Getter of the `selfBrowserSurface` attribute.
    [[nodiscard]] SelfCapturePreferenceEnum selfBrowserSurface() const;
    /// Setter of the `selfBrowserSurface` attribute.
    void selfBrowserSurface(const SelfCapturePreferenceEnum& value);
    /// Getter of the `systemAudio` attribute.
    [[nodiscard]] SystemAudioPreferenceEnum systemAudio() const;
    /// Setter of the `systemAudio` attribute.
    void systemAudio(const SystemAudioPreferenceEnum& value);
    /// Getter of the `windowAudio` attribute.
    [[nodiscard]] WindowAudioPreferenceEnum windowAudio() const;
    /// Setter of the `windowAudio` attribute.
    void windowAudio(const WindowAudioPreferenceEnum& value);
    /// Getter of the `surfaceSwitching` attribute.
    [[nodiscard]] SurfaceSwitchingPreferenceEnum surfaceSwitching() const;
    /// Setter of the `surfaceSwitching` attribute.
    void surfaceSwitching(const SurfaceSwitchingPreferenceEnum& value);
    /// Getter of the `monitorTypeSurfaces` attribute.
    [[nodiscard]] MonitorTypeSurfacesEnum monitorTypeSurfaces() const;
    /// Setter of the `monitorTypeSurfaces` attribute.
    void monitorTypeSurfaces(const MonitorTypeSurfacesEnum& value);
};

} // namespace webbind