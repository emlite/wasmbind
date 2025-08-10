#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type MediaPositionState
class MediaPositionState : public emlite::Val {
  explicit MediaPositionState(Handle h) noexcept;
public:
    static MediaPositionState take_ownership(Handle h) noexcept;
    explicit MediaPositionState(const emlite::Val &val) noexcept;
    MediaPositionState() noexcept;
    [[nodiscard]] MediaPositionState clone() const noexcept;
    /// Getter of the `duration` attribute.
    [[nodiscard]] double duration() const;
    /// Setter of the `duration` attribute.
    void duration(double value);
    /// Getter of the `playbackRate` attribute.
    [[nodiscard]] double playbackRate() const;
    /// Setter of the `playbackRate` attribute.
    void playbackRate(double value);
    /// Getter of the `position` attribute.
    [[nodiscard]] double position() const;
    /// Setter of the `position` attribute.
    void position(double value);
};

} // namespace webbind