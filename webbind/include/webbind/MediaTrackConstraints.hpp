#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "MediaTrackConstraintSet.hpp"

namespace webbind {

class MediaTrackConstraintSet;

/// Dictionary type MediaTrackConstraints
class MediaTrackConstraints : public MediaTrackConstraintSet {
  explicit MediaTrackConstraints(Handle h) noexcept;
public:
    static MediaTrackConstraints take_ownership(Handle h) noexcept;
    explicit MediaTrackConstraints(const emlite::Val &val) noexcept;
    MediaTrackConstraints() noexcept;
    [[nodiscard]] MediaTrackConstraints clone() const noexcept;
    /// Getter of the `advanced` attribute.
    [[nodiscard]] jsbind::TypedArray<MediaTrackConstraintSet> advanced() const;
    /// Setter of the `advanced` attribute.
    void advanced(const jsbind::TypedArray<MediaTrackConstraintSet>& value);
};

} // namespace webbind