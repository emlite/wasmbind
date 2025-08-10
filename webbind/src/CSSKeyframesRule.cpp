#include "webbind/CSSKeyframesRule.hpp"
#include "webbind/CSSRuleList.hpp"
#include "webbind/CSSKeyframeRule.hpp"

namespace webbind {

CSSKeyframesRule CSSKeyframesRule::take_ownership(Handle h) noexcept {
        return CSSKeyframesRule(h);
    }
CSSKeyframesRule CSSKeyframesRule::clone() const noexcept { return *this; }
emlite::Val CSSKeyframesRule::instance() noexcept { return emlite::Val::global("CSSKeyframesRule"); }
CSSKeyframesRule::CSSKeyframesRule(Handle h) noexcept : CSSRule(emlite::Val::take_ownership(h)) {}
CSSKeyframesRule::CSSKeyframesRule(const emlite::Val &val) noexcept: CSSRule(val) {}

jsbind::String CSSKeyframesRule::name() const {
    return CSSRule::get("name").as<jsbind::String>();
}

void CSSKeyframesRule::name(const jsbind::String& value) {
    CSSRule::set("name", value);
}

CSSRuleList CSSKeyframesRule::cssRules() const {
    return CSSRule::get("cssRules").as<CSSRuleList>();
}

unsigned long CSSKeyframesRule::length() const {
    return CSSRule::get("length").as<unsigned long>();
}

jsbind::Undefined CSSKeyframesRule::appendRule(const jsbind::String& rule) {
    return CSSRule::call("appendRule", rule).as<jsbind::Undefined>();
}

jsbind::Undefined CSSKeyframesRule::deleteRule(const jsbind::String& select) {
    return CSSRule::call("deleteRule", select).as<jsbind::Undefined>();
}

CSSKeyframeRule CSSKeyframesRule::findRule(const jsbind::String& select) {
    return CSSRule::call("findRule", select).as<CSSKeyframeRule>();
}


} // namespace webbind