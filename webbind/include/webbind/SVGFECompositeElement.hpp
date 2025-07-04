#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "SVGElement.hpp"
#include "enums.hpp"

class SVGAnimatedString;
class SVGAnimatedEnumeration;
class SVGAnimatedNumber;
class SVGAnimatedLength;


class SVGFECompositeElement : public SVGElement {
    explicit SVGFECompositeElement(Handle h) noexcept;

public:
    explicit SVGFECompositeElement(const emlite::Val &val) noexcept;
    static SVGFECompositeElement take_ownership(Handle h) noexcept;

    SVGFECompositeElement clone() const noexcept;
    SVGAnimatedString in1() const;
    SVGAnimatedString in2() const;
    SVGAnimatedEnumeration operator_() const;
    SVGAnimatedNumber k1() const;
    SVGAnimatedNumber k2() const;
    SVGAnimatedNumber k3() const;
    SVGAnimatedNumber k4() const;
    SVGAnimatedLength x() const;
    SVGAnimatedLength y() const;
    SVGAnimatedLength width() const;
    SVGAnimatedLength height() const;
    SVGAnimatedString result() const;
};

