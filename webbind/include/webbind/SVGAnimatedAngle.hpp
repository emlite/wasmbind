#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

class SVGAngle;


class SVGAnimatedAngle : public emlite::Val {
    explicit SVGAnimatedAngle(Handle h) noexcept;

public:
    explicit SVGAnimatedAngle(const emlite::Val &val) noexcept;
    static SVGAnimatedAngle take_ownership(Handle h) noexcept;

    SVGAnimatedAngle clone() const noexcept;
    SVGAngle baseVal() const;
    SVGAngle animVal() const;
};

