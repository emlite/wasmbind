#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

class AnimationNodeList;
class AnimationEffect;
class GroupEffect;


class GroupEffect : public emlite::Val {
    explicit GroupEffect(Handle h) noexcept;

public:
    explicit GroupEffect(const emlite::Val &val) noexcept;
    static GroupEffect take_ownership(Handle h) noexcept;

    GroupEffect clone() const noexcept;
    GroupEffect(const jsbind::Sequence<AnimationEffect>& children);
    GroupEffect(const jsbind::Sequence<AnimationEffect>& children, const jsbind::Any& timing);
    AnimationNodeList children() const;
    AnimationEffect firstChild() const;
    AnimationEffect lastChild() const;
    GroupEffect clone();
    jsbind::Undefined prepend(const AnimationEffect& effects);
    jsbind::Undefined append(const AnimationEffect& effects);
};

