#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "Animation.hpp"
#include "enums.hpp"


class WorkletAnimation : public Animation {
    explicit WorkletAnimation(Handle h) noexcept;

public:
    explicit WorkletAnimation(const emlite::Val &val) noexcept;
    static WorkletAnimation take_ownership(Handle h) noexcept;

    WorkletAnimation clone() const noexcept;
    WorkletAnimation(const jsbind::String& animatorName);
    WorkletAnimation(const jsbind::String& animatorName, const jsbind::Any& effects);
    WorkletAnimation(const jsbind::String& animatorName, const jsbind::Any& effects, const AnimationTimeline& timeline);
    WorkletAnimation(const jsbind::String& animatorName, const jsbind::Any& effects, const AnimationTimeline& timeline, const jsbind::Any& options);
    jsbind::String animatorName() const;
};

