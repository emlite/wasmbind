#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

class WorkletAnimationEffect;


/// The WorkletGroupEffect class.
/// [`WorkletGroupEffect`](https://developer.mozilla.org/en-US/docs/Web/API/WorkletGroupEffect)
class WorkletGroupEffect : public emlite::Val {
    explicit WorkletGroupEffect(Handle h) noexcept;

public:
    explicit WorkletGroupEffect(const emlite::Val &val) noexcept;
    static WorkletGroupEffect take_ownership(Handle h) noexcept;

    [[nodiscard]] WorkletGroupEffect clone() const noexcept;
    /// The getChildren method.
    /// [`WorkletGroupEffect.getChildren`](https://developer.mozilla.org/en-US/docs/Web/API/WorkletGroupEffect/getChildren)
    jsbind::TypedArray<WorkletAnimationEffect> getChildren();
};

