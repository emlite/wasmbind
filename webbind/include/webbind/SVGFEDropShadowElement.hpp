#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "SVGElement.hpp"
#include "enums.hpp"

class SVGAnimatedString;
class SVGAnimatedNumber;
class SVGAnimatedLength;


class SVGFEDropShadowElement : public SVGElement {
    explicit SVGFEDropShadowElement(Handle h) noexcept;

public:
    explicit SVGFEDropShadowElement(const emlite::Val &val) noexcept;
    static SVGFEDropShadowElement take_ownership(Handle h) noexcept;

    SVGFEDropShadowElement clone() const noexcept;
    SVGAnimatedString in1() const;
    SVGAnimatedNumber dx() const;
    SVGAnimatedNumber dy() const;
    SVGAnimatedNumber stdDeviationX() const;
    SVGAnimatedNumber stdDeviationY() const;
    jsbind::Undefined setStdDeviation(float stdDeviationX, float stdDeviationY);
    SVGAnimatedLength x() const;
    SVGAnimatedLength y() const;
    SVGAnimatedLength width() const;
    SVGAnimatedLength height() const;
    SVGAnimatedString result() const;
};

