#include <webbind/SVGTitleElement.hpp>


SVGTitleElement SVGTitleElement::take_ownership(Handle h) noexcept {
        return SVGTitleElement(h);
    }
SVGTitleElement SVGTitleElement::clone() const noexcept { return *this; }
SVGTitleElement::SVGTitleElement(Handle h) noexcept : SVGElement(emlite::Val::take_ownership(h)) {}
SVGTitleElement::SVGTitleElement(const emlite::Val &val) noexcept: SVGElement(val) {}


