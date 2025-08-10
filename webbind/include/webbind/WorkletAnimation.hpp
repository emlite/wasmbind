#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "Animation.hpp"

namespace webbind {

class AnimationTimeline;

/// Interface WorkletAnimation
/// [`WorkletAnimation`](https://developer.mozilla.org/en-US/docs/Web/API/WorkletAnimation)
class WorkletAnimation : public Animation {
    explicit WorkletAnimation(Handle h) noexcept;
public:
    explicit WorkletAnimation(const emlite::Val &val) noexcept;
    static WorkletAnimation take_ownership(Handle h) noexcept;
    [[nodiscard]] WorkletAnimation clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// The `new WorkletAnimation(..)` constructor, creating a new WorkletAnimation instance
    WorkletAnimation(const jsbind::String& animatorName);
    /// The `new WorkletAnimation(..)` constructor, creating a new WorkletAnimation instance
    WorkletAnimation(const jsbind::String& animatorName, const jsbind::Any& effects);
    /// The `new WorkletAnimation(..)` constructor, creating a new WorkletAnimation instance
    WorkletAnimation(const jsbind::String& animatorName, const jsbind::Any& effects, const AnimationTimeline& timeline);
    /// The `new WorkletAnimation(..)` constructor, creating a new WorkletAnimation instance
    WorkletAnimation(const jsbind::String& animatorName, const jsbind::Any& effects, const AnimationTimeline& timeline, const jsbind::Any& options);
    /// [`WorkletAnimation.animatorName`](https://developer.mozilla.org/en-US/docs/Web/API/WorkletAnimation/animatorName)
    /// [`WorkletAnimation.animatorName`](https://developer.mozilla.org/en-US/docs/Web/API/WorkletAnimation/animatorName)
    [[nodiscard]] jsbind::String animatorName() const;
};

} // namespace webbind