#include <webbind/CSSStyleRule.hpp>
#include <webbind/CSSStyleProperties.hpp>
#include <webbind/StylePropertyMap.hpp>

namespace webbind {

CSSStyleRule CSSStyleRule::take_ownership(Handle h) noexcept {
    return CSSStyleRule(h);
}

CSSStyleRule CSSStyleRule::clone() const noexcept { return *this; }

emlite::Val CSSStyleRule::instance() noexcept { return emlite::Val::global("CSSStyleRule"); }

CSSStyleRule::CSSStyleRule(Handle h) noexcept : CSSGroupingRule(emlite::Val::take_ownership(h)) {}

CSSStyleRule::CSSStyleRule(const emlite::Val &val) noexcept: CSSGroupingRule(val) {}

jsbind::String CSSStyleRule::selectorText() const {
    return CSSGroupingRule::get("selectorText").as<jsbind::String>();
}

void CSSStyleRule::selectorText(const jsbind::String& value) {
    CSSGroupingRule::set("selectorText", value);
}

CSSStyleProperties CSSStyleRule::style() const {
    return CSSGroupingRule::get("style").as<CSSStyleProperties>();
}

StylePropertyMap CSSStyleRule::styleMap() const {
    return CSSGroupingRule::get("styleMap").as<StylePropertyMap>();
}


} // namespace webbind