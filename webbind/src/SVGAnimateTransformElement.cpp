#include <webbind/SVGAnimateTransformElement.hpp>


SVGAnimateTransformElement SVGAnimateTransformElement::take_ownership(Handle h) noexcept {
        return SVGAnimateTransformElement(h);
    }
SVGAnimateTransformElement SVGAnimateTransformElement::clone() const noexcept { return *this; }
emlite::Val SVGAnimateTransformElement::instance() noexcept { return emlite::Val::global("SVGAnimateTransformElement"); }
SVGAnimateTransformElement::SVGAnimateTransformElement(Handle h) noexcept : SVGAnimationElement(emlite::Val::take_ownership(h)) {}
SVGAnimateTransformElement::SVGAnimateTransformElement(const emlite::Val &val) noexcept: SVGAnimationElement(val) {}


