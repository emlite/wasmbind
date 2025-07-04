#include <webbind/SVGDiscardElement.hpp>


SVGDiscardElement SVGDiscardElement::take_ownership(Handle h) noexcept {
        return SVGDiscardElement(h);
    }
SVGDiscardElement SVGDiscardElement::clone() const noexcept { return *this; }
SVGDiscardElement::SVGDiscardElement(Handle h) noexcept : SVGAnimationElement(emlite::Val::take_ownership(h)) {}
SVGDiscardElement::SVGDiscardElement(const emlite::Val &val) noexcept: SVGAnimationElement(val) {}


