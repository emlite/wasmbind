#include <webbind/SVGRectElement.hpp>
#include <webbind/SVGAnimatedLength.hpp>

namespace webbind {

SVGRectElement SVGRectElement::take_ownership(Handle h) noexcept {
    return SVGRectElement(h);
}

SVGRectElement SVGRectElement::clone() const noexcept { return *this; }

emlite::Val SVGRectElement::instance() noexcept { return emlite::Val::global("SVGRectElement"); }

SVGRectElement::SVGRectElement(Handle h) noexcept : SVGGeometryElement(emlite::Val::take_ownership(h)) {}

SVGRectElement::SVGRectElement(const emlite::Val &val) noexcept: SVGGeometryElement(val) {}

SVGAnimatedLength SVGRectElement::x() const {
    return SVGGeometryElement::get("x").as<SVGAnimatedLength>();
}

SVGAnimatedLength SVGRectElement::y() const {
    return SVGGeometryElement::get("y").as<SVGAnimatedLength>();
}

SVGAnimatedLength SVGRectElement::width() const {
    return SVGGeometryElement::get("width").as<SVGAnimatedLength>();
}

SVGAnimatedLength SVGRectElement::height() const {
    return SVGGeometryElement::get("height").as<SVGAnimatedLength>();
}

SVGAnimatedLength SVGRectElement::rx() const {
    return SVGGeometryElement::get("rx").as<SVGAnimatedLength>();
}

SVGAnimatedLength SVGRectElement::ry() const {
    return SVGGeometryElement::get("ry").as<SVGAnimatedLength>();
}


} // namespace webbind