#include <webbind/SVGAnimateElement.hpp>


SVGAnimateElement SVGAnimateElement::take_ownership(Handle h) noexcept {
        return SVGAnimateElement(h);
    }
SVGAnimateElement SVGAnimateElement::clone() const noexcept { return *this; }
SVGAnimateElement::SVGAnimateElement(Handle h) noexcept : SVGAnimationElement(emlite::Val::take_ownership(h)) {}
SVGAnimateElement::SVGAnimateElement(const emlite::Val &val) noexcept: SVGAnimationElement(val) {}


