#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "GroupEffect.hpp"
#include "enums.hpp"

class SequenceEffect;


/// The SequenceEffect class.
/// [`SequenceEffect`](https://developer.mozilla.org/en-US/docs/Web/API/SequenceEffect)
class SequenceEffect : public GroupEffect {
    explicit SequenceEffect(Handle h) noexcept;

public:
    explicit SequenceEffect(const emlite::Val &val) noexcept;
    static SequenceEffect take_ownership(Handle h) noexcept;

    [[nodiscard]] SequenceEffect clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// The `new SequenceEffect(..)` constructor, creating a new SequenceEffect instance
    SequenceEffect(const jsbind::TypedArray<AnimationEffect>& children);
    /// The `new SequenceEffect(..)` constructor, creating a new SequenceEffect instance
    SequenceEffect(const jsbind::TypedArray<AnimationEffect>& children, const jsbind::Any& timing);
    /// The clone method.
    /// [`SequenceEffect.clone`](https://developer.mozilla.org/en-US/docs/Web/API/SequenceEffect/clone)
    SequenceEffect clone();
};

