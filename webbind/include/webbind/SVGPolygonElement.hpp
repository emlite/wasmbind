#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "SVGGeometryElement.hpp"
#include "enums.hpp"

class SVGPointList;


class SVGPolygonElement : public SVGGeometryElement {
    explicit SVGPolygonElement(Handle h) noexcept;

public:
    explicit SVGPolygonElement(const emlite::Val &val) noexcept;
    static SVGPolygonElement take_ownership(Handle h) noexcept;

    SVGPolygonElement clone() const noexcept;
    SVGPointList points() const;
    SVGPointList animatedPoints() const;
};

