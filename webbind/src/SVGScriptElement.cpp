#include <webbind/SVGScriptElement.hpp>
#include <webbind/SVGAnimatedString.hpp>


SVGScriptElement SVGScriptElement::take_ownership(Handle h) noexcept {
        return SVGScriptElement(h);
    }
SVGScriptElement SVGScriptElement::clone() const noexcept { return *this; }
SVGScriptElement::SVGScriptElement(Handle h) noexcept : SVGElement(emlite::Val::take_ownership(h)) {}
SVGScriptElement::SVGScriptElement(const emlite::Val &val) noexcept: SVGElement(val) {}


jsbind::String SVGScriptElement::type() const {
    return SVGElement::get("type").as<jsbind::String>();
}

void SVGScriptElement::type(const jsbind::String& value) {
    SVGElement::set("type", value);
}

jsbind::String SVGScriptElement::crossOrigin() const {
    return SVGElement::get("crossOrigin").as<jsbind::String>();
}

void SVGScriptElement::crossOrigin(const jsbind::String& value) {
    SVGElement::set("crossOrigin", value);
}

SVGAnimatedString SVGScriptElement::href() const {
    return SVGElement::get("href").as<SVGAnimatedString>();
}

