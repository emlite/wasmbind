#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "SVGGeometryElement.hpp"
#include "enums.hpp"

class SVGAnimatedLength;


class SVGRectElement : public SVGGeometryElement {
    explicit SVGRectElement(Handle h) noexcept;

public:
    explicit SVGRectElement(const emlite::Val &val) noexcept;
    static SVGRectElement take_ownership(Handle h) noexcept;

    SVGRectElement clone() const noexcept;
    SVGAnimatedLength x() const;
    SVGAnimatedLength y() const;
    SVGAnimatedLength width() const;
    SVGAnimatedLength height() const;
    SVGAnimatedLength rx() const;
    SVGAnimatedLength ry() const;
};

