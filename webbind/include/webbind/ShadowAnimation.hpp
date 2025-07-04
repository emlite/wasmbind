#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "Animation.hpp"
#include "enums.hpp"


class ShadowAnimation : public Animation {
    explicit ShadowAnimation(Handle h) noexcept;

public:
    explicit ShadowAnimation(const emlite::Val &val) noexcept;
    static ShadowAnimation take_ownership(Handle h) noexcept;

    ShadowAnimation clone() const noexcept;
    ShadowAnimation(const Animation& source, const jsbind::Any& newTarget);
    Animation sourceAnimation() const;
};

