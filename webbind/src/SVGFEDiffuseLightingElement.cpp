#include "webbind/SVGFEDiffuseLightingElement.hpp"
#include "webbind/SVGAnimatedString.hpp"
#include "webbind/SVGAnimatedNumber.hpp"
#include "webbind/SVGAnimatedLength.hpp"

namespace webbind {

SVGFEDiffuseLightingElement SVGFEDiffuseLightingElement::take_ownership(Handle h) noexcept {
        return SVGFEDiffuseLightingElement(h);
    }
SVGFEDiffuseLightingElement SVGFEDiffuseLightingElement::clone() const noexcept { return *this; }
emlite::Val SVGFEDiffuseLightingElement::instance() noexcept { return emlite::Val::global("SVGFEDiffuseLightingElement"); }
SVGFEDiffuseLightingElement::SVGFEDiffuseLightingElement(Handle h) noexcept : SVGElement(emlite::Val::take_ownership(h)) {}
SVGFEDiffuseLightingElement::SVGFEDiffuseLightingElement(const emlite::Val &val) noexcept: SVGElement(val) {}

SVGAnimatedString SVGFEDiffuseLightingElement::in1() const {
    return SVGElement::get("in1").as<SVGAnimatedString>();
}

SVGAnimatedNumber SVGFEDiffuseLightingElement::surfaceScale() const {
    return SVGElement::get("surfaceScale").as<SVGAnimatedNumber>();
}

SVGAnimatedNumber SVGFEDiffuseLightingElement::diffuseConstant() const {
    return SVGElement::get("diffuseConstant").as<SVGAnimatedNumber>();
}

SVGAnimatedNumber SVGFEDiffuseLightingElement::kernelUnitLengthX() const {
    return SVGElement::get("kernelUnitLengthX").as<SVGAnimatedNumber>();
}

SVGAnimatedNumber SVGFEDiffuseLightingElement::kernelUnitLengthY() const {
    return SVGElement::get("kernelUnitLengthY").as<SVGAnimatedNumber>();
}

SVGAnimatedLength SVGFEDiffuseLightingElement::x() const {
    return SVGElement::get("x").as<SVGAnimatedLength>();
}

SVGAnimatedLength SVGFEDiffuseLightingElement::y() const {
    return SVGElement::get("y").as<SVGAnimatedLength>();
}

SVGAnimatedLength SVGFEDiffuseLightingElement::width() const {
    return SVGElement::get("width").as<SVGAnimatedLength>();
}

SVGAnimatedLength SVGFEDiffuseLightingElement::height() const {
    return SVGElement::get("height").as<SVGAnimatedLength>();
}

SVGAnimatedString SVGFEDiffuseLightingElement::result() const {
    return SVGElement::get("result").as<SVGAnimatedString>();
}


} // namespace webbind