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
    WorkletAnimation(const jsbind::DOMString& animatorName, const jsbind::Any& effects, const AnimationTimeline& timeline, const jsbind::Any& options);
    jsbind::DOMString animatorName() const;
};

