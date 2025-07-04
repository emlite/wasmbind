#include <webbind/SVGAnimatedString.hpp>


SVGAnimatedString SVGAnimatedString::take_ownership(Handle h) noexcept {
        return SVGAnimatedString(h);
    }
SVGAnimatedString SVGAnimatedString::clone() const noexcept { return *this; }
SVGAnimatedString::SVGAnimatedString(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
SVGAnimatedString::SVGAnimatedString(const emlite::Val &val) noexcept: emlite::Val(val) {}


jsbind::DOMString SVGAnimatedString::baseVal() const {
    return emlite::Val::get("baseVal").as<jsbind::DOMString>();
}

void SVGAnimatedString::baseVal(const jsbind::DOMString& value) {
    emlite::Val::set("baseVal", value);
}

jsbind::DOMString SVGAnimatedString::animVal() const {
    return emlite::Val::get("animVal").as<jsbind::DOMString>();
}

