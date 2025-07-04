#include <webbind/SVGPolygonElement.hpp>
#include <webbind/SVGPointList.hpp>


SVGPolygonElement SVGPolygonElement::take_ownership(Handle h) noexcept {
        return SVGPolygonElement(h);
    }
SVGPolygonElement SVGPolygonElement::clone() const noexcept { return *this; }
SVGPolygonElement::SVGPolygonElement(Handle h) noexcept : SVGGeometryElement(emlite::Val::take_ownership(h)) {}
SVGPolygonElement::SVGPolygonElement(const emlite::Val &val) noexcept: SVGGeometryElement(val) {}


SVGPointList SVGPolygonElement::points() const {
    return SVGGeometryElement::get("points").as<SVGPointList>();
}

SVGPointList SVGPolygonElement::animatedPoints() const {
    return SVGGeometryElement::get("animatedPoints").as<SVGPointList>();
}

