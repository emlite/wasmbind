#include "webbind/SVGRadialGradientElement.hpp"
#include "webbind/SVGAnimatedLength.hpp"

namespace webbind {

SVGRadialGradientElement SVGRadialGradientElement::take_ownership(Handle h) noexcept {
        return SVGRadialGradientElement(h);
    }
SVGRadialGradientElement SVGRadialGradientElement::clone() const noexcept { return *this; }
emlite::Val SVGRadialGradientElement::instance() noexcept { return emlite::Val::global("SVGRadialGradientElement"); }
SVGRadialGradientElement::SVGRadialGradientElement(Handle h) noexcept : SVGGradientElement(emlite::Val::take_ownership(h)) {}
SVGRadialGradientElement::SVGRadialGradientElement(const emlite::Val &val) noexcept: SVGGradientElement(val) {}

SVGAnimatedLength SVGRadialGradientElement::cx() const {
    return SVGGradientElement::get("cx").as<SVGAnimatedLength>();
}

SVGAnimatedLength SVGRadialGradientElement::cy() const {
    return SVGGradientElement::get("cy").as<SVGAnimatedLength>();
}

SVGAnimatedLength SVGRadialGradientElement::r() const {
    return SVGGradientElement::get("r").as<SVGAnimatedLength>();
}

SVGAnimatedLength SVGRadialGradientElement::fx() const {
    return SVGGradientElement::get("fx").as<SVGAnimatedLength>();
}

SVGAnimatedLength SVGRadialGradientElement::fy() const {
    return SVGGradientElement::get("fy").as<SVGAnimatedLength>();
}

SVGAnimatedLength SVGRadialGradientElement::fr() const {
    return SVGGradientElement::get("fr").as<SVGAnimatedLength>();
}


} // namespace webbind