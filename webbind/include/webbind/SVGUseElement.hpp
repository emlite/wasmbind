#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "SVGGraphicsElement.hpp"
#include "enums.hpp"

class SVGAnimatedLength;
class SVGElement;
class SVGAnimatedString;


class SVGUseElement : public SVGGraphicsElement {
    explicit SVGUseElement(Handle h) noexcept;

public:
    explicit SVGUseElement(const emlite::Val &val) noexcept;
    static SVGUseElement take_ownership(Handle h) noexcept;

    SVGUseElement clone() const noexcept;
    SVGAnimatedLength x() const;
    SVGAnimatedLength y() const;
    SVGAnimatedLength width() const;
    SVGAnimatedLength height() const;
    SVGElement instanceRoot() const;
    SVGElement animatedInstanceRoot() const;
    SVGAnimatedString href() const;
};

