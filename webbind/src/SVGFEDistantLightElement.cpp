#include <webbind/SVGFEDistantLightElement.hpp>
#include <webbind/SVGAnimatedNumber.hpp>


SVGFEDistantLightElement SVGFEDistantLightElement::take_ownership(Handle h) noexcept {
        return SVGFEDistantLightElement(h);
    }
SVGFEDistantLightElement SVGFEDistantLightElement::clone() const noexcept { return *this; }
SVGFEDistantLightElement::SVGFEDistantLightElement(Handle h) noexcept : SVGElement(emlite::Val::take_ownership(h)) {}
SVGFEDistantLightElement::SVGFEDistantLightElement(const emlite::Val &val) noexcept: SVGElement(val) {}


SVGAnimatedNumber SVGFEDistantLightElement::azimuth() const {
    return SVGElement::get("azimuth").as<SVGAnimatedNumber>();
}

SVGAnimatedNumber SVGFEDistantLightElement::elevation() const {
    return SVGElement::get("elevation").as<SVGAnimatedNumber>();
}

