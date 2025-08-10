#include "webbind/SVGFESpecularLightingElement.hpp"
#include "webbind/SVGAnimatedString.hpp"
#include "webbind/SVGAnimatedNumber.hpp"
#include "webbind/SVGAnimatedLength.hpp"

namespace webbind {

SVGFESpecularLightingElement SVGFESpecularLightingElement::take_ownership(Handle h) noexcept {
        return SVGFESpecularLightingElement(h);
    }
SVGFESpecularLightingElement SVGFESpecularLightingElement::clone() const noexcept { return *this; }
emlite::Val SVGFESpecularLightingElement::instance() noexcept { return emlite::Val::global("SVGFESpecularLightingElement"); }
SVGFESpecularLightingElement::SVGFESpecularLightingElement(Handle h) noexcept : SVGElement(emlite::Val::take_ownership(h)) {}
SVGFESpecularLightingElement::SVGFESpecularLightingElement(const emlite::Val &val) noexcept: SVGElement(val) {}

SVGAnimatedString SVGFESpecularLightingElement::in1() const {
    return SVGElement::get("in1").as<SVGAnimatedString>();
}

SVGAnimatedNumber SVGFESpecularLightingElement::surfaceScale() const {
    return SVGElement::get("surfaceScale").as<SVGAnimatedNumber>();
}

SVGAnimatedNumber SVGFESpecularLightingElement::specularConstant() const {
    return SVGElement::get("specularConstant").as<SVGAnimatedNumber>();
}

SVGAnimatedNumber SVGFESpecularLightingElement::specularExponent() const {
    return SVGElement::get("specularExponent").as<SVGAnimatedNumber>();
}

SVGAnimatedNumber SVGFESpecularLightingElement::kernelUnitLengthX() const {
    return SVGElement::get("kernelUnitLengthX").as<SVGAnimatedNumber>();
}

SVGAnimatedNumber SVGFESpecularLightingElement::kernelUnitLengthY() const {
    return SVGElement::get("kernelUnitLengthY").as<SVGAnimatedNumber>();
}

SVGAnimatedLength SVGFESpecularLightingElement::x() const {
    return SVGElement::get("x").as<SVGAnimatedLength>();
}

SVGAnimatedLength SVGFESpecularLightingElement::y() const {
    return SVGElement::get("y").as<SVGAnimatedLength>();
}

SVGAnimatedLength SVGFESpecularLightingElement::width() const {
    return SVGElement::get("width").as<SVGAnimatedLength>();
}

SVGAnimatedLength SVGFESpecularLightingElement::height() const {
    return SVGElement::get("height").as<SVGAnimatedLength>();
}

SVGAnimatedString SVGFESpecularLightingElement::result() const {
    return SVGElement::get("result").as<SVGAnimatedString>();
}


} // namespace webbind