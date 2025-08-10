#include "webbind/SVGGradientElement.hpp"
#include "webbind/SVGAnimatedEnumeration.hpp"
#include "webbind/SVGAnimatedTransformList.hpp"
#include "webbind/SVGAnimatedString.hpp"

namespace webbind {

SVGGradientElement SVGGradientElement::take_ownership(Handle h) noexcept {
        return SVGGradientElement(h);
    }
SVGGradientElement SVGGradientElement::clone() const noexcept { return *this; }
emlite::Val SVGGradientElement::instance() noexcept { return emlite::Val::global("SVGGradientElement"); }
SVGGradientElement::SVGGradientElement(Handle h) noexcept : SVGElement(emlite::Val::take_ownership(h)) {}
SVGGradientElement::SVGGradientElement(const emlite::Val &val) noexcept: SVGElement(val) {}

SVGAnimatedEnumeration SVGGradientElement::gradientUnits() const {
    return SVGElement::get("gradientUnits").as<SVGAnimatedEnumeration>();
}

SVGAnimatedTransformList SVGGradientElement::gradientTransform() const {
    return SVGElement::get("gradientTransform").as<SVGAnimatedTransformList>();
}

SVGAnimatedEnumeration SVGGradientElement::spreadMethod() const {
    return SVGElement::get("spreadMethod").as<SVGAnimatedEnumeration>();
}

SVGAnimatedString SVGGradientElement::href() const {
    return SVGElement::get("href").as<SVGAnimatedString>();
}


} // namespace webbind