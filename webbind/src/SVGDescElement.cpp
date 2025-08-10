#include <webbind/SVGDescElement.hpp>

namespace webbind {

SVGDescElement SVGDescElement::take_ownership(Handle h) noexcept {
        return SVGDescElement(h);
    }
SVGDescElement SVGDescElement::clone() const noexcept { return *this; }
emlite::Val SVGDescElement::instance() noexcept { return emlite::Val::global("SVGDescElement"); }
SVGDescElement::SVGDescElement(Handle h) noexcept : SVGElement(emlite::Val::take_ownership(h)) {}
SVGDescElement::SVGDescElement(const emlite::Val &val) noexcept: SVGElement(val) {}


} // namespace webbind