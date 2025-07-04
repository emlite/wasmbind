#include <webbind/CSSPageRule.hpp>
#include <webbind/CSSPageDescriptors.hpp>


CSSPageRule CSSPageRule::take_ownership(Handle h) noexcept {
        return CSSPageRule(h);
    }
CSSPageRule CSSPageRule::clone() const noexcept { return *this; }
CSSPageRule::CSSPageRule(Handle h) noexcept : CSSGroupingRule(emlite::Val::take_ownership(h)) {}
CSSPageRule::CSSPageRule(const emlite::Val &val) noexcept: CSSGroupingRule(val) {}


jsbind::CSSOMString CSSPageRule::selectorText() const {
    return CSSGroupingRule::get("selectorText").as<jsbind::CSSOMString>();
}

void CSSPageRule::selectorText(const jsbind::CSSOMString& value) {
    CSSGroupingRule::set("selectorText", value);
}

CSSPageDescriptors CSSPageRule::style() const {
    return CSSGroupingRule::get("style").as<CSSPageDescriptors>();
}

