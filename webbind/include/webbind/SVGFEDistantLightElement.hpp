#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "SVGElement.hpp"
#include "enums.hpp"

class SVGAnimatedNumber;


class SVGFEDistantLightElement : public SVGElement {
    explicit SVGFEDistantLightElement(Handle h) noexcept;

public:
    explicit SVGFEDistantLightElement(const emlite::Val &val) noexcept;
    static SVGFEDistantLightElement take_ownership(Handle h) noexcept;

    SVGFEDistantLightElement clone() const noexcept;
    SVGAnimatedNumber azimuth() const;
    SVGAnimatedNumber elevation() const;
};

