#include "webbind/SVGDiscardElement.hpp"

namespace webbind {

SVGDiscardElement SVGDiscardElement::take_ownership(Handle h) noexcept {
        return SVGDiscardElement(h);
    }
SVGDiscardElement SVGDiscardElement::clone() const noexcept { return *this; }
emlite::Val SVGDiscardElement::instance() noexcept { return emlite::Val::global("SVGDiscardElement"); }
SVGDiscardElement::SVGDiscardElement(Handle h) noexcept : SVGAnimationElement(emlite::Val::take_ownership(h)) {}
SVGDiscardElement::SVGDiscardElement(const emlite::Val &val) noexcept: SVGAnimationElement(val) {}


} // namespace webbind