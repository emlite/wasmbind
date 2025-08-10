#include "webbind/SVGFEMergeElement.hpp"
#include "webbind/SVGAnimatedLength.hpp"
#include "webbind/SVGAnimatedString.hpp"

namespace webbind {

SVGFEMergeElement SVGFEMergeElement::take_ownership(Handle h) noexcept {
        return SVGFEMergeElement(h);
    }
SVGFEMergeElement SVGFEMergeElement::clone() const noexcept { return *this; }
emlite::Val SVGFEMergeElement::instance() noexcept { return emlite::Val::global("SVGFEMergeElement"); }
SVGFEMergeElement::SVGFEMergeElement(Handle h) noexcept : SVGElement(emlite::Val::take_ownership(h)) {}
SVGFEMergeElement::SVGFEMergeElement(const emlite::Val &val) noexcept: SVGElement(val) {}

SVGAnimatedLength SVGFEMergeElement::x() const {
    return SVGElement::get("x").as<SVGAnimatedLength>();
}

SVGAnimatedLength SVGFEMergeElement::y() const {
    return SVGElement::get("y").as<SVGAnimatedLength>();
}

SVGAnimatedLength SVGFEMergeElement::width() const {
    return SVGElement::get("width").as<SVGAnimatedLength>();
}

SVGAnimatedLength SVGFEMergeElement::height() const {
    return SVGElement::get("height").as<SVGAnimatedLength>();
}

SVGAnimatedString SVGFEMergeElement::result() const {
    return SVGElement::get("result").as<SVGAnimatedString>();
}


} // namespace webbind