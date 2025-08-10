#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "EffectTiming.hpp"
#include "ComputedEffectTiming.hpp"

namespace webbind {

/// Interface WorkletAnimationEffect
/// [`WorkletAnimationEffect`](https://developer.mozilla.org/en-US/docs/Web/API/WorkletAnimationEffect)
class WorkletAnimationEffect : public emlite::Val {
    explicit WorkletAnimationEffect(Handle h) noexcept;
public:
    explicit WorkletAnimationEffect(const emlite::Val &val) noexcept;
    static WorkletAnimationEffect take_ownership(Handle h) noexcept;
    [[nodiscard]] WorkletAnimationEffect clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// The getTiming method.
    /// [`WorkletAnimationEffect.getTiming`](https://developer.mozilla.org/en-US/docs/Web/API/WorkletAnimationEffect/getTiming)
    EffectTiming getTiming();
    /// The getComputedTiming method.
    /// [`WorkletAnimationEffect.getComputedTiming`](https://developer.mozilla.org/en-US/docs/Web/API/WorkletAnimationEffect/getComputedTiming)
    ComputedEffectTiming getComputedTiming();
    /// Getter of the `localTime` attribute.
    /// [`WorkletAnimationEffect.localTime`](https://developer.mozilla.org/en-US/docs/Web/API/WorkletAnimationEffect/localTime)
    [[nodiscard]] double localTime() const;
    /// Setter of the `localTime` attribute.
    /// [`WorkletAnimationEffect.localTime`](https://developer.mozilla.org/en-US/docs/Web/API/WorkletAnimationEffect/localTime)
    void localTime(double value);
};

} // namespace webbind