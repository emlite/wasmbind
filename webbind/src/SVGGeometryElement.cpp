#include "webbind/SVGGeometryElement.hpp"
#include "webbind/SVGAnimatedNumber.hpp"
#include "webbind/DOMPointInit.hpp"
#include "webbind/DOMPoint.hpp"

namespace webbind {

SVGGeometryElement SVGGeometryElement::take_ownership(Handle h) noexcept {
        return SVGGeometryElement(h);
    }
SVGGeometryElement SVGGeometryElement::clone() const noexcept { return *this; }
emlite::Val SVGGeometryElement::instance() noexcept { return emlite::Val::global("SVGGeometryElement"); }
SVGGeometryElement::SVGGeometryElement(Handle h) noexcept : SVGGraphicsElement(emlite::Val::take_ownership(h)) {}
SVGGeometryElement::SVGGeometryElement(const emlite::Val &val) noexcept: SVGGraphicsElement(val) {}

SVGAnimatedNumber SVGGeometryElement::pathLength() const {
    return SVGGraphicsElement::get("pathLength").as<SVGAnimatedNumber>();
}

bool SVGGeometryElement::isPointInFill() {
    return SVGGraphicsElement::call("isPointInFill").as<bool>();
}

bool SVGGeometryElement::isPointInFill(const DOMPointInit& point) {
    return SVGGraphicsElement::call("isPointInFill", point).as<bool>();
}

bool SVGGeometryElement::isPointInStroke() {
    return SVGGraphicsElement::call("isPointInStroke").as<bool>();
}

bool SVGGeometryElement::isPointInStroke(const DOMPointInit& point) {
    return SVGGraphicsElement::call("isPointInStroke", point).as<bool>();
}

float SVGGeometryElement::getTotalLength() {
    return SVGGraphicsElement::call("getTotalLength").as<float>();
}

DOMPoint SVGGeometryElement::getPointAtLength(float distance) {
    return SVGGraphicsElement::call("getPointAtLength", distance).as<DOMPoint>();
}


} // namespace webbind