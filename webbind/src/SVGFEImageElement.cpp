#include <webbind/SVGFEImageElement.hpp>
#include <webbind/SVGAnimatedPreserveAspectRatio.hpp>
#include <webbind/SVGAnimatedString.hpp>
#include <webbind/SVGAnimatedLength.hpp>


SVGFEImageElement SVGFEImageElement::take_ownership(Handle h) noexcept {
        return SVGFEImageElement(h);
    }
SVGFEImageElement SVGFEImageElement::clone() const noexcept { return *this; }
SVGFEImageElement::SVGFEImageElement(Handle h) noexcept : SVGElement(emlite::Val::take_ownership(h)) {}
SVGFEImageElement::SVGFEImageElement(const emlite::Val &val) noexcept: SVGElement(val) {}


SVGAnimatedPreserveAspectRatio SVGFEImageElement::preserveAspectRatio() const {
    return SVGElement::get("preserveAspectRatio").as<SVGAnimatedPreserveAspectRatio>();
}

SVGAnimatedString SVGFEImageElement::crossOrigin() const {
    return SVGElement::get("crossOrigin").as<SVGAnimatedString>();
}

SVGAnimatedLength SVGFEImageElement::x() const {
    return SVGElement::get("x").as<SVGAnimatedLength>();
}

SVGAnimatedLength SVGFEImageElement::y() const {
    return SVGElement::get("y").as<SVGAnimatedLength>();
}

SVGAnimatedLength SVGFEImageElement::width() const {
    return SVGElement::get("width").as<SVGAnimatedLength>();
}

SVGAnimatedLength SVGFEImageElement::height() const {
    return SVGElement::get("height").as<SVGAnimatedLength>();
}

SVGAnimatedString SVGFEImageElement::result() const {
    return SVGElement::get("result").as<SVGAnimatedString>();
}

SVGAnimatedString SVGFEImageElement::href() const {
    return SVGElement::get("href").as<SVGAnimatedString>();
}

