#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "SVGGeometryElement.hpp"
#include "enums.hpp"

class SVGPointList;


class SVGPolylineElement : public SVGGeometryElement {
    explicit SVGPolylineElement(Handle h) noexcept;

public:
    explicit SVGPolylineElement(const emlite::Val &val) noexcept;
    static SVGPolylineElement take_ownership(Handle h) noexcept;

    SVGPolylineElement clone() const noexcept;
    SVGPointList points() const;
    SVGPointList animatedPoints() const;
};

