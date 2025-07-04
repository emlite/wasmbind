#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "SVGGradientElement.hpp"
#include "enums.hpp"

class SVGAnimatedLength;


class SVGLinearGradientElement : public SVGGradientElement {
    explicit SVGLinearGradientElement(Handle h) noexcept;

public:
    explicit SVGLinearGradientElement(const emlite::Val &val) noexcept;
    static SVGLinearGradientElement take_ownership(Handle h) noexcept;

    SVGLinearGradientElement clone() const noexcept;
    SVGAnimatedLength x1() const;
    SVGAnimatedLength y1() const;
    SVGAnimatedLength x2() const;
    SVGAnimatedLength y2() const;
};

