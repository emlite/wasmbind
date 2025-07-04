#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "WorkletGlobalScope.hpp"
#include "enums.hpp"


class AnimationWorkletGlobalScope : public WorkletGlobalScope {
    explicit AnimationWorkletGlobalScope(Handle h) noexcept;

public:
    explicit AnimationWorkletGlobalScope(const emlite::Val &val) noexcept;
    static AnimationWorkletGlobalScope take_ownership(Handle h) noexcept;

    AnimationWorkletGlobalScope clone() const noexcept;
    jsbind::Undefined registerAnimator(const jsbind::DOMString& name, const jsbind::Function& animatorCtor);
};

