#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "MediaTrackConstraintSet.hpp"
#include "MediaTrackConstraintSet.hpp"

namespace webbind {

/// Dictionary type MediaTrackConstraints
/// [`MediaTrackConstraints`](https://developer.mozilla.org/en-US/docs/Web/API/MediaTrackConstraints)
class MediaTrackConstraints : public MediaTrackConstraintSet {
  explicit MediaTrackConstraints(Handle h) noexcept;
public:
    static MediaTrackConstraints take_ownership(Handle h) noexcept;
    explicit MediaTrackConstraints(const emlite::Val &val) noexcept;
    MediaTrackConstraints() noexcept;
    [[nodiscard]] MediaTrackConstraints clone() const noexcept;
    [[nodiscard]] jsbind::TypedArray<MediaTrackConstraintSet> advanced() const;
    void advanced(const jsbind::TypedArray<MediaTrackConstraintSet>& value);
};

} // namespace webbind