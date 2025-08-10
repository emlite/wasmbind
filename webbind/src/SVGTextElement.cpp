#include "webbind/SVGTextElement.hpp"

namespace webbind {

SVGTextElement SVGTextElement::take_ownership(Handle h) noexcept {
        return SVGTextElement(h);
    }
SVGTextElement SVGTextElement::clone() const noexcept { return *this; }
emlite::Val SVGTextElement::instance() noexcept { return emlite::Val::global("SVGTextElement"); }
SVGTextElement::SVGTextElement(Handle h) noexcept : SVGTextPositioningElement(emlite::Val::take_ownership(h)) {}
SVGTextElement::SVGTextElement(const emlite::Val &val) noexcept: SVGTextPositioningElement(val) {}


} // namespace webbind