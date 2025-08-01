#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "WorkletGlobalScope.hpp"
#include "enums.hpp"


/// The AnimationWorkletGlobalScope class.
/// [`AnimationWorkletGlobalScope`](https://developer.mozilla.org/en-US/docs/Web/API/AnimationWorkletGlobalScope)
class AnimationWorkletGlobalScope : public WorkletGlobalScope {
    explicit AnimationWorkletGlobalScope(Handle h) noexcept;

public:
    explicit AnimationWorkletGlobalScope(const emlite::Val &val) noexcept;
    static AnimationWorkletGlobalScope take_ownership(Handle h) noexcept;

    [[nodiscard]] AnimationWorkletGlobalScope clone() const noexcept;
    /// The registerAnimator method.
    /// [`AnimationWorkletGlobalScope.registerAnimator`](https://developer.mozilla.org/en-US/docs/Web/API/AnimationWorkletGlobalScope/registerAnimator)
    jsbind::Undefined registerAnimator(const jsbind::String& name, const jsbind::Function& animatorCtor);
};

