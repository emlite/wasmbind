#include <webbind/CSSMarginRule.hpp>
#include <webbind/CSSStyleDeclaration.hpp>

namespace webbind {

CSSMarginRule CSSMarginRule::take_ownership(Handle h) noexcept {
    return CSSMarginRule(h);
}

CSSMarginRule CSSMarginRule::clone() const noexcept { return *this; }

emlite::Val CSSMarginRule::instance() noexcept { return emlite::Val::global("CSSMarginRule"); }

CSSMarginRule::CSSMarginRule(Handle h) noexcept : CSSRule(emlite::Val::take_ownership(h)) {}

CSSMarginRule::CSSMarginRule(const emlite::Val &val) noexcept: CSSRule(val) {}

jsbind::String CSSMarginRule::name() const {
    return CSSRule::get("name").as<jsbind::String>();
}

CSSStyleDeclaration CSSMarginRule::style() const {
    return CSSRule::get("style").as<CSSStyleDeclaration>();
}


} // namespace webbind