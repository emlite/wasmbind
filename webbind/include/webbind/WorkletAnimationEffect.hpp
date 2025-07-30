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
    EffectTiming clone() const noexcept;
    FillMode fill() const;
    void fill(const FillMode& value);
    double iterationStart() const;
    void iterationStart(double value);
    double iterations() const;
    void iterations(double value);
    PlaybackDirection direction() const;
    void direction(const PlaybackDirection& value);
    jsbind::String easing() const;
    void easing(const jsbind::String& value);
};

class ComputedEffectTiming : public emlite::Val {
  explicit ComputedEffectTiming(Handle h) noexcept;
public:
    static ComputedEffectTiming take_ownership(Handle h) noexcept;
    explicit ComputedEffectTiming(const emlite::Val &val) noexcept;
    ComputedEffectTiming() noexcept;
    ComputedEffectTiming clone() const noexcept;
    double progress() const;
    void progress(double value);
    double currentIteration() const;
    void currentIteration(double value);
};

class WorkletAnimationEffect : public emlite::Val {
    explicit WorkletAnimationEffect(Handle h) noexcept;

public:
    explicit WorkletAnimationEffect(const emlite::Val &val) noexcept;
    static WorkletAnimationEffect take_ownership(Handle h) noexcept;

    WorkletAnimationEffect clone() const noexcept;
    EffectTiming getTiming();
    ComputedEffectTiming getComputedTiming();
    double localTime() const;
    void localTime(double value);
};

