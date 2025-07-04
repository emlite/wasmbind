#include <webbind/CSSMarginRule.hpp>
#include <webbind/CSSStyleDeclaration.hpp>


CSSMarginRule CSSMarginRule::take_ownership(Handle h) noexcept {
        return CSSMarginRule(h);
    }
CSSMarginRule CSSMarginRule::clone() const noexcept { return *this; }
CSSMarginRule::CSSMarginRule(Handle h) noexcept : CSSRule(emlite::Val::take_ownership(h)) {}
CSSMarginRule::CSSMarginRule(const emlite::Val &val) noexcept: CSSRule(val) {}


jsbind::CSSOMString CSSMarginRule::name() const {
    return CSSRule::get("name").as<jsbind::CSSOMString>();
}

CSSStyleDeclaration CSSMarginRule::style() const {
    return CSSRule::get("style").as<CSSStyleDeclaration>();
}

