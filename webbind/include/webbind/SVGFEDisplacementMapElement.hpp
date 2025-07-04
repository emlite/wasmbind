#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "SVGElement.hpp"
#include "enums.hpp"

class SVGAnimatedString;
class SVGAnimatedNumber;
class SVGAnimatedEnumeration;
class SVGAnimatedLength;


class SVGFEDisplacementMapElement : public SVGElement {
    explicit SVGFEDisplacementMapElement(Handle h) noexcept;

public:
    explicit SVGFEDisplacementMapElement(const emlite::Val &val) noexcept;
    static SVGFEDisplacementMapElement take_ownership(Handle h) noexcept;

    SVGFEDisplacementMapElement clone() const noexcept;
    SVGAnimatedString in1() const;
    SVGAnimatedString in2() const;
    SVGAnimatedNumber scale() const;
    SVGAnimatedEnumeration xChannelSelector() const;
    SVGAnimatedEnumeration yChannelSelector() const;
    SVGAnimatedLength x() const;
    SVGAnimatedLength y() const;
    SVGAnimatedLength width() const;
    SVGAnimatedLength height() const;
    SVGAnimatedString result() const;
};

