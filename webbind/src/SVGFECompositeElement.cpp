#include <webbind/SVGFECompositeElement.hpp>
#include <webbind/SVGAnimatedString.hpp>
#include <webbind/SVGAnimatedEnumeration.hpp>
#include <webbind/SVGAnimatedNumber.hpp>
#include <webbind/SVGAnimatedLength.hpp>

namespace webbind {

SVGFECompositeElement SVGFECompositeElement::take_ownership(Handle h) noexcept {
    return SVGFECompositeElement(h);
}

SVGFECompositeElement SVGFECompositeElement::clone() const noexcept { return *this; }

emlite::Val SVGFECompositeElement::instance() noexcept { return emlite::Val::global("SVGFECompositeElement"); }

SVGFECompositeElement::SVGFECompositeElement(Handle h) noexcept : SVGElement(emlite::Val::take_ownership(h)) {}

SVGFECompositeElement::SVGFECompositeElement(const emlite::Val &val) noexcept: SVGElement(val) {}

SVGAnimatedString SVGFECompositeElement::in1() const {
    return SVGElement::get("in1").as<SVGAnimatedString>();
}

SVGAnimatedString SVGFECompositeElement::in2() const {
    return SVGElement::get("in2").as<SVGAnimatedString>();
}

SVGAnimatedEnumeration SVGFECompositeElement::operator_() const {
    return SVGElement::get("operator").as<SVGAnimatedEnumeration>();
}

SVGAnimatedNumber SVGFECompositeElement::k1() const {
    return SVGElement::get("k1").as<SVGAnimatedNumber>();
}

SVGAnimatedNumber SVGFECompositeElement::k2() const {
    return SVGElement::get("k2").as<SVGAnimatedNumber>();
}

SVGAnimatedNumber SVGFECompositeElement::k3() const {
    return SVGElement::get("k3").as<SVGAnimatedNumber>();
}

SVGAnimatedNumber SVGFECompositeElement::k4() const {
    return SVGElement::get("k4").as<SVGAnimatedNumber>();
}

SVGAnimatedLength SVGFECompositeElement::x() const {
    return SVGElement::get("x").as<SVGAnimatedLength>();
}

SVGAnimatedLength SVGFECompositeElement::y() const {
    return SVGElement::get("y").as<SVGAnimatedLength>();
}

SVGAnimatedLength SVGFECompositeElement::width() const {
    return SVGElement::get("width").as<SVGAnimatedLength>();
}

SVGAnimatedLength SVGFECompositeElement::height() const {
    return SVGElement::get("height").as<SVGAnimatedLength>();
}

SVGAnimatedString SVGFECompositeElement::result() const {
    return SVGElement::get("result").as<SVGAnimatedString>();
}


} // namespace webbind