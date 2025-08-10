#include "webbind/SVGFEDropShadowElement.hpp"
#include "webbind/SVGAnimatedString.hpp"
#include "webbind/SVGAnimatedNumber.hpp"
#include "webbind/SVGAnimatedLength.hpp"

namespace webbind {

SVGFEDropShadowElement SVGFEDropShadowElement::take_ownership(Handle h) noexcept {
        return SVGFEDropShadowElement(h);
    }
SVGFEDropShadowElement SVGFEDropShadowElement::clone() const noexcept { return *this; }
emlite::Val SVGFEDropShadowElement::instance() noexcept { return emlite::Val::global("SVGFEDropShadowElement"); }
SVGFEDropShadowElement::SVGFEDropShadowElement(Handle h) noexcept : SVGElement(emlite::Val::take_ownership(h)) {}
SVGFEDropShadowElement::SVGFEDropShadowElement(const emlite::Val &val) noexcept: SVGElement(val) {}

SVGAnimatedString SVGFEDropShadowElement::in1() const {
    return SVGElement::get("in1").as<SVGAnimatedString>();
}

SVGAnimatedNumber SVGFEDropShadowElement::dx() const {
    return SVGElement::get("dx").as<SVGAnimatedNumber>();
}

SVGAnimatedNumber SVGFEDropShadowElement::dy() const {
    return SVGElement::get("dy").as<SVGAnimatedNumber>();
}

SVGAnimatedNumber SVGFEDropShadowElement::stdDeviationX() const {
    return SVGElement::get("stdDeviationX").as<SVGAnimatedNumber>();
}

SVGAnimatedNumber SVGFEDropShadowElement::stdDeviationY() const {
    return SVGElement::get("stdDeviationY").as<SVGAnimatedNumber>();
}

jsbind::Undefined SVGFEDropShadowElement::setStdDeviation(float stdDeviationX, float stdDeviationY) {
    return SVGElement::call("setStdDeviation", stdDeviationX, stdDeviationY).as<jsbind::Undefined>();
}

SVGAnimatedLength SVGFEDropShadowElement::x() const {
    return SVGElement::get("x").as<SVGAnimatedLength>();
}

SVGAnimatedLength SVGFEDropShadowElement::y() const {
    return SVGElement::get("y").as<SVGAnimatedLength>();
}

SVGAnimatedLength SVGFEDropShadowElement::width() const {
    return SVGElement::get("width").as<SVGAnimatedLength>();
}

SVGAnimatedLength SVGFEDropShadowElement::height() const {
    return SVGElement::get("height").as<SVGAnimatedLength>();
}

SVGAnimatedString SVGFEDropShadowElement::result() const {
    return SVGElement::get("result").as<SVGAnimatedString>();
}


} // namespace webbind