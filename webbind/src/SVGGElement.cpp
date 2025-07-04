#include <webbind/SVGGElement.hpp>


SVGGElement SVGGElement::take_ownership(Handle h) noexcept {
        return SVGGElement(h);
    }
SVGGElement SVGGElement::clone() const noexcept { return *this; }
SVGGElement::SVGGElement(Handle h) noexcept : SVGGraphicsElement(emlite::Val::take_ownership(h)) {}
SVGGElement::SVGGElement(const emlite::Val &val) noexcept: SVGGraphicsElement(val) {}


