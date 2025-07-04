#include <webbind/SVGTSpanElement.hpp>


SVGTSpanElement SVGTSpanElement::take_ownership(Handle h) noexcept {
        return SVGTSpanElement(h);
    }
SVGTSpanElement SVGTSpanElement::clone() const noexcept { return *this; }
SVGTSpanElement::SVGTSpanElement(Handle h) noexcept : SVGTextPositioningElement(emlite::Val::take_ownership(h)) {}
SVGTSpanElement::SVGTSpanElement(const emlite::Val &val) noexcept: SVGTextPositioningElement(val) {}


