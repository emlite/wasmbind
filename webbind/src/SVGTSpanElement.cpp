#include <webbind/SVGTSpanElement.hpp>

namespace webbind {

SVGTSpanElement SVGTSpanElement::take_ownership(Handle h) noexcept {
        return SVGTSpanElement(h);
    }
SVGTSpanElement SVGTSpanElement::clone() const noexcept { return *this; }
emlite::Val SVGTSpanElement::instance() noexcept { return emlite::Val::global("SVGTSpanElement"); }
SVGTSpanElement::SVGTSpanElement(Handle h) noexcept : SVGTextPositioningElement(emlite::Val::take_ownership(h)) {}
SVGTSpanElement::SVGTSpanElement(const emlite::Val &val) noexcept: SVGTextPositioningElement(val) {}


} // namespace webbind