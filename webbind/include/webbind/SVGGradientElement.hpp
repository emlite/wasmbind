#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "SVGElement.hpp"
#include "enums.hpp"

class SVGAnimatedEnumeration;
class SVGAnimatedTransformList;
class SVGAnimatedString;


class SVGGradientElement : public SVGElement {
    explicit SVGGradientElement(Handle h) noexcept;

public:
    explicit SVGGradientElement(const emlite::Val &val) noexcept;
    static SVGGradientElement take_ownership(Handle h) noexcept;

    SVGGradientElement clone() const noexcept;
    SVGAnimatedEnumeration gradientUnits() const;
    SVGAnimatedTransformList gradientTransform() const;
    SVGAnimatedEnumeration spreadMethod() const;
    SVGAnimatedString href() const;
};

