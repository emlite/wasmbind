#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "WorkletAnimationEffect.hpp"
#include "enums.hpp"

class OptionalEffectTiming;
class GroupEffect;
class AnimationEffect;


class OptionalEffectTiming : public emlite::Val {
  explicit OptionalEffectTiming(Handle h) noexcept;
public:
    static OptionalEffectTiming take_ownership(Handle h) noexcept;
    explicit OptionalEffectTiming(const emlite::Val &val) noexcept;
    OptionalEffectTiming() noexcept;
    OptionalEffectTiming clone() const noexcept;
    double delay() const;
    void delay(double value);
    double endDelay() const;
    void endDelay(double value);
    FillMode fill() const;
    void fill(const FillMode& value);
    double iterationStart() const;
    void iterationStart(double value);
    double iterations() const;
    void iterations(double value);
    jsbind::Any duration() const;
    void duration(const jsbind::Any& value);
    PlaybackDirection direction() const;
    void direction(const PlaybackDirection& value);
    jsbind::DOMString easing() const;
    void easing(const jsbind::DOMString& value);
};

class AnimationEffect : public emlite::Val {
    explicit AnimationEffect(Handle h) noexcept;

public:
    explicit AnimationEffect(const emlite::Val &val) noexcept;
    static AnimationEffect take_ownership(Handle h) noexcept;

    AnimationEffect clone() const noexcept;
    EffectTiming getTiming();
    ComputedEffectTiming getComputedTiming();
    jsbind::Undefined updateTiming(const OptionalEffectTiming& timing);
    GroupEffect parent() const;
    AnimationEffect previousSibling() const;
    AnimationEffect nextSibling() const;
    jsbind::Undefined before(const AnimationEffect& effects);
    jsbind::Undefined after(const AnimationEffect& effects);
    jsbind::Undefined replace(const AnimationEffect& effects);
    jsbind::Undefined remove();
};

