#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "WorkletGlobalScope.hpp"

namespace webbind {

/// Interface AnimationWorkletGlobalScope
/// [`AnimationWorkletGlobalScope`](https://developer.mozilla.org/en-US/docs/Web/API/AnimationWorkletGlobalScope)
class AnimationWorkletGlobalScope : public WorkletGlobalScope {
    explicit AnimationWorkletGlobalScope(Handle h) noexcept;
public:
    explicit AnimationWorkletGlobalScope(const emlite::Val &val) noexcept;
    static AnimationWorkletGlobalScope take_ownership(Handle h) noexcept;
    [[nodiscard]] AnimationWorkletGlobalScope clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// The registerAnimator method.
    /// [`AnimationWorkletGlobalScope.registerAnimator`](https://developer.mozilla.org/en-US/docs/Web/API/AnimationWorkletGlobalScope/registerAnimator)
    jsbind::Undefined registerAnimator(const jsbind::String& name, const jsbind::Function& animatorCtor);
};

} // namespace webbind