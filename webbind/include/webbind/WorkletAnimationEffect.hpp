#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

class EffectTiming;
class ComputedEffectTiming;


class EffectTiming : public emlite::Val {
  explicit EffectTiming(Handle h) noexcept;
public:
    static EffectTiming take_ownership(Handle h) noexcept;
    explicit EffectTiming(const emlite::Val &val) noexcept;
    EffectTiming() noexcept;
    [[nodiscard]] EffectTiming clone() const noexcept;
    [[nodiscard]] FillMode fill() const;
    void fill(const FillMode& value);
    [[nodiscard]] double iterationStart() const;
    void iterationStart(double value);
    [[nodiscard]] double iterations() const;
    void iterations(double value);
    [[nodiscard]] PlaybackDirection direction() const;
    void direction(const PlaybackDirection& value);
    [[nodiscard]] jsbind::String easing() const;
    void easing(const jsbind::String& value);
};

class ComputedEffectTiming : public emlite::Val {
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

/// The WorkletAnimationEffect class.
/// [`WorkletAnimationEffect`](https://developer.mozilla.org/en-US/docs/Web/API/WorkletAnimationEffect)
class WorkletAnimationEffect : public emlite::Val {
    explicit WorkletAnimationEffect(Handle h) noexcept;

public:
    explicit WorkletAnimationEffect(const emlite::Val &val) noexcept;
    static WorkletAnimationEffect take_ownership(Handle h) noexcept;

    [[nodiscard]] WorkletAnimationEffect clone() const noexcept;
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

