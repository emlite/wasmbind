#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type MediaTrackSupportedConstraints
/// [`MediaTrackSupportedConstraints`](https://developer.mozilla.org/en-US/docs/Web/API/MediaTrackSupportedConstraints)
class MediaTrackSupportedConstraints : public emlite::Val {
  explicit MediaTrackSupportedConstraints(Handle h) noexcept;
public:
    static MediaTrackSupportedConstraints take_ownership(Handle h) noexcept;
    explicit MediaTrackSupportedConstraints(const emlite::Val &val) noexcept;
    MediaTrackSupportedConstraints() noexcept;
    [[nodiscard]] MediaTrackSupportedConstraints clone() const noexcept;
    [[nodiscard]] bool displaySurface() const;
    void displaySurface(bool value);
    [[nodiscard]] bool logicalSurface() const;
    void logicalSurface(bool value);
    [[nodiscard]] bool cursor() const;
    void cursor(bool value);
    [[nodiscard]] bool restrictOwnAudio() const;
    void restrictOwnAudio(bool value);
    [[nodiscard]] bool suppressLocalAudioPlayback() const;
    void suppressLocalAudioPlayback(bool value);
};

} // namespace webbind