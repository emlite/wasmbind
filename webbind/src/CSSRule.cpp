#include <webbind/CSSRule.hpp>
#include <webbind/CSSStyleSheet.hpp>


CSSRule CSSRule::take_ownership(Handle h) noexcept {
        return CSSRule(h);
    }
CSSRule CSSRule::clone() const noexcept { return *this; }
CSSRule::CSSRule(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
CSSRule::CSSRule(const emlite::Val &val) noexcept: emlite::Val(val) {}


jsbind::CSSOMString CSSRule::cssText() const {
    return emlite::Val::get("cssText").as<jsbind::CSSOMString>();
}

void CSSRule::cssText(const jsbind::CSSOMString& value) {
    emlite::Val::set("cssText", value);
}

CSSRule CSSRule::parentRule() const {
    return emlite::Val::get("parentRule").as<CSSRule>();
}

CSSStyleSheet CSSRule::parentStyleSheet() const {
    return emlite::Val::get("parentStyleSheet").as<CSSStyleSheet>();
}

unsigned short CSSRule::type() const {
    return emlite::Val::get("type").as<unsigned short>();
}

