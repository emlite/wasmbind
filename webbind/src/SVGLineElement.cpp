#include "webbind/SVGLineElement.hpp"
#include "webbind/SVGAnimatedLength.hpp"

namespace webbind {

SVGLineElement SVGLineElement::take_ownership(Handle h) noexcept {
        return SVGLineElement(h);
    }
SVGLineElement SVGLineElement::clone() const noexcept { return *this; }
emlite::Val SVGLineElement::instance() noexcept { return emlite::Val::global("SVGLineElement"); }
SVGLineElement::SVGLineElement(Handle h) noexcept : SVGGeometryElement(emlite::Val::take_ownership(h)) {}
SVGLineElement::SVGLineElement(const emlite::Val &val) noexcept: SVGGeometryElement(val) {}

SVGAnimatedLength SVGLineElement::x1() const {
    return SVGGeometryElement::get("x1").as<SVGAnimatedLength>();
}

SVGAnimatedLength SVGLineElement::y1() const {
    return SVGGeometryElement::get("y1").as<SVGAnimatedLength>();
}

SVGAnimatedLength SVGLineElement::x2() const {
    return SVGGeometryElement::get("x2").as<SVGAnimatedLength>();
}

SVGAnimatedLength SVGLineElement::y2() const {
    return SVGGeometryElement::get("y2").as<SVGAnimatedLength>();
}


} // namespace webbind