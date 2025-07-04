#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "SVGGeometryElement.hpp"
#include "enums.hpp"

class SVGAnimatedLength;


class SVGLineElement : public SVGGeometryElement {
    explicit SVGLineElement(Handle h) noexcept;

public:
    explicit SVGLineElement(const emlite::Val &val) noexcept;
    static SVGLineElement take_ownership(Handle h) noexcept;

    SVGLineElement clone() const noexcept;
    SVGAnimatedLength x1() const;
    SVGAnimatedLength y1() const;
    SVGAnimatedLength x2() const;
    SVGAnimatedLength y2() const;
};

