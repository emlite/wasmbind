#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "SVGElement.hpp"
#include "enums.hpp"

class SVGAnimatedString;
class SVGAnimatedNumber;
class SVGAnimatedLength;


class SVGFEDiffuseLightingElement : public SVGElement {
    explicit SVGFEDiffuseLightingElement(Handle h) noexcept;

public:
    explicit SVGFEDiffuseLightingElement(const emlite::Val &val) noexcept;
    static SVGFEDiffuseLightingElement take_ownership(Handle h) noexcept;

    SVGFEDiffuseLightingElement clone() const noexcept;
    SVGAnimatedString in1() const;
    SVGAnimatedNumber surfaceScale() const;
    SVGAnimatedNumber diffuseConstant() const;
    SVGAnimatedNumber kernelUnitLengthX() const;
    SVGAnimatedNumber kernelUnitLengthY() const;
    SVGAnimatedLength x() const;
    SVGAnimatedLength y() const;
    SVGAnimatedLength width() const;
    SVGAnimatedLength height() const;
    SVGAnimatedString result() const;
};

