#include <webbind/SVGFESpotLightElement.hpp>
#include <webbind/SVGAnimatedNumber.hpp>


SVGFESpotLightElement SVGFESpotLightElement::take_ownership(Handle h) noexcept {
        return SVGFESpotLightElement(h);
    }
SVGFESpotLightElement SVGFESpotLightElement::clone() const noexcept { return *this; }
SVGFESpotLightElement::SVGFESpotLightElement(Handle h) noexcept : SVGElement(emlite::Val::take_ownership(h)) {}
SVGFESpotLightElement::SVGFESpotLightElement(const emlite::Val &val) noexcept: SVGElement(val) {}


SVGAnimatedNumber SVGFESpotLightElement::x() const {
    return SVGElement::get("x").as<SVGAnimatedNumber>();
}

SVGAnimatedNumber SVGFESpotLightElement::y() const {
    return SVGElement::get("y").as<SVGAnimatedNumber>();
}

SVGAnimatedNumber SVGFESpotLightElement::z() const {
    return SVGElement::get("z").as<SVGAnimatedNumber>();
}

SVGAnimatedNumber SVGFESpotLightElement::pointsAtX() const {
    return SVGElement::get("pointsAtX").as<SVGAnimatedNumber>();
}

SVGAnimatedNumber SVGFESpotLightElement::pointsAtY() const {
    return SVGElement::get("pointsAtY").as<SVGAnimatedNumber>();
}

SVGAnimatedNumber SVGFESpotLightElement::pointsAtZ() const {
    return SVGElement::get("pointsAtZ").as<SVGAnimatedNumber>();
}

SVGAnimatedNumber SVGFESpotLightElement::specularExponent() const {
    return SVGElement::get("specularExponent").as<SVGAnimatedNumber>();
}

SVGAnimatedNumber SVGFESpotLightElement::limitingConeAngle() const {
    return SVGElement::get("limitingConeAngle").as<SVGAnimatedNumber>();
}

