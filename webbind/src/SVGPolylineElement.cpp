#include <webbind/SVGPolylineElement.hpp>
#include <webbind/SVGPointList.hpp>


SVGPolylineElement SVGPolylineElement::take_ownership(Handle h) noexcept {
        return SVGPolylineElement(h);
    }
SVGPolylineElement SVGPolylineElement::clone() const noexcept { return *this; }
SVGPolylineElement::SVGPolylineElement(Handle h) noexcept : SVGGeometryElement(emlite::Val::take_ownership(h)) {}
SVGPolylineElement::SVGPolylineElement(const emlite::Val &val) noexcept: SVGGeometryElement(val) {}


SVGPointList SVGPolylineElement::points() const {
    return SVGGeometryElement::get("points").as<SVGPointList>();
}

SVGPointList SVGPolylineElement::animatedPoints() const {
    return SVGGeometryElement::get("animatedPoints").as<SVGPointList>();
}

