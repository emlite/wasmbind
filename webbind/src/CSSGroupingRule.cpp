#include <webbind/CSSGroupingRule.hpp>
#include <webbind/CSSRuleList.hpp>

namespace webbind {

CSSGroupingRule CSSGroupingRule::take_ownership(Handle h) noexcept {
    return CSSGroupingRule(h);
}

CSSGroupingRule CSSGroupingRule::clone() const noexcept { return *this; }

emlite::Val CSSGroupingRule::instance() noexcept { return emlite::Val::global("CSSGroupingRule"); }

CSSGroupingRule::CSSGroupingRule(Handle h) noexcept : CSSRule(emlite::Val::take_ownership(h)) {}

CSSGroupingRule::CSSGroupingRule(const emlite::Val &val) noexcept: CSSRule(val) {}

CSSRuleList CSSGroupingRule::cssRules() const {
    return CSSRule::get("cssRules").as<CSSRuleList>();
}

unsigned long CSSGroupingRule::insertRule(const jsbind::String& rule) {
    return CSSRule::call("insertRule", rule).as<unsigned long>();
}

unsigned long CSSGroupingRule::insertRule(const jsbind::String& rule, unsigned long index) {
    return CSSRule::call("insertRule", rule, index).as<unsigned long>();
}

jsbind::Undefined CSSGroupingRule::deleteRule(unsigned long index) {
    return CSSRule::call("deleteRule", index).as<jsbind::Undefined>();
}


} // namespace webbind