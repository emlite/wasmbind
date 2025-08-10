#include <webbind/SVGMPathElement.hpp>
#include <webbind/SVGAnimatedString.hpp>

namespace webbind {

SVGMPathElement SVGMPathElement::take_ownership(Handle h) noexcept {
    return SVGMPathElement(h);
}

SVGMPathElement SVGMPathElement::clone() const noexcept { return *this; }

emlite::Val SVGMPathElement::instance() noexcept { return emlite::Val::global("SVGMPathElement"); }

SVGMPathElement::SVGMPathElement(Handle h) noexcept : SVGElement(emlite::Val::take_ownership(h)) {}

SVGMPathElement::SVGMPathElement(const emlite::Val &val) noexcept: SVGElement(val) {}

SVGAnimatedString SVGMPathElement::href() const {
    return SVGElement::get("href").as<SVGAnimatedString>();
}


} // namespace webbind