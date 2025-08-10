#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

class Animation;
class AnimationEffect;

/// Interface AnimationTimeline
/// [`AnimationTimeline`](https://developer.mozilla.org/en-US/docs/Web/API/AnimationTimeline)
class AnimationTimeline : public emlite::Val {
    explicit AnimationTimeline(Handle h) noexcept;
public:
    explicit AnimationTimeline(const emlite::Val &val) noexcept;
    static AnimationTimeline take_ownership(Handle h) noexcept;
    [[nodiscard]] AnimationTimeline clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// Getter of the `currentTime` attribute.
    /// [`AnimationTimeline.currentTime`](https://developer.mozilla.org/en-US/docs/Web/API/AnimationTimeline/currentTime)
    [[nodiscard]] jsbind::Any currentTime() const;
    /// Getter of the `duration` attribute.
    /// [`AnimationTimeline.duration`](https://developer.mozilla.org/en-US/docs/Web/API/AnimationTimeline/duration)
    [[nodiscard]] jsbind::Any duration() const;
    /// The play method.
    /// [`AnimationTimeline.play`](https://developer.mozilla.org/en-US/docs/Web/API/AnimationTimeline/play)
    Animation play();
    /// The play method.
    /// [`AnimationTimeline.play`](https://developer.mozilla.org/en-US/docs/Web/API/AnimationTimeline/play)
    Animation play(const AnimationEffect& effect);
};

} // namespace webbind