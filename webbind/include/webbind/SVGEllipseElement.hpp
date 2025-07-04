#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "SVGGeometryElement.hpp"
#include "enums.hpp"

class SVGAnimatedLength;


class SVGEllipseElement : public SVGGeometryElement {
    explicit SVGEllipseElement(Handle h) noexcept;

public:
    explicit SVGEllipseElement(const emlite::Val &val) noexcept;
    static SVGEllipseElement take_ownership(Handle h) noexcept;

    SVGEllipseElement clone() const noexcept;
    SVGAnimatedLength cx() const;
    SVGAnimatedLength cy() const;
    SVGAnimatedLength rx() const;
    SVGAnimatedLength ry() const;
};

