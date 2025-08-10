#include "webbind/SVGForeignObjectElement.hpp"
#include "webbind/SVGAnimatedLength.hpp"

namespace webbind {

SVGForeignObjectElement SVGForeignObjectElement::take_ownership(Handle h) noexcept {
        return SVGForeignObjectElement(h);
    }
SVGForeignObjectElement SVGForeignObjectElement::clone() const noexcept { return *this; }
emlite::Val SVGForeignObjectElement::instance() noexcept { return emlite::Val::global("SVGForeignObjectElement"); }
SVGForeignObjectElement::SVGForeignObjectElement(Handle h) noexcept : SVGGraphicsElement(emlite::Val::take_ownership(h)) {}
SVGForeignObjectElement::SVGForeignObjectElement(const emlite::Val &val) noexcept: SVGGraphicsElement(val) {}

SVGAnimatedLength SVGForeignObjectElement::x() const {
    return SVGGraphicsElement::get("x").as<SVGAnimatedLength>();
}

SVGAnimatedLength SVGForeignObjectElement::y() const {
    return SVGGraphicsElement::get("y").as<SVGAnimatedLength>();
}

SVGAnimatedLength SVGForeignObjectElement::width() const {
    return SVGGraphicsElement::get("width").as<SVGAnimatedLength>();
}

SVGAnimatedLength SVGForeignObjectElement::height() const {
    return SVGGraphicsElement::get("height").as<SVGAnimatedLength>();
}


} // namespace webbind