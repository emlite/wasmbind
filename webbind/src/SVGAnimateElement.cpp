#include <webbind/SVGAnimateElement.hpp>

namespace webbind {

SVGAnimateElement SVGAnimateElement::take_ownership(Handle h) noexcept {
        return SVGAnimateElement(h);
    }
SVGAnimateElement SVGAnimateElement::clone() const noexcept { return *this; }
emlite::Val SVGAnimateElement::instance() noexcept { return emlite::Val::global("SVGAnimateElement"); }
SVGAnimateElement::SVGAnimateElement(Handle h) noexcept : SVGAnimationElement(emlite::Val::take_ownership(h)) {}
SVGAnimateElement::SVGAnimateElement(const emlite::Val &val) noexcept: SVGAnimationElement(val) {}


} // namespace webbind