#include <webbind/SVGImageElement.hpp>
#include <webbind/SVGAnimatedLength.hpp>
#include <webbind/SVGAnimatedPreserveAspectRatio.hpp>
#include <webbind/SVGAnimatedString.hpp>


SVGImageElement SVGImageElement::take_ownership(Handle h) noexcept {
        return SVGImageElement(h);
    }
SVGImageElement SVGImageElement::clone() const noexcept { return *this; }
SVGImageElement::SVGImageElement(Handle h) noexcept : SVGGraphicsElement(emlite::Val::take_ownership(h)) {}
SVGImageElement::SVGImageElement(const emlite::Val &val) noexcept: SVGGraphicsElement(val) {}


SVGAnimatedLength SVGImageElement::x() const {
    return SVGGraphicsElement::get("x").as<SVGAnimatedLength>();
}

SVGAnimatedLength SVGImageElement::y() const {
    return SVGGraphicsElement::get("y").as<SVGAnimatedLength>();
}

SVGAnimatedLength SVGImageElement::width() const {
    return SVGGraphicsElement::get("width").as<SVGAnimatedLength>();
}

SVGAnimatedLength SVGImageElement::height() const {
    return SVGGraphicsElement::get("height").as<SVGAnimatedLength>();
}

SVGAnimatedPreserveAspectRatio SVGImageElement::preserveAspectRatio() const {
    return SVGGraphicsElement::get("preserveAspectRatio").as<SVGAnimatedPreserveAspectRatio>();
}

jsbind::String SVGImageElement::crossOrigin() const {
    return SVGGraphicsElement::get("crossOrigin").as<jsbind::String>();
}

void SVGImageElement::crossOrigin(const jsbind::String& value) {
    SVGGraphicsElement::set("crossOrigin", value);
}

SVGAnimatedString SVGImageElement::href() const {
    return SVGGraphicsElement::get("href").as<SVGAnimatedString>();
}

