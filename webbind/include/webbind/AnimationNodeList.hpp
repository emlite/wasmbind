#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

class AnimationEffect;


class AnimationNodeList : public emlite::Val {
    explicit AnimationNodeList(Handle h) noexcept;

public:
    explicit AnimationNodeList(const emlite::Val &val) noexcept;
    static AnimationNodeList take_ownership(Handle h) noexcept;

    AnimationNodeList clone() const noexcept;
    unsigned long length() const;
    AnimationEffect item(unsigned long index);
};

