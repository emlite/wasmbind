#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "EventTarget.hpp"
#include "enums.hpp"

namespace webbind {

class AnimationEffect;
class AnimationTimeline;
class Animation;
class AnimationTrigger;

/// Interface Animation
/// [`Animation`](https://developer.mozilla.org/en-US/docs/Web/API/Animation)
class Animation : public EventTarget {
    explicit Animation(Handle h) noexcept;
public:
    explicit Animation(const emlite::Val &val) noexcept;
    static Animation take_ownership(Handle h) noexcept;
    [[nodiscard]] Animation clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// The `new Animation(..)` constructor, creating a new Animation instance
    Animation();
    /// The `new Animation(..)` constructor, creating a new Animation instance
    Animation(const AnimationEffect& effect);
    /// The `new Animation(..)` constructor, creating a new Animation instance
    Animation(const AnimationEffect& effect, const AnimationTimeline& timeline);
    /// Getter of the `id` attribute.
    /// [`Animation.id`](https://developer.mozilla.org/en-US/docs/Web/API/Animation/id)
    [[nodiscard]] jsbind::String id() const;
    /// Setter of the `id` attribute.
    /// [`Animation.id`](https://developer.mozilla.org/en-US/docs/Web/API/Animation/id)
    void id(const jsbind::String& value);
    /// Getter of the `effect` attribute.
    /// [`Animation.effect`](https://developer.mozilla.org/en-US/docs/Web/API/Animation/effect)
    [[nodiscard]] AnimationEffect effect() const;
    /// Setter of the `effect` attribute.
    /// [`Animation.effect`](https://developer.mozilla.org/en-US/docs/Web/API/Animation/effect)
    void effect(const AnimationEffect& value);
    /// Getter of the `timeline` attribute.
    /// [`Animation.timeline`](https://developer.mozilla.org/en-US/docs/Web/API/Animation/timeline)
    [[nodiscard]] AnimationTimeline timeline() const;
    /// Setter of the `timeline` attribute.
    /// [`Animation.timeline`](https://developer.mozilla.org/en-US/docs/Web/API/Animation/timeline)
    void timeline(const AnimationTimeline& value);
    /// Getter of the `playbackRate` attribute.
    /// [`Animation.playbackRate`](https://developer.mozilla.org/en-US/docs/Web/API/Animation/playbackRate)
    [[nodiscard]] double playbackRate() const;
    /// Setter of the `playbackRate` attribute.
    /// [`Animation.playbackRate`](https://developer.mozilla.org/en-US/docs/Web/API/Animation/playbackRate)
    void playbackRate(double value);
    /// Getter of the `playState` attribute.
    /// [`Animation.playState`](https://developer.mozilla.org/en-US/docs/Web/API/Animation/playState)
    [[nodiscard]] AnimationPlayState playState() const;
    /// Getter of the `replaceState` attribute.
    /// [`Animation.replaceState`](https://developer.mozilla.org/en-US/docs/Web/API/Animation/replaceState)
    [[nodiscard]] AnimationReplaceState replaceState() const;
    /// Getter of the `pending` attribute.
    /// [`Animation.pending`](https://developer.mozilla.org/en-US/docs/Web/API/Animation/pending)
    [[nodiscard]] bool pending() const;
    /// Getter of the `ready` attribute.
    /// [`Animation.ready`](https://developer.mozilla.org/en-US/docs/Web/API/Animation/ready)
    [[nodiscard]] jsbind::Promise<Animation> ready() const;
    /// Getter of the `finished` attribute.
    /// [`Animation.finished`](https://developer.mozilla.org/en-US/docs/Web/API/Animation/finished)
    [[nodiscard]] jsbind::Promise<Animation> finished() const;
    /// Getter of the `onfinish` attribute.
    /// [`Animation.onfinish`](https://developer.mozilla.org/en-US/docs/Web/API/Animation/onfinish)
    [[nodiscard]] jsbind::Any onfinish() const;
    /// Setter of the `onfinish` attribute.
    /// [`Animation.onfinish`](https://developer.mozilla.org/en-US/docs/Web/API/Animation/onfinish)
    void onfinish(const jsbind::Any& value);
    /// Getter of the `oncancel` attribute.
    /// [`Animation.oncancel`](https://developer.mozilla.org/en-US/docs/Web/API/Animation/oncancel)
    [[nodiscard]] jsbind::Any oncancel() const;
    /// Setter of the `oncancel` attribute.
    /// [`Animation.oncancel`](https://developer.mozilla.org/en-US/docs/Web/API/Animation/oncancel)
    void oncancel(const jsbind::Any& value);
    /// Getter of the `onremove` attribute.
    /// [`Animation.onremove`](https://developer.mozilla.org/en-US/docs/Web/API/Animation/onremove)
    [[nodiscard]] jsbind::Any onremove() const;
    /// Setter of the `onremove` attribute.
    /// [`Animation.onremove`](https://developer.mozilla.org/en-US/docs/Web/API/Animation/onremove)
    void onremove(const jsbind::Any& value);
    /// The cancel method.
    /// [`Animation.cancel`](https://developer.mozilla.org/en-US/docs/Web/API/Animation/cancel)
    jsbind::Undefined cancel();
    /// The finish method.
    /// [`Animation.finish`](https://developer.mozilla.org/en-US/docs/Web/API/Animation/finish)
    jsbind::Undefined finish();
    /// The play method.
    /// [`Animation.play`](https://developer.mozilla.org/en-US/docs/Web/API/Animation/play)
    jsbind::Undefined play();
    /// The pause method.
    /// [`Animation.pause`](https://developer.mozilla.org/en-US/docs/Web/API/Animation/pause)
    jsbind::Undefined pause();
    /// The updatePlaybackRate method.
    /// [`Animation.updatePlaybackRate`](https://developer.mozilla.org/en-US/docs/Web/API/Animation/updatePlaybackRate)
    jsbind::Undefined updatePlaybackRate(double playbackRate);
    /// The reverse method.
    /// [`Animation.reverse`](https://developer.mozilla.org/en-US/docs/Web/API/Animation/reverse)
    jsbind::Undefined reverse();
    /// The persist method.
    /// [`Animation.persist`](https://developer.mozilla.org/en-US/docs/Web/API/Animation/persist)
    jsbind::Undefined persist();
    /// The commitStyles method.
    /// [`Animation.commitStyles`](https://developer.mozilla.org/en-US/docs/Web/API/Animation/commitStyles)
    jsbind::Undefined commitStyles();
    /// Getter of the `startTime` attribute.
    /// [`Animation.startTime`](https://developer.mozilla.org/en-US/docs/Web/API/Animation/startTime)
    [[nodiscard]] jsbind::Any startTime() const;
    /// Setter of the `startTime` attribute.
    /// [`Animation.startTime`](https://developer.mozilla.org/en-US/docs/Web/API/Animation/startTime)
    void startTime(const jsbind::Any& value);
    /// Getter of the `currentTime` attribute.
    /// [`Animation.currentTime`](https://developer.mozilla.org/en-US/docs/Web/API/Animation/currentTime)
    [[nodiscard]] jsbind::Any currentTime() const;
    /// Setter of the `currentTime` attribute.
    /// [`Animation.currentTime`](https://developer.mozilla.org/en-US/docs/Web/API/Animation/currentTime)
    void currentTime(const jsbind::Any& value);
    /// Getter of the `trigger` attribute.
    /// [`Animation.trigger`](https://developer.mozilla.org/en-US/docs/Web/API/Animation/trigger)
    [[nodiscard]] AnimationTrigger trigger() const;
    /// Setter of the `trigger` attribute.
    /// [`Animation.trigger`](https://developer.mozilla.org/en-US/docs/Web/API/Animation/trigger)
    void trigger(const AnimationTrigger& value);
    /// Getter of the `overallProgress` attribute.
    /// [`Animation.overallProgress`](https://developer.mozilla.org/en-US/docs/Web/API/Animation/overallProgress)
    [[nodiscard]] double overallProgress() const;
};

} // namespace webbind