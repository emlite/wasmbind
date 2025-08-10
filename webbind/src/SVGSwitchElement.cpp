#include "webbind/SVGSwitchElement.hpp"

namespace webbind {

SVGSwitchElement SVGSwitchElement::take_ownership(Handle h) noexcept {
        return SVGSwitchElement(h);
    }
SVGSwitchElement SVGSwitchElement::clone() const noexcept { return *this; }
emlite::Val SVGSwitchElement::instance() noexcept { return emlite::Val::global("SVGSwitchElement"); }
SVGSwitchElement::SVGSwitchElement(Handle h) noexcept : SVGGraphicsElement(emlite::Val::take_ownership(h)) {}
SVGSwitchElement::SVGSwitchElement(const emlite::Val &val) noexcept: SVGGraphicsElement(val) {}


} // namespace webbind