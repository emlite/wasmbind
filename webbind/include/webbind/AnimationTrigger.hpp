#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

class AnimationTimeline;


/// The AnimationTrigger class.
/// [`AnimationTrigger`](https://developer.mozilla.org/en-US/docs/Web/API/AnimationTrigger)
class AnimationTrigger : public emlite::Val {
    explicit AnimationTrigger(Handle h) noexcept;

public:
    explicit AnimationTrigger(const emlite::Val &val) noexcept;
    static AnimationTrigger take_ownership(Handle h) noexcept;

    [[nodiscard]] AnimationTrigger clone() const noexcept;
    /// The `new AnimationTrigger(..)` constructor, creating a new AnimationTrigger instance
    AnimationTrigger();
    /// The `new AnimationTrigger(..)` constructor, creating a new AnimationTrigger instance
    AnimationTrigger(const jsbind::Any& options);
    /// Getter of the `timeline` attribute.
    /// [`AnimationTrigger.timeline`](https://developer.mozilla.org/en-US/docs/Web/API/AnimationTrigger/timeline)
    [[nodiscard]] AnimationTimeline timeline() const;
    /// Setter of the `timeline` attribute.
    /// [`AnimationTrigger.timeline`](https://developer.mozilla.org/en-US/docs/Web/API/AnimationTrigger/timeline)
    void timeline(const AnimationTimeline& value);
    /// Getter of the `behavior` attribute.
    /// [`AnimationTrigger.behavior`](https://developer.mozilla.org/en-US/docs/Web/API/AnimationTrigger/behavior)
    [[nodiscard]] AnimationTriggerBehavior behavior() const;
    /// Setter of the `behavior` attribute.
    /// [`AnimationTrigger.behavior`](https://developer.mozilla.org/en-US/docs/Web/API/AnimationTrigger/behavior)
    void behavior(const AnimationTriggerBehavior& value);
    /// Getter of the `rangeStart` attribute.
    /// [`AnimationTrigger.rangeStart`](https://developer.mozilla.org/en-US/docs/Web/API/AnimationTrigger/rangeStart)
    [[nodiscard]] jsbind::Any rangeStart() const;
    /// Setter of the `rangeStart` attribute.
    /// [`AnimationTrigger.rangeStart`](https://developer.mozilla.org/en-US/docs/Web/API/AnimationTrigger/rangeStart)
    void rangeStart(const jsbind::Any& value);
    /// Getter of the `rangeEnd` attribute.
    /// [`AnimationTrigger.rangeEnd`](https://developer.mozilla.org/en-US/docs/Web/API/AnimationTrigger/rangeEnd)
    [[nodiscard]] jsbind::Any rangeEnd() const;
    /// Setter of the `rangeEnd` attribute.
    /// [`AnimationTrigger.rangeEnd`](https://developer.mozilla.org/en-US/docs/Web/API/AnimationTrigger/rangeEnd)
    void rangeEnd(const jsbind::Any& value);
    /// Getter of the `exitRangeStart` attribute.
    /// [`AnimationTrigger.exitRangeStart`](https://developer.mozilla.org/en-US/docs/Web/API/AnimationTrigger/exitRangeStart)
    [[nodiscard]] jsbind::Any exitRangeStart() const;
    /// Setter of the `exitRangeStart` attribute.
    /// [`AnimationTrigger.exitRangeStart`](https://developer.mozilla.org/en-US/docs/Web/API/AnimationTrigger/exitRangeStart)
    void exitRangeStart(const jsbind::Any& value);
    /// Getter of the `exitRangeEnd` attribute.
    /// [`AnimationTrigger.exitRangeEnd`](https://developer.mozilla.org/en-US/docs/Web/API/AnimationTrigger/exitRangeEnd)
    [[nodiscard]] jsbind::Any exitRangeEnd() const;
    /// Setter of the `exitRangeEnd` attribute.
    /// [`AnimationTrigger.exitRangeEnd`](https://developer.mozilla.org/en-US/docs/Web/API/AnimationTrigger/exitRangeEnd)
    void exitRangeEnd(const jsbind::Any& value);
};

