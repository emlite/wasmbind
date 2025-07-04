#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "SVGElement.hpp"
#include "enums.hpp"

class SVGAnimatedString;
class SVGAnimatedNumber;
class SVGAnimatedLength;


class SVGFEOffsetElement : public SVGElement {
    explicit SVGFEOffsetElement(Handle h) noexcept;

public:
    explicit SVGFEOffsetElement(const emlite::Val &val) noexcept;
    static SVGFEOffsetElement take_ownership(Handle h) noexcept;

    SVGFEOffsetElement clone() const noexcept;
    SVGAnimatedString in1() const;
    SVGAnimatedNumber dx() const;
    SVGAnimatedNumber dy() const;
    SVGAnimatedLength x() const;
    SVGAnimatedLength y() const;
    SVGAnimatedLength width() const;
    SVGAnimatedLength height() const;
    SVGAnimatedString result() const;
};

