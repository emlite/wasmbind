#include <webbind/SVGEllipseElement.hpp>
#include <webbind/SVGAnimatedLength.hpp>

namespace webbind {

SVGEllipseElement SVGEllipseElement::take_ownership(Handle h) noexcept {
    return SVGEllipseElement(h);
}

SVGEllipseElement SVGEllipseElement::clone() const noexcept { return *this; }

emlite::Val SVGEllipseElement::instance() noexcept { return emlite::Val::global("SVGEllipseElement"); }

SVGEllipseElement::SVGEllipseElement(Handle h) noexcept : SVGGeometryElement(emlite::Val::take_ownership(h)) {}

SVGEllipseElement::SVGEllipseElement(const emlite::Val &val) noexcept: SVGGeometryElement(val) {}

SVGAnimatedLength SVGEllipseElement::cx() const {
    return SVGGeometryElement::get("cx").as<SVGAnimatedLength>();
}

SVGAnimatedLength SVGEllipseElement::cy() const {
    return SVGGeometryElement::get("cy").as<SVGAnimatedLength>();
}

SVGAnimatedLength SVGEllipseElement::rx() const {
    return SVGGeometryElement::get("rx").as<SVGAnimatedLength>();
}

SVGAnimatedLength SVGEllipseElement::ry() const {
    return SVGGeometryElement::get("ry").as<SVGAnimatedLength>();
}


} // namespace webbind