#include <webbind/CSSKeyframesRule.hpp>
#include <webbind/CSSRuleList.hpp>
#include <webbind/CSSKeyframeRule.hpp>


CSSKeyframesRule CSSKeyframesRule::take_ownership(Handle h) noexcept {
        return CSSKeyframesRule(h);
    }
CSSKeyframesRule CSSKeyframesRule::clone() const noexcept { return *this; }
CSSKeyframesRule::CSSKeyframesRule(Handle h) noexcept : CSSRule(emlite::Val::take_ownership(h)) {}
CSSKeyframesRule::CSSKeyframesRule(const emlite::Val &val) noexcept: CSSRule(val) {}


jsbind::CSSOMString CSSKeyframesRule::name() const {
    return CSSRule::get("name").as<jsbind::CSSOMString>();
}

void CSSKeyframesRule::name(const jsbind::CSSOMString& value) {
    CSSRule::set("name", value);
}

CSSRuleList CSSKeyframesRule::cssRules() const {
    return CSSRule::get("cssRules").as<CSSRuleList>();
}

unsigned long CSSKeyframesRule::length() const {
    return CSSRule::get("length").as<unsigned long>();
}

jsbind::Undefined CSSKeyframesRule::appendRule(const jsbind::CSSOMString& rule) {
    return CSSRule::call("appendRule", rule).as<jsbind::Undefined>();
}

jsbind::Undefined CSSKeyframesRule::deleteRule(const jsbind::CSSOMString& select) {
    return CSSRule::call("deleteRule", select).as<jsbind::Undefined>();
}

CSSKeyframeRule CSSKeyframesRule::findRule(const jsbind::CSSOMString& select) {
    return CSSRule::call("findRule", select).as<CSSKeyframeRule>();
}

