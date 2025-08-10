#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "KeyframeEffectOptions.hpp"

namespace webbind {

class AnimationTimeline;

/// Dictionary type KeyframeAnimationOptions
/// [`KeyframeAnimationOptions`](https://developer.mozilla.org/en-US/docs/Web/API/KeyframeAnimationOptions)
class KeyframeAnimationOptions : public KeyframeEffectOptions {
  explicit KeyframeAnimationOptions(Handle h) noexcept;
public:
    static KeyframeAnimationOptions take_ownership(Handle h) noexcept;
    explicit KeyframeAnimationOptions(const emlite::Val &val) noexcept;
    KeyframeAnimationOptions() noexcept;
    [[nodiscard]] KeyframeAnimationOptions clone() const noexcept;
    [[nodiscard]] jsbind::String id() const;
    void id(const jsbind::String& value);
    [[nodiscard]] AnimationTimeline timeline() const;
    void timeline(const AnimationTimeline& value);
};

} // namespace webbind