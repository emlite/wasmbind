#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "GroupEffect.hpp"
#include "enums.hpp"

class SequenceEffect;


class SequenceEffect : public GroupEffect {
    explicit SequenceEffect(Handle h) noexcept;

public:
    explicit SequenceEffect(const emlite::Val &val) noexcept;
    static SequenceEffect take_ownership(Handle h) noexcept;

    SequenceEffect clone() const noexcept;
    SequenceEffect(const jsbind::Sequence<AnimationEffect>& children);
    SequenceEffect(const jsbind::Sequence<AnimationEffect>& children, const jsbind::Any& timing);
    SequenceEffect clone();
};

