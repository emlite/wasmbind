#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type MediaTrackSettings
/// [`MediaTrackSettings`](https://developer.mozilla.org/en-US/docs/Web/API/MediaTrackSettings)
class MediaTrackSettings : public emlite::Val {
  explicit MediaTrackSettings(Handle h) noexcept;
public:
    static MediaTrackSettings take_ownership(Handle h) noexcept;
    explicit MediaTrackSettings(const emlite::Val &val) noexcept;
    MediaTrackSettings() noexcept;
    [[nodiscard]] MediaTrackSettings clone() const noexcept;
    [[nodiscard]] jsbind::String displaySurface() const;
    void displaySurface(const jsbind::String& value);
    [[nodiscard]] bool logicalSurface() const;
    void logicalSurface(bool value);
    [[nodiscard]] jsbind::String cursor() const;
    void cursor(const jsbind::String& value);
    [[nodiscard]] bool restrictOwnAudio() const;
    void restrictOwnAudio(bool value);
    [[nodiscard]] bool suppressLocalAudioPlayback() const;
    void suppressLocalAudioPlayback(bool value);
    [[nodiscard]] double screenPixelRatio() const;
    void screenPixelRatio(double value);
};

} // namespace webbind