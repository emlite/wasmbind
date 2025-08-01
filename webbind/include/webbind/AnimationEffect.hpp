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
    [[nodiscard]] OptionalEffectTiming clone() const noexcept;
    [[nodiscard]] double delay() const;
    void delay(double value);
    [[nodiscard]] double endDelay() const;
    void endDelay(double value);
    [[nodiscard]] FillMode fill() const;
    void fill(const FillMode& value);
    [[nodiscard]] double iterationStart() const;
    void iterationStart(double value);
    [[nodiscard]] double iterations() const;
    void iterations(double value);
    [[nodiscard]] jsbind::Any duration() const;
    void duration(const jsbind::Any& value);
    [[nodiscard]] PlaybackDirection direction() const;
    void direction(const PlaybackDirection& value);
    [[nodiscard]] jsbind::String easing() const;
    void easing(const jsbind::String& value);
};

/// The AnimationEffect class.
/// [`AnimationEffect`](https://developer.mozilla.org/en-US/docs/Web/API/AnimationEffect)
class AnimationEffect : public emlite::Val {
    explicit AnimationEffect(Handle h) noexcept;

public:
    explicit AnimationEffect(const emlite::Val &val) noexcept;
    static AnimationEffect take_ownership(Handle h) noexcept;

    [[nodiscard]] AnimationEffect clone() const noexcept;
    /// The getTiming method.
    /// [`AnimationEffect.getTiming`](https://developer.mozilla.org/en-US/docs/Web/API/AnimationEffect/getTiming)
    EffectTiming getTiming();
    /// The getComputedTiming method.
    /// [`AnimationEffect.getComputedTiming`](https://developer.mozilla.org/en-US/docs/Web/API/AnimationEffect/getComputedTiming)
    ComputedEffectTiming getComputedTiming();
    /// The updateTiming method.
    /// [`AnimationEffect.updateTiming`](https://developer.mozilla.org/en-US/docs/Web/API/AnimationEffect/updateTiming)
    jsbind::Undefined updateTiming();
    /// The updateTiming method.
    /// [`AnimationEffect.updateTiming`](https://developer.mozilla.org/en-US/docs/Web/API/AnimationEffect/updateTiming)
    jsbind::Undefined updateTiming(const OptionalEffectTiming& timing);
    /// Getter of the `parent` attribute.
    /// [`AnimationEffect.parent`](https://developer.mozilla.org/en-US/docs/Web/API/AnimationEffect/parent)
    [[nodiscard]] GroupEffect parent() const;
    /// Getter of the `previousSibling` attribute.
    /// [`AnimationEffect.previousSibling`](https://developer.mozilla.org/en-US/docs/Web/API/AnimationEffect/previousSibling)
    [[nodiscard]] AnimationEffect previousSibling() const;
    /// Getter of the `nextSibling` attribute.
    /// [`AnimationEffect.nextSibling`](https://developer.mozilla.org/en-US/docs/Web/API/AnimationEffect/nextSibling)
    [[nodiscard]] AnimationEffect nextSibling() const;
    /// The before method.
    /// [`AnimationEffect.before`](https://developer.mozilla.org/en-US/docs/Web/API/AnimationEffect/before)
    jsbind::Undefined before(const AnimationEffect& effects);
    /// The after method.
    /// [`AnimationEffect.after`](https://developer.mozilla.org/en-US/docs/Web/API/AnimationEffect/after)
    jsbind::Undefined after(const AnimationEffect& effects);
    /// The replace method.
    /// [`AnimationEffect.replace`](https://developer.mozilla.org/en-US/docs/Web/API/AnimationEffect/replace)
    jsbind::Undefined replace(const AnimationEffect& effects);
    /// The remove method.
    /// [`AnimationEffect.remove`](https://developer.mozilla.org/en-US/docs/Web/API/AnimationEffect/remove)
    jsbind::Undefined remove();
};

