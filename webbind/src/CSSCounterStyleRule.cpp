#include "webbind/CSSCounterStyleRule.hpp"

namespace webbind {

CSSCounterStyleRule CSSCounterStyleRule::take_ownership(Handle h) noexcept {
        return CSSCounterStyleRule(h);
    }
CSSCounterStyleRule CSSCounterStyleRule::clone() const noexcept { return *this; }
emlite::Val CSSCounterStyleRule::instance() noexcept { return emlite::Val::global("CSSCounterStyleRule"); }
CSSCounterStyleRule::CSSCounterStyleRule(Handle h) noexcept : CSSRule(emlite::Val::take_ownership(h)) {}
CSSCounterStyleRule::CSSCounterStyleRule(const emlite::Val &val) noexcept: CSSRule(val) {}

jsbind::String CSSCounterStyleRule::name() const {
    return CSSRule::get("name").as<jsbind::String>();
}

void CSSCounterStyleRule::name(const jsbind::String& value) {
    CSSRule::set("name", value);
}

jsbind::String CSSCounterStyleRule::system() const {
    return CSSRule::get("system").as<jsbind::String>();
}

void CSSCounterStyleRule::system(const jsbind::String& value) {
    CSSRule::set("system", value);
}

jsbind::String CSSCounterStyleRule::symbols() const {
    return CSSRule::get("symbols").as<jsbind::String>();
}

void CSSCounterStyleRule::symbols(const jsbind::String& value) {
    CSSRule::set("symbols", value);
}

jsbind::String CSSCounterStyleRule::additiveSymbols() const {
    return CSSRule::get("additiveSymbols").as<jsbind::String>();
}

void CSSCounterStyleRule::additiveSymbols(const jsbind::String& value) {
    CSSRule::set("additiveSymbols", value);
}

jsbind::String CSSCounterStyleRule::negative() const {
    return CSSRule::get("negative").as<jsbind::String>();
}

void CSSCounterStyleRule::negative(const jsbind::String& value) {
    CSSRule::set("negative", value);
}

jsbind::String CSSCounterStyleRule::prefix() const {
    return CSSRule::get("prefix").as<jsbind::String>();
}

void CSSCounterStyleRule::prefix(const jsbind::String& value) {
    CSSRule::set("prefix", value);
}

jsbind::String CSSCounterStyleRule::suffix() const {
    return CSSRule::get("suffix").as<jsbind::String>();
}

void CSSCounterStyleRule::suffix(const jsbind::String& value) {
    CSSRule::set("suffix", value);
}

jsbind::String CSSCounterStyleRule::range() const {
    return CSSRule::get("range").as<jsbind::String>();
}

void CSSCounterStyleRule::range(const jsbind::String& value) {
    CSSRule::set("range", value);
}

jsbind::String CSSCounterStyleRule::pad() const {
    return CSSRule::get("pad").as<jsbind::String>();
}

void CSSCounterStyleRule::pad(const jsbind::String& value) {
    CSSRule::set("pad", value);
}

jsbind::String CSSCounterStyleRule::speakAs() const {
    return CSSRule::get("speakAs").as<jsbind::String>();
}

void CSSCounterStyleRule::speakAs(const jsbind::String& value) {
    CSSRule::set("speakAs", value);
}

jsbind::String CSSCounterStyleRule::fallback() const {
    return CSSRule::get("fallback").as<jsbind::String>();
}

void CSSCounterStyleRule::fallback(const jsbind::String& value) {
    CSSRule::set("fallback", value);
}


} // namespace webbind