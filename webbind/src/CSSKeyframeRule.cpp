#include <webbind/CSSKeyframeRule.hpp>
#include <webbind/CSSStyleProperties.hpp>

namespace webbind {

CSSKeyframeRule CSSKeyframeRule::take_ownership(Handle h) noexcept {
    return CSSKeyframeRule(h);
}

CSSKeyframeRule CSSKeyframeRule::clone() const noexcept { return *this; }

emlite::Val CSSKeyframeRule::instance() noexcept { return emlite::Val::global("CSSKeyframeRule"); }

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


} // namespace webbind