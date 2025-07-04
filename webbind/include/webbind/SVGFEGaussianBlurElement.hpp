#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "SVGElement.hpp"
#include "enums.hpp"

class SVGAnimatedString;
class SVGAnimatedNumber;
class SVGAnimatedEnumeration;
class SVGAnimatedLength;


class SVGFEGaussianBlurElement : public SVGElement {
    explicit SVGFEGaussianBlurElement(Handle h) noexcept;

public:
    explicit SVGFEGaussianBlurElement(const emlite::Val &val) noexcept;
    static SVGFEGaussianBlurElement take_ownership(Handle h) noexcept;

    SVGFEGaussianBlurElement clone() const noexcept;
    SVGAnimatedString in1() const;
    SVGAnimatedNumber stdDeviationX() const;
    SVGAnimatedNumber stdDeviationY() const;
    SVGAnimatedEnumeration edgeMode() const;
    jsbind::Undefined setStdDeviation(float stdDeviationX, float stdDeviationY);
    SVGAnimatedLength x() const;
    SVGAnimatedLength y() const;
    SVGAnimatedLength width() const;
    SVGAnimatedLength height() const;
    SVGAnimatedString result() const;
};

