#include <webbind/SVGDescElement.hpp>


SVGDescElement SVGDescElement::take_ownership(Handle h) noexcept {
        return SVGDescElement(h);
    }
SVGDescElement SVGDescElement::clone() const noexcept { return *this; }
SVGDescElement::SVGDescElement(Handle h) noexcept : SVGElement(emlite::Val::take_ownership(h)) {}
SVGDescElement::SVGDescElement(const emlite::Val &val) noexcept: SVGElement(val) {}


