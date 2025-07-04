#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "SVGElement.hpp"
#include "enums.hpp"

class SVGAnimatedString;
class SVGAnimatedEnumeration;
class SVGAnimatedNumber;
class SVGAnimatedLength;


class SVGFEMorphologyElement : public SVGElement {
    explicit SVGFEMorphologyElement(Handle h) noexcept;

public:
    explicit SVGFEMorphologyElement(const emlite::Val &val) noexcept;
    static SVGFEMorphologyElement take_ownership(Handle h) noexcept;

    SVGFEMorphologyElement clone() const noexcept;
    SVGAnimatedString in1() const;
    SVGAnimatedEnumeration operator_() const;
    SVGAnimatedNumber radiusX() const;
    SVGAnimatedNumber radiusY() const;
    SVGAnimatedLength x() const;
    SVGAnimatedLength y() const;
    SVGAnimatedLength width() const;
    SVGAnimatedLength height() const;
    SVGAnimatedString result() const;
};

