#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

class AnimationTimeline;


class AnimationTrigger : public emlite::Val {
    explicit AnimationTrigger(Handle h) noexcept;

public:
    explicit AnimationTrigger(const emlite::Val &val) noexcept;
    static AnimationTrigger take_ownership(Handle h) noexcept;

    AnimationTrigger clone() const noexcept;
    AnimationTrigger(const jsbind::Any& options);
    AnimationTimeline timeline() const;
    void timeline(const AnimationTimeline& value);
    AnimationTriggerBehavior behavior() const;
    void behavior(const AnimationTriggerBehavior& value);
    jsbind::Any rangeStart() const;
    void rangeStart(const jsbind::Any& value);
    jsbind::Any rangeEnd() const;
    void rangeEnd(const jsbind::Any& value);
    jsbind::Any exitRangeStart() const;
    void exitRangeStart(const jsbind::Any& value);
    jsbind::Any exitRangeEnd() const;
    void exitRangeEnd(const jsbind::Any& value);
};

