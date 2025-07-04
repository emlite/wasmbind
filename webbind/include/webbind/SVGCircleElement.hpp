#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "SVGGeometryElement.hpp"
#include "enums.hpp"

class SVGAnimatedLength;


class SVGCircleElement : public SVGGeometryElement {
    explicit SVGCircleElement(Handle h) noexcept;

public:
    explicit SVGCircleElement(const emlite::Val &val) noexcept;
    static SVGCircleElement take_ownership(Handle h) noexcept;

    SVGCircleElement clone() const noexcept;
    SVGAnimatedLength cx() const;
    SVGAnimatedLength cy() const;
    SVGAnimatedLength r() const;
};

