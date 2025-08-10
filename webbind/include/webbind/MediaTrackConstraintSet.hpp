#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type MediaTrackConstraintSet
class MediaTrackConstraintSet : public emlite::Val {
  explicit MediaTrackConstraintSet(Handle h) noexcept;
public:
    static MediaTrackConstraintSet take_ownership(Handle h) noexcept;
    explicit MediaTrackConstraintSet(const emlite::Val &val) noexcept;
    MediaTrackConstraintSet() noexcept;
    [[nodiscard]] MediaTrackConstraintSet clone() const noexcept;
    /// Getter of the `displaySurface` attribute.
    [[nodiscard]] jsbind::Any displaySurface() const;
    /// Setter of the `displaySurface` attribute.
    void displaySurface(const jsbind::Any& value);
    /// Getter of the `logicalSurface` attribute.
    [[nodiscard]] jsbind::Any logicalSurface() const;
    /// Setter of the `logicalSurface` attribute.
    void logicalSurface(const jsbind::Any& value);
    /// Getter of the `cursor` attribute.
    [[nodiscard]] jsbind::Any cursor() const;
    /// Setter of the `cursor` attribute.
    void cursor(const jsbind::Any& value);
    /// Getter of the `restrictOwnAudio` attribute.
    [[nodiscard]] jsbind::Any restrictOwnAudio() const;
    /// Setter of the `restrictOwnAudio` attribute.
    void restrictOwnAudio(const jsbind::Any& value);
    /// Getter of the `suppressLocalAudioPlayback` attribute.
    [[nodiscard]] jsbind::Any suppressLocalAudioPlayback() const;
    /// Setter of the `suppressLocalAudioPlayback` attribute.
    void suppressLocalAudioPlayback(const jsbind::Any& value);
};

} // namespace webbind