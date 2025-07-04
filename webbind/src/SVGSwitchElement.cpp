#include <webbind/SVGSwitchElement.hpp>


SVGSwitchElement SVGSwitchElement::take_ownership(Handle h) noexcept {
        return SVGSwitchElement(h);
    }
SVGSwitchElement SVGSwitchElement::clone() const noexcept { return *this; }
SVGSwitchElement::SVGSwitchElement(Handle h) noexcept : SVGGraphicsElement(emlite::Val::take_ownership(h)) {}
SVGSwitchElement::SVGSwitchElement(const emlite::Val &val) noexcept: SVGGraphicsElement(val) {}


