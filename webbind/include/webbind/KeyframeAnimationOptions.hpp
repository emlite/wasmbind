#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "KeyframeEffectOptions.hpp"

namespace webbind {

class AnimationTimeline;

/// Dictionary type KeyframeAnimationOptions
class KeyframeAnimationOptions : public KeyframeEffectOptions {
  explicit KeyframeAnimationOptions(Handle h) noexcept;
public:
    static KeyframeAnimationOptions take_ownership(Handle h) noexcept;
    explicit KeyframeAnimationOptions(const emlite::Val &val) noexcept;
    KeyframeAnimationOptions() noexcept;
    [[nodiscard]] KeyframeAnimationOptions clone() const noexcept;
    /// Getter of the `id` attribute.
    [[nodiscard]] jsbind::String id() const;
    /// Setter of the `id` attribute.
    void id(const jsbind::String& value);
    /// Getter of the `timeline` attribute.
    [[nodiscard]] AnimationTimeline timeline() const;
    /// Setter of the `timeline` attribute.
    void timeline(const AnimationTimeline& value);
};

} // namespace webbind