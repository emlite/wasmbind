#include <webbind/SVGAnimateMotionElement.hpp>


SVGAnimateMotionElement SVGAnimateMotionElement::take_ownership(Handle h) noexcept {
        return SVGAnimateMotionElement(h);
    }
SVGAnimateMotionElement SVGAnimateMotionElement::clone() const noexcept { return *this; }
SVGAnimateMotionElement::SVGAnimateMotionElement(Handle h) noexcept : SVGAnimationElement(emlite::Val::take_ownership(h)) {}
SVGAnimateMotionElement::SVGAnimateMotionElement(const emlite::Val &val) noexcept: SVGAnimationElement(val) {}


