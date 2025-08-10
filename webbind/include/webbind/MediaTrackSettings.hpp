#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type MediaTrackSettings
class MediaTrackSettings : public emlite::Val {
  explicit MediaTrackSettings(Handle h) noexcept;
public:
    static MediaTrackSettings take_ownership(Handle h) noexcept;
    explicit MediaTrackSettings(const emlite::Val &val) noexcept;
    MediaTrackSettings() noexcept;
    [[nodiscard]] MediaTrackSettings clone() const noexcept;
    /// Getter of the `displaySurface` attribute.
    [[nodiscard]] jsbind::String displaySurface() const;
    /// Setter of the `displaySurface` attribute.
    void displaySurface(const jsbind::String& value);
    /// Getter of the `logicalSurface` attribute.
    [[nodiscard]] bool logicalSurface() const;
    /// Setter of the `logicalSurface` attribute.
    void logicalSurface(bool value);
    /// Getter of the `cursor` attribute.
    [[nodiscard]] jsbind::String cursor() const;
    /// Setter of the `cursor` attribute.
    void cursor(const jsbind::String& value);
    /// Getter of the `restrictOwnAudio` attribute.
    [[nodiscard]] bool restrictOwnAudio() const;
    /// Setter of the `restrictOwnAudio` attribute.
    void restrictOwnAudio(bool value);
    /// Getter of the `suppressLocalAudioPlayback` attribute.
    [[nodiscard]] bool suppressLocalAudioPlayback() const;
    /// Setter of the `suppressLocalAudioPlayback` attribute.
    void suppressLocalAudioPlayback(bool value);
    /// Getter of the `screenPixelRatio` attribute.
    [[nodiscard]] double screenPixelRatio() const;
    /// Setter of the `screenPixelRatio` attribute.
    void screenPixelRatio(double value);
};

} // namespace webbind