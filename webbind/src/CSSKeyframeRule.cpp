#include <webbind/CSSKeyframeRule.hpp>
#include <webbind/CSSStyleProperties.hpp>


CSSKeyframeRule CSSKeyframeRule::take_ownership(Handle h) noexcept {
        return CSSKeyframeRule(h);
    }
CSSKeyframeRule CSSKeyframeRule::clone() const noexcept { return *this; }
CSSKeyframeRule::CSSKeyframeRule(Handle h) noexcept : CSSRule(emlite::Val::take_ownership(h)) {}
CSSKeyframeRule::CSSKeyframeRule(const emlite::Val &val) noexcept: CSSRule(val) {}


jsbind::String CSSKeyframeRule::keyText() const {
    return CSSRule::get("keyText").as<jsbind::String>();
}

void CSSKeyframeRule::keyText(const jsbind::String& value) {
    CSSRule::set("keyText", value);
}

CSSStyleProperties CSSKeyframeRule::style() const {
    return CSSRule::get("style").as<CSSStyleProperties>();
}

