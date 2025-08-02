#include <webbind/SVGCircleElement.hpp>
#include <webbind/SVGAnimatedLength.hpp>


SVGCircleElement SVGCircleElement::take_ownership(Handle h) noexcept {
        return SVGCircleElement(h);
    }
SVGCircleElement SVGCircleElement::clone() const noexcept { return *this; }
emlite::Val SVGCircleElement::instance() noexcept { return emlite::Val::global("SVGCircleElement"); }
SVGCircleElement::SVGCircleElement(Handle h) noexcept : SVGGeometryElement(emlite::Val::take_ownership(h)) {}
SVGCircleElement::SVGCircleElement(const emlite::Val &val) noexcept: SVGGeometryElement(val) {}


SVGAnimatedLength SVGCircleElement::cx() const {
    return SVGGeometryElement::get("cx").as<SVGAnimatedLength>();
}

SVGAnimatedLength SVGCircleElement::cy() const {
    return SVGGeometryElement::get("cy").as<SVGAnimatedLength>();
}

SVGAnimatedLength SVGCircleElement::r() const {
    return SVGGeometryElement::get("r").as<SVGAnimatedLength>();
}

