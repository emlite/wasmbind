#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type MediaTrackSupportedConstraints
class MediaTrackSupportedConstraints : public emlite::Val {
  explicit MediaTrackSupportedConstraints(Handle h) noexcept;
public:
    static MediaTrackSupportedConstraints take_ownership(Handle h) noexcept;
    explicit MediaTrackSupportedConstraints(const emlite::Val &val) noexcept;
    MediaTrackSupportedConstraints() noexcept;
    [[nodiscard]] MediaTrackSupportedConstraints clone() const noexcept;
    /// Getter of the `displaySurface` attribute.
    [[nodiscard]] bool displaySurface() const;
    /// Setter of the `displaySurface` attribute.
    void displaySurface(bool value);
    /// Getter of the `logicalSurface` attribute.
    [[nodiscard]] bool logicalSurface() const;
    /// Setter of the `logicalSurface` attribute.
    void logicalSurface(bool value);
    /// Getter of the `cursor` attribute.
    [[nodiscard]] bool cursor() const;
    /// Setter of the `cursor` attribute.
    void cursor(bool value);
    /// Getter of the `restrictOwnAudio` attribute.
    [[nodiscard]] bool restrictOwnAudio() const;
    /// Setter of the `restrictOwnAudio` attribute.
    void restrictOwnAudio(bool value);
    /// Getter of the `suppressLocalAudioPlayback` attribute.
    [[nodiscard]] bool suppressLocalAudioPlayback() const;
    /// Setter of the `suppressLocalAudioPlayback` attribute.
    void suppressLocalAudioPlayback(bool value);
};

} // namespace webbind