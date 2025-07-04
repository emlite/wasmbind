#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "SVGElement.hpp"
#include "enums.hpp"

class SVGAnimatedEnumeration;
class SVGAnimatedLength;
class SVGAnimatedString;


class SVGFilterElement : public SVGElement {
    explicit SVGFilterElement(Handle h) noexcept;

public:
    explicit SVGFilterElement(const emlite::Val &val) noexcept;
    static SVGFilterElement take_ownership(Handle h) noexcept;

    SVGFilterElement clone() const noexcept;
    SVGAnimatedEnumeration filterUnits() const;
    SVGAnimatedEnumeration primitiveUnits() const;
    SVGAnimatedLength x() const;
    SVGAnimatedLength y() const;
    SVGAnimatedLength width() const;
    SVGAnimatedLength height() const;
    SVGAnimatedString href() const;
};

