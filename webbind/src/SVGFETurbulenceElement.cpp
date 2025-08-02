#include <webbind/SVGFETurbulenceElement.hpp>
#include <webbind/SVGAnimatedNumber.hpp>
#include <webbind/SVGAnimatedInteger.hpp>
#include <webbind/SVGAnimatedEnumeration.hpp>
#include <webbind/SVGAnimatedLength.hpp>
#include <webbind/SVGAnimatedString.hpp>


SVGFETurbulenceElement SVGFETurbulenceElement::take_ownership(Handle h) noexcept {
        return SVGFETurbulenceElement(h);
    }
SVGFETurbulenceElement SVGFETurbulenceElement::clone() const noexcept { return *this; }
emlite::Val SVGFETurbulenceElement::instance() noexcept { return emlite::Val::global("SVGFETurbulenceElement"); }
SVGFETurbulenceElement::SVGFETurbulenceElement(Handle h) noexcept : SVGElement(emlite::Val::take_ownership(h)) {}
SVGFETurbulenceElement::SVGFETurbulenceElement(const emlite::Val &val) noexcept: SVGElement(val) {}


SVGAnimatedNumber SVGFETurbulenceElement::baseFrequencyX() const {
    return SVGElement::get("baseFrequencyX").as<SVGAnimatedNumber>();
}

SVGAnimatedNumber SVGFETurbulenceElement::baseFrequencyY() const {
    return SVGElement::get("baseFrequencyY").as<SVGAnimatedNumber>();
}

SVGAnimatedInteger SVGFETurbulenceElement::numOctaves() const {
    return SVGElement::get("numOctaves").as<SVGAnimatedInteger>();
}

SVGAnimatedNumber SVGFETurbulenceElement::seed() const {
    return SVGElement::get("seed").as<SVGAnimatedNumber>();
}

SVGAnimatedEnumeration SVGFETurbulenceElement::stitchTiles() const {
    return SVGElement::get("stitchTiles").as<SVGAnimatedEnumeration>();
}

SVGAnimatedEnumeration SVGFETurbulenceElement::type() const {
    return SVGElement::get("type").as<SVGAnimatedEnumeration>();
}

SVGAnimatedLength SVGFETurbulenceElement::x() const {
    return SVGElement::get("x").as<SVGAnimatedLength>();
}

SVGAnimatedLength SVGFETurbulenceElement::y() const {
    return SVGElement::get("y").as<SVGAnimatedLength>();
}

SVGAnimatedLength SVGFETurbulenceElement::width() const {
    return SVGElement::get("width").as<SVGAnimatedLength>();
}

SVGAnimatedLength SVGFETurbulenceElement::height() const {
    return SVGElement::get("height").as<SVGAnimatedLength>();
}

SVGAnimatedString SVGFETurbulenceElement::result() const {
    return SVGElement::get("result").as<SVGAnimatedString>();
}

