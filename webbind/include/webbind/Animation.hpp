#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "EventTarget.hpp"
#include "enums.hpp"

class AnimationEffect;
class AnimationTimeline;
class Animation;
class AnimationTrigger;


class Animation : public EventTarget {
    explicit Animation(Handle h) noexcept;

public:
    explicit Animation(const emlite::Val &val) noexcept;
    static Animation take_ownership(Handle h) noexcept;

    Animation clone() const noexcept;
    Animation();
    Animation(const AnimationEffect& effect);
    Animation(const AnimationEffect& effect, const AnimationTimeline& timeline);
    jsbind::String id() const;
    void id(const jsbind::String& value);
    AnimationEffect effect() const;
    void effect(const AnimationEffect& value);
    AnimationTimeline timeline() const;
    void timeline(const AnimationTimeline& value);
    double playbackRate() const;
    void playbackRate(double value);
    AnimationPlayState playState() const;
    AnimationReplaceState replaceState() const;
    bool pending() const;
    jsbind::Promise<Animation> ready() const;
    jsbind::Promise<Animation> finished() const;
    jsbind::Any onfinish() const;
    void onfinish(const jsbind::Any& value);
    jsbind::Any oncancel() const;
    void oncancel(const jsbind::Any& value);
    jsbind::Any onremove() const;
    void onremove(const jsbind::Any& value);
    jsbind::Undefined cancel();
    jsbind::Undefined finish();
    jsbind::Undefined play();
    jsbind::Undefined pause();
    jsbind::Undefined updatePlaybackRate(double playbackRate);
    jsbind::Undefined reverse();
    jsbind::Undefined persist();
    jsbind::Undefined commitStyles();
    jsbind::Any startTime() const;
    void startTime(const jsbind::Any& value);
    jsbind::Any currentTime() const;
    void currentTime(const jsbind::Any& value);
    AnimationTrigger trigger() const;
    void trigger(const AnimationTrigger& value);
    double overallProgress() const;
};

