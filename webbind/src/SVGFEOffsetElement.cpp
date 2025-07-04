#include <webbind/SVGFEOffsetElement.hpp>
#include <webbind/SVGAnimatedString.hpp>
#include <webbind/SVGAnimatedNumber.hpp>
#include <webbind/SVGAnimatedLength.hpp>


SVGFEOffsetElement SVGFEOffsetElement::take_ownership(Handle h) noexcept {
        return SVGFEOffsetElement(h);
    }
SVGFEOffsetElement SVGFEOffsetElement::clone() const noexcept { return *this; }
SVGFEOffsetElement::SVGFEOffsetElement(Handle h) noexcept : SVGElement(emlite::Val::take_ownership(h)) {}
SVGFEOffsetElement::SVGFEOffsetElement(const emlite::Val &val) noexcept: SVGElement(val) {}


SVGAnimatedString SVGFEOffsetElement::in1() const {
    return SVGElement::get("in1").as<SVGAnimatedString>();
}

SVGAnimatedNumber SVGFEOffsetElement::dx() const {
    return SVGElement::get("dx").as<SVGAnimatedNumber>();
}

SVGAnimatedNumber SVGFEOffsetElement::dy() const {
    return SVGElement::get("dy").as<SVGAnimatedNumber>();
}

SVGAnimatedLength SVGFEOffsetElement::x() const {
    return SVGElement::get("x").as<SVGAnimatedLength>();
}

SVGAnimatedLength SVGFEOffsetElement::y() const {
    return SVGElement::get("y").as<SVGAnimatedLength>();
}

SVGAnimatedLength SVGFEOffsetElement::width() const {
    return SVGElement::get("width").as<SVGAnimatedLength>();
}

SVGAnimatedLength SVGFEOffsetElement::height() const {
    return SVGElement::get("height").as<SVGAnimatedLength>();
}

SVGAnimatedString SVGFEOffsetElement::result() const {
    return SVGElement::get("result").as<SVGAnimatedString>();
}

