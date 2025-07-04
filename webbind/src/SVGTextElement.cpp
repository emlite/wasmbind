#include <webbind/SVGTextElement.hpp>


SVGTextElement SVGTextElement::take_ownership(Handle h) noexcept {
        return SVGTextElement(h);
    }
SVGTextElement SVGTextElement::clone() const noexcept { return *this; }
SVGTextElement::SVGTextElement(Handle h) noexcept : SVGTextPositioningElement(emlite::Val::take_ownership(h)) {}
SVGTextElement::SVGTextElement(const emlite::Val &val) noexcept: SVGTextPositioningElement(val) {}


