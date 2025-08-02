#include <webbind/SVGFEDisplacementMapElement.hpp>
#include <webbind/SVGAnimatedString.hpp>
#include <webbind/SVGAnimatedNumber.hpp>
#include <webbind/SVGAnimatedEnumeration.hpp>
#include <webbind/SVGAnimatedLength.hpp>


SVGFEDisplacementMapElement SVGFEDisplacementMapElement::take_ownership(Handle h) noexcept {
        return SVGFEDisplacementMapElement(h);
    }
SVGFEDisplacementMapElement SVGFEDisplacementMapElement::clone() const noexcept { return *this; }
emlite::Val SVGFEDisplacementMapElement::instance() noexcept { return emlite::Val::global("SVGFEDisplacementMapElement"); }
SVGFEDisplacementMapElement::SVGFEDisplacementMapElement(Handle h) noexcept : SVGElement(emlite::Val::take_ownership(h)) {}
SVGFEDisplacementMapElement::SVGFEDisplacementMapElement(const emlite::Val &val) noexcept: SVGElement(val) {}


SVGAnimatedString SVGFEDisplacementMapElement::in1() const {
    return SVGElement::get("in1").as<SVGAnimatedString>();
}

SVGAnimatedString SVGFEDisplacementMapElement::in2() const {
    return SVGElement::get("in2").as<SVGAnimatedString>();
}

SVGAnimatedNumber SVGFEDisplacementMapElement::scale() const {
    return SVGElement::get("scale").as<SVGAnimatedNumber>();
}

SVGAnimatedEnumeration SVGFEDisplacementMapElement::xChannelSelector() const {
    return SVGElement::get("xChannelSelector").as<SVGAnimatedEnumeration>();
}

SVGAnimatedEnumeration SVGFEDisplacementMapElement::yChannelSelector() const {
    return SVGElement::get("yChannelSelector").as<SVGAnimatedEnumeration>();
}

SVGAnimatedLength SVGFEDisplacementMapElement::x() const {
    return SVGElement::get("x").as<SVGAnimatedLength>();
}

SVGAnimatedLength SVGFEDisplacementMapElement::y() const {
    return SVGElement::get("y").as<SVGAnimatedLength>();
}

SVGAnimatedLength SVGFEDisplacementMapElement::width() const {
    return SVGElement::get("width").as<SVGAnimatedLength>();
}

SVGAnimatedLength SVGFEDisplacementMapElement::height() const {
    return SVGElement::get("height").as<SVGAnimatedLength>();
}

SVGAnimatedString SVGFEDisplacementMapElement::result() const {
    return SVGElement::get("result").as<SVGAnimatedString>();
}

