#include <webbind/SVGFilterElement.hpp>
#include <webbind/SVGAnimatedEnumeration.hpp>
#include <webbind/SVGAnimatedLength.hpp>
#include <webbind/SVGAnimatedString.hpp>


SVGFilterElement SVGFilterElement::take_ownership(Handle h) noexcept {
        return SVGFilterElement(h);
    }
SVGFilterElement SVGFilterElement::clone() const noexcept { return *this; }
emlite::Val SVGFilterElement::instance() noexcept { return emlite::Val::global("SVGFilterElement"); }
SVGFilterElement::SVGFilterElement(Handle h) noexcept : SVGElement(emlite::Val::take_ownership(h)) {}
SVGFilterElement::SVGFilterElement(const emlite::Val &val) noexcept: SVGElement(val) {}


SVGAnimatedEnumeration SVGFilterElement::filterUnits() const {
    return SVGElement::get("filterUnits").as<SVGAnimatedEnumeration>();
}

SVGAnimatedEnumeration SVGFilterElement::primitiveUnits() const {
    return SVGElement::get("primitiveUnits").as<SVGAnimatedEnumeration>();
}

SVGAnimatedLength SVGFilterElement::x() const {
    return SVGElement::get("x").as<SVGAnimatedLength>();
}

SVGAnimatedLength SVGFilterElement::y() const {
    return SVGElement::get("y").as<SVGAnimatedLength>();
}

SVGAnimatedLength SVGFilterElement::width() const {
    return SVGElement::get("width").as<SVGAnimatedLength>();
}

SVGAnimatedLength SVGFilterElement::height() const {
    return SVGElement::get("height").as<SVGAnimatedLength>();
}

SVGAnimatedString SVGFilterElement::href() const {
    return SVGElement::get("href").as<SVGAnimatedString>();
}

