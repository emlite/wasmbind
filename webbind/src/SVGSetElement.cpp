#include "webbind/SVGSetElement.hpp"

namespace webbind {

SVGSetElement SVGSetElement::take_ownership(Handle h) noexcept {
        return SVGSetElement(h);
    }
SVGSetElement SVGSetElement::clone() const noexcept { return *this; }
emlite::Val SVGSetElement::instance() noexcept { return emlite::Val::global("SVGSetElement"); }
SVGSetElement::SVGSetElement(Handle h) noexcept : SVGAnimationElement(emlite::Val::take_ownership(h)) {}
SVGSetElement::SVGSetElement(const emlite::Val &val) noexcept: SVGAnimationElement(val) {}


} // namespace webbind