#include <webbind/CSSCounterStyleRule.hpp>


CSSCounterStyleRule CSSCounterStyleRule::take_ownership(Handle h) noexcept {
        return CSSCounterStyleRule(h);
    }
CSSCounterStyleRule CSSCounterStyleRule::clone() const noexcept { return *this; }
CSSCounterStyleRule::CSSCounterStyleRule(Handle h) noexcept : CSSRule(emlite::Val::take_ownership(h)) {}
CSSCounterStyleRule::CSSCounterStyleRule(const emlite::Val &val) noexcept: CSSRule(val) {}


jsbind::CSSOMString CSSCounterStyleRule::name() const {
    return CSSRule::get("name").as<jsbind::CSSOMString>();
}

void CSSCounterStyleRule::name(const jsbind::CSSOMString& value) {
    CSSRule::set("name", value);
}

jsbind::CSSOMString CSSCounterStyleRule::system() const {
    return CSSRule::get("system").as<jsbind::CSSOMString>();
}

void CSSCounterStyleRule::system(const jsbind::CSSOMString& value) {
    CSSRule::set("system", value);
}

jsbind::CSSOMString CSSCounterStyleRule::symbols() const {
    return CSSRule::get("symbols").as<jsbind::CSSOMString>();
}

void CSSCounterStyleRule::symbols(const jsbind::CSSOMString& value) {
    CSSRule::set("symbols", value);
}

jsbind::CSSOMString CSSCounterStyleRule::additiveSymbols() const {
    return CSSRule::get("additiveSymbols").as<jsbind::CSSOMString>();
}

void CSSCounterStyleRule::additiveSymbols(const jsbind::CSSOMString& value) {
    CSSRule::set("additiveSymbols", value);
}

jsbind::CSSOMString CSSCounterStyleRule::negative() const {
    return CSSRule::get("negative").as<jsbind::CSSOMString>();
}

void CSSCounterStyleRule::negative(const jsbind::CSSOMString& value) {
    CSSRule::set("negative", value);
}

jsbind::CSSOMString CSSCounterStyleRule::prefix() const {
    return CSSRule::get("prefix").as<jsbind::CSSOMString>();
}

void CSSCounterStyleRule::prefix(const jsbind::CSSOMString& value) {
    CSSRule::set("prefix", value);
}

jsbind::CSSOMString CSSCounterStyleRule::suffix() const {
    return CSSRule::get("suffix").as<jsbind::CSSOMString>();
}

void CSSCounterStyleRule::suffix(const jsbind::CSSOMString& value) {
    CSSRule::set("suffix", value);
}

jsbind::CSSOMString CSSCounterStyleRule::range() const {
    return CSSRule::get("range").as<jsbind::CSSOMString>();
}

void CSSCounterStyleRule::range(const jsbind::CSSOMString& value) {
    CSSRule::set("range", value);
}

jsbind::CSSOMString CSSCounterStyleRule::pad() const {
    return CSSRule::get("pad").as<jsbind::CSSOMString>();
}

void CSSCounterStyleRule::pad(const jsbind::CSSOMString& value) {
    CSSRule::set("pad", value);
}

jsbind::CSSOMString CSSCounterStyleRule::speakAs() const {
    return CSSRule::get("speakAs").as<jsbind::CSSOMString>();
}

void CSSCounterStyleRule::speakAs(const jsbind::CSSOMString& value) {
    CSSRule::set("speakAs", value);
}

jsbind::CSSOMString CSSCounterStyleRule::fallback() const {
    return CSSRule::get("fallback").as<jsbind::CSSOMString>();
}

void CSSCounterStyleRule::fallback(const jsbind::CSSOMString& value) {
    CSSRule::set("fallback", value);
}

