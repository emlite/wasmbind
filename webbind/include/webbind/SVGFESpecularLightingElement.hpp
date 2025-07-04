#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "SVGElement.hpp"
#include "enums.hpp"

class SVGAnimatedString;
class SVGAnimatedNumber;
class SVGAnimatedLength;


class SVGFESpecularLightingElement : public SVGElement {
    explicit SVGFESpecularLightingElement(Handle h) noexcept;

public:
    explicit SVGFESpecularLightingElement(const emlite::Val &val) noexcept;
    static SVGFESpecularLightingElement take_ownership(Handle h) noexcept;

    SVGFESpecularLightingElement clone() const noexcept;
    SVGAnimatedString in1() const;
    SVGAnimatedNumber surfaceScale() const;
    SVGAnimatedNumber specularConstant() const;
    SVGAnimatedNumber specularExponent() const;
    SVGAnimatedNumber kernelUnitLengthX() const;
    SVGAnimatedNumber kernelUnitLengthY() const;
    SVGAnimatedLength x() const;
    SVGAnimatedLength y() const;
    SVGAnimatedLength width() const;
    SVGAnimatedLength height() const;
    SVGAnimatedString result() const;
};

