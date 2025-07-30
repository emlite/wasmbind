#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "Animation.hpp"
#include "enums.hpp"


class CSSAnimation : public Animation {
    explicit CSSAnimation(Handle h) noexcept;

public:
    explicit CSSAnimation(const emlite::Val &val) noexcept;
    static CSSAnimation take_ownership(Handle h) noexcept;

    CSSAnimation clone() const noexcept;
    jsbind::String animationName() const;
};

