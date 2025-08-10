#include <webbind/SVGFEBlendElement.hpp>
#include <webbind/SVGAnimatedString.hpp>
#include <webbind/SVGAnimatedEnumeration.hpp>
#include <webbind/SVGAnimatedLength.hpp>

namespace webbind {

SVGFEBlendElement SVGFEBlendElement::take_ownership(Handle h) noexcept {
    return SVGFEBlendElement(h);
}

SVGFEBlendElement SVGFEBlendElement::clone() const noexcept { return *this; }

emlite::Val SVGFEBlendElement::instance() noexcept { return emlite::Val::global("SVGFEBlendElement"); }

SVGFEBlendElement::SVGFEBlendElement(Handle h) noexcept : SVGElement(emlite::Val::take_ownership(h)) {}

SVGFEBlendElement::SVGFEBlendElement(const emlite::Val &val) noexcept: SVGElement(val) {}

SVGAnimatedString SVGFEBlendElement::in1() const {
    return SVGElement::get("in1").as<SVGAnimatedString>();
}

SVGAnimatedString SVGFEBlendElement::in2() const {
    return SVGElement::get("in2").as<SVGAnimatedString>();
}

SVGAnimatedEnumeration SVGFEBlendElement::mode() const {
    return SVGElement::get("mode").as<SVGAnimatedEnumeration>();
}

SVGAnimatedLength SVGFEBlendElement::x() const {
    return SVGElement::get("x").as<SVGAnimatedLength>();
}

SVGAnimatedLength SVGFEBlendElement::y() const {
    return SVGElement::get("y").as<SVGAnimatedLength>();
}

SVGAnimatedLength SVGFEBlendElement::width() const {
    return SVGElement::get("width").as<SVGAnimatedLength>();
}

SVGAnimatedLength SVGFEBlendElement::height() const {
    return SVGElement::get("height").as<SVGAnimatedLength>();
}

SVGAnimatedString SVGFEBlendElement::result() const {
    return SVGElement::get("result").as<SVGAnimatedString>();
}


} // namespace webbind