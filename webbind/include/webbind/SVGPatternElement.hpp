#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "SVGElement.hpp"
#include "enums.hpp"

class SVGAnimatedEnumeration;
class SVGAnimatedTransformList;
class SVGAnimatedLength;
class SVGAnimatedRect;
class SVGAnimatedPreserveAspectRatio;
class SVGAnimatedString;


class SVGPatternElement : public SVGElement {
    explicit SVGPatternElement(Handle h) noexcept;

public:
    explicit SVGPatternElement(const emlite::Val &val) noexcept;
    static SVGPatternElement take_ownership(Handle h) noexcept;

    SVGPatternElement clone() const noexcept;
    SVGAnimatedEnumeration patternUnits() const;
    SVGAnimatedEnumeration patternContentUnits() const;
    SVGAnimatedTransformList patternTransform() const;
    SVGAnimatedLength x() const;
    SVGAnimatedLength y() const;
    SVGAnimatedLength width() const;
    SVGAnimatedLength height() const;
    SVGAnimatedRect viewBox() const;
    SVGAnimatedPreserveAspectRatio preserveAspectRatio() const;
    SVGAnimatedString href() const;
};

