#include <webbind/SVGMPathElement.hpp>
#include <webbind/SVGAnimatedString.hpp>


SVGMPathElement SVGMPathElement::take_ownership(Handle h) noexcept {
        return SVGMPathElement(h);
    }
SVGMPathElement SVGMPathElement::clone() const noexcept { return *this; }
SVGMPathElement::SVGMPathElement(Handle h) noexcept : SVGElement(emlite::Val::take_ownership(h)) {}
SVGMPathElement::SVGMPathElement(const emlite::Val &val) noexcept: SVGElement(val) {}


SVGAnimatedString SVGMPathElement::href() const {
    return SVGElement::get("href").as<SVGAnimatedString>();
}

