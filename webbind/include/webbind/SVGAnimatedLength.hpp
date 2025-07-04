#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

class SVGLength;


class SVGAnimatedLength : public emlite::Val {
    explicit SVGAnimatedLength(Handle h) noexcept;

public:
    explicit SVGAnimatedLength(const emlite::Val &val) noexcept;
    static SVGAnimatedLength take_ownership(Handle h) noexcept;

    SVGAnimatedLength clone() const noexcept;
    SVGLength baseVal() const;
    SVGLength animVal() const;
};

