#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "EffectTiming.hpp"

namespace webbind {

/// Dictionary type ComputedEffectTiming
/// [`ComputedEffectTiming`](https://developer.mozilla.org/en-US/docs/Web/API/ComputedEffectTiming)
class ComputedEffectTiming : public EffectTiming {
  explicit ComputedEffectTiming(Handle h) noexcept;
public:
    static ComputedEffectTiming take_ownership(Handle h) noexcept;
    explicit ComputedEffectTiming(const emlite::Val &val) noexcept;
    ComputedEffectTiming() noexcept;
    [[nodiscard]] ComputedEffectTiming clone() const noexcept;
    [[nodiscard]] double progress() const;
    void progress(double value);
    [[nodiscard]] double currentIteration() const;
    void currentIteration(double value);
};

} // namespace webbind