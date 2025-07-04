#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "SVGGradientElement.hpp"
#include "enums.hpp"

class SVGAnimatedLength;


class SVGRadialGradientElement : public SVGGradientElement {
    explicit SVGRadialGradientElement(Handle h) noexcept;

public:
    explicit SVGRadialGradientElement(const emlite::Val &val) noexcept;
    static SVGRadialGradientElement take_ownership(Handle h) noexcept;

    SVGRadialGradientElement clone() const noexcept;
    SVGAnimatedLength cx() const;
    SVGAnimatedLength cy() const;
    SVGAnimatedLength r() const;
    SVGAnimatedLength fx() const;
    SVGAnimatedLength fy() const;
    SVGAnimatedLength fr() const;
};

