#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "EffectTiming.hpp"

namespace webbind {

/// Dictionary type ComputedEffectTiming
class ComputedEffectTiming : public EffectTiming {
  explicit ComputedEffectTiming(Handle h) noexcept;
public:
    static ComputedEffectTiming take_ownership(Handle h) noexcept;
    explicit ComputedEffectTiming(const emlite::Val &val) noexcept;
    ComputedEffectTiming() noexcept;
    [[nodiscard]] ComputedEffectTiming clone() const noexcept;
    /// Getter of the `progress` attribute.
    [[nodiscard]] double progress() const;
    /// Setter of the `progress` attribute.
    void progress(double value);
    /// Getter of the `currentIteration` attribute.
    [[nodiscard]] double currentIteration() const;
    /// Setter of the `currentIteration` attribute.
    void currentIteration(double value);
};

} // namespace webbind