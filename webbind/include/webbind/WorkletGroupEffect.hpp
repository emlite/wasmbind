#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

class WorkletAnimationEffect;


class WorkletGroupEffect : public emlite::Val {
    explicit WorkletGroupEffect(Handle h) noexcept;

public:
    explicit WorkletGroupEffect(const emlite::Val &val) noexcept;
    static WorkletGroupEffect take_ownership(Handle h) noexcept;

    WorkletGroupEffect clone() const noexcept;
    jsbind::Sequence<WorkletAnimationEffect> getChildren();
};

