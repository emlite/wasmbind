#include <webbind/SVGFEPointLightElement.hpp>
#include <webbind/SVGAnimatedNumber.hpp>


SVGFEPointLightElement SVGFEPointLightElement::take_ownership(Handle h) noexcept {
        return SVGFEPointLightElement(h);
    }
SVGFEPointLightElement SVGFEPointLightElement::clone() const noexcept { return *this; }
SVGFEPointLightElement::SVGFEPointLightElement(Handle h) noexcept : SVGElement(emlite::Val::take_ownership(h)) {}
SVGFEPointLightElement::SVGFEPointLightElement(const emlite::Val &val) noexcept: SVGElement(val) {}


SVGAnimatedNumber SVGFEPointLightElement::x() const {
    return SVGElement::get("x").as<SVGAnimatedNumber>();
}

SVGAnimatedNumber SVGFEPointLightElement::y() const {
    return SVGElement::get("y").as<SVGAnimatedNumber>();
}

SVGAnimatedNumber SVGFEPointLightElement::z() const {
    return SVGElement::get("z").as<SVGAnimatedNumber>();
}

