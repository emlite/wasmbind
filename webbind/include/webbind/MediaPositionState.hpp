#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type MediaPositionState
/// [`MediaPositionState`](https://developer.mozilla.org/en-US/docs/Web/API/MediaPositionState)
class MediaPositionState : public emlite::Val {
  explicit MediaPositionState(Handle h) noexcept;
public:
    static MediaPositionState take_ownership(Handle h) noexcept;
    explicit MediaPositionState(const emlite::Val &val) noexcept;
    MediaPositionState() noexcept;
    [[nodiscard]] MediaPositionState clone() const noexcept;
    [[nodiscard]] double duration() const;
    void duration(double value);
    [[nodiscard]] double playbackRate() const;
    void playbackRate(double value);
    [[nodiscard]] double position() const;
    void position(double value);
};

} // namespace webbind