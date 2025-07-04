#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "SVGElement.hpp"
#include "enums.hpp"

class SVGAnimatedEnumeration;
class SVGAnimatedLength;


class SVGMaskElement : public SVGElement {
    explicit SVGMaskElement(Handle h) noexcept;

public:
    explicit SVGMaskElement(const emlite::Val &val) noexcept;
    static SVGMaskElement take_ownership(Handle h) noexcept;

    SVGMaskElement clone() const noexcept;
    SVGAnimatedEnumeration maskUnits() const;
    SVGAnimatedEnumeration maskContentUnits() const;
    SVGAnimatedLength x() const;
    SVGAnimatedLength y() const;
    SVGAnimatedLength width() const;
    SVGAnimatedLength height() const;
};

