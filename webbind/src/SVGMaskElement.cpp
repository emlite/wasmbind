#include "webbind/SVGMaskElement.hpp"
#include "webbind/SVGAnimatedEnumeration.hpp"
#include "webbind/SVGAnimatedLength.hpp"

namespace webbind {

SVGMaskElement SVGMaskElement::take_ownership(Handle h) noexcept {
        return SVGMaskElement(h);
    }
SVGMaskElement SVGMaskElement::clone() const noexcept { return *this; }
emlite::Val SVGMaskElement::instance() noexcept { return emlite::Val::global("SVGMaskElement"); }
SVGMaskElement::SVGMaskElement(Handle h) noexcept : SVGElement(emlite::Val::take_ownership(h)) {}
SVGMaskElement::SVGMaskElement(const emlite::Val &val) noexcept: SVGElement(val) {}

SVGAnimatedEnumeration SVGMaskElement::maskUnits() const {
    return SVGElement::get("maskUnits").as<SVGAnimatedEnumeration>();
}

SVGAnimatedEnumeration SVGMaskElement::maskContentUnits() const {
    return SVGElement::get("maskContentUnits").as<SVGAnimatedEnumeration>();
}

SVGAnimatedLength SVGMaskElement::x() const {
    return SVGElement::get("x").as<SVGAnimatedLength>();
}

SVGAnimatedLength SVGMaskElement::y() const {
    return SVGElement::get("y").as<SVGAnimatedLength>();
}

SVGAnimatedLength SVGMaskElement::width() const {
    return SVGElement::get("width").as<SVGAnimatedLength>();
}

SVGAnimatedLength SVGMaskElement::height() const {
    return SVGElement::get("height").as<SVGAnimatedLength>();
}


} // namespace webbind