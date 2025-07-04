#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "SVGElement.hpp"
#include "enums.hpp"

class SVGAnimatedNumber;


class SVGFEPointLightElement : public SVGElement {
    explicit SVGFEPointLightElement(Handle h) noexcept;

public:
    explicit SVGFEPointLightElement(const emlite::Val &val) noexcept;
    static SVGFEPointLightElement take_ownership(Handle h) noexcept;

    SVGFEPointLightElement clone() const noexcept;
    SVGAnimatedNumber x() const;
    SVGAnimatedNumber y() const;
    SVGAnimatedNumber z() const;
};

