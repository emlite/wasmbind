#include <webbind/SVGDefsElement.hpp>


SVGDefsElement SVGDefsElement::take_ownership(Handle h) noexcept {
        return SVGDefsElement(h);
    }
SVGDefsElement SVGDefsElement::clone() const noexcept { return *this; }
SVGDefsElement::SVGDefsElement(Handle h) noexcept : SVGGraphicsElement(emlite::Val::take_ownership(h)) {}
SVGDefsElement::SVGDefsElement(const emlite::Val &val) noexcept: SVGGraphicsElement(val) {}


