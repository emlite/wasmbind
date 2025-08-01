#include <webbind/SVGAnimatedString.hpp>


SVGAnimatedString SVGAnimatedString::take_ownership(Handle h) noexcept {
        return SVGAnimatedString(h);
    }
SVGAnimatedString SVGAnimatedString::clone() const noexcept { return *this; }
SVGAnimatedString::SVGAnimatedString(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
SVGAnimatedString::SVGAnimatedString(const emlite::Val &val) noexcept: emlite::Val(val) {}


jsbind::String SVGAnimatedString::baseVal() const {
    return emlite::Val::get("baseVal").as<jsbind::String>();
}

void SVGAnimatedString::baseVal(const jsbind::String& value) {
    emlite::Val::set("baseVal", value);
}

jsbind::String SVGAnimatedString::animVal() const {
    return emlite::Val::get("animVal").as<jsbind::String>();
}

