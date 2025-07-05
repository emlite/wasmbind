#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

class Animation;
class AnimationEffect;


class AnimationTimeline : public emlite::Val {
    explicit AnimationTimeline(Handle h) noexcept;

public:
    explicit AnimationTimeline(const emlite::Val &val) noexcept;
    static AnimationTimeline take_ownership(Handle h) noexcept;

    AnimationTimeline clone() const noexcept;
    jsbind::Any currentTime() const;
    jsbind::Any duration() const;
    Animation play();
    Animation play(const AnimationEffect& effect);
};

