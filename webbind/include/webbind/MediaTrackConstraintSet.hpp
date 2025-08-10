#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type MediaTrackConstraintSet
/// [`MediaTrackConstraintSet`](https://developer.mozilla.org/en-US/docs/Web/API/MediaTrackConstraintSet)
class MediaTrackConstraintSet : public emlite::Val {
  explicit MediaTrackConstraintSet(Handle h) noexcept;
public:
    static MediaTrackConstraintSet take_ownership(Handle h) noexcept;
    explicit MediaTrackConstraintSet(const emlite::Val &val) noexcept;
    MediaTrackConstraintSet() noexcept;
    [[nodiscard]] MediaTrackConstraintSet clone() const noexcept;
    [[nodiscard]] jsbind::Any displaySurface() const;
    void displaySurface(const jsbind::Any& value);
    [[nodiscard]] jsbind::Any logicalSurface() const;
    void logicalSurface(const jsbind::Any& value);
    [[nodiscard]] jsbind::Any cursor() const;
    void cursor(const jsbind::Any& value);
    [[nodiscard]] jsbind::Any restrictOwnAudio() const;
    void restrictOwnAudio(const jsbind::Any& value);
    [[nodiscard]] jsbind::Any suppressLocalAudioPlayback() const;
    void suppressLocalAudioPlayback(const jsbind::Any& value);
};

} // namespace webbind