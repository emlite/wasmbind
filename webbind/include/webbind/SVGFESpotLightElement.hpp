#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "SVGElement.hpp"
#include "enums.hpp"

class SVGAnimatedNumber;


class SVGFESpotLightElement : public SVGElement {
    explicit SVGFESpotLightElement(Handle h) noexcept;

public:
    explicit SVGFESpotLightElement(const emlite::Val &val) noexcept;
    static SVGFESpotLightElement take_ownership(Handle h) noexcept;

    SVGFESpotLightElement clone() const noexcept;
    SVGAnimatedNumber x() const;
    SVGAnimatedNumber y() const;
    SVGAnimatedNumber z() const;
    SVGAnimatedNumber pointsAtX() const;
    SVGAnimatedNumber pointsAtY() const;
    SVGAnimatedNumber pointsAtZ() const;
    SVGAnimatedNumber specularExponent() const;
    SVGAnimatedNumber limitingConeAngle() const;
};

