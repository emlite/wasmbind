#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "SVGElement.hpp"
#include "enums.hpp"

class SVGAnimatedNumber;
class SVGAnimatedInteger;
class SVGAnimatedEnumeration;
class SVGAnimatedLength;
class SVGAnimatedString;


class SVGFETurbulenceElement : public SVGElement {
    explicit SVGFETurbulenceElement(Handle h) noexcept;

public:
    explicit SVGFETurbulenceElement(const emlite::Val &val) noexcept;
    static SVGFETurbulenceElement take_ownership(Handle h) noexcept;

    SVGFETurbulenceElement clone() const noexcept;
    SVGAnimatedNumber baseFrequencyX() const;
    SVGAnimatedNumber baseFrequencyY() const;
    SVGAnimatedInteger numOctaves() const;
    SVGAnimatedNumber seed() const;
    SVGAnimatedEnumeration stitchTiles() const;
    SVGAnimatedEnumeration type() const;
    SVGAnimatedLength x() const;
    SVGAnimatedLength y() const;
    SVGAnimatedLength width() const;
    SVGAnimatedLength height() const;
    SVGAnimatedString result() const;
};

