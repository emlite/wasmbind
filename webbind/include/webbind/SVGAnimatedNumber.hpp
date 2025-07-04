#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"


class SVGAnimatedNumber : public emlite::Val {
    explicit SVGAnimatedNumber(Handle h) noexcept;

public:
    explicit SVGAnimatedNumber(const emlite::Val &val) noexcept;
    static SVGAnimatedNumber take_ownership(Handle h) noexcept;

    SVGAnimatedNumber clone() const noexcept;
    float baseVal() const;
    void baseVal(float value);
    float animVal() const;
};

