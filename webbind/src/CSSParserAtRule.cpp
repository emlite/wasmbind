#include <webbind/CSSParserAtRule.hpp>
#include <webbind/CSSParserValue.hpp>


CSSParserAtRule CSSParserAtRule::take_ownership(Handle h) noexcept {
        return CSSParserAtRule(h);
    }
CSSParserAtRule CSSParserAtRule::clone() const noexcept { return *this; }
CSSParserAtRule::CSSParserAtRule(Handle h) noexcept : CSSParserRule(emlite::Val::take_ownership(h)) {}
CSSParserAtRule::CSSParserAtRule(const emlite::Val &val) noexcept: CSSParserRule(val) {}


CSSParserAtRule::CSSParserAtRule(const jsbind::DOMString& name, const jsbind::Sequence<jsbind::Any>& prelude) : CSSParserRule(emlite::Val::global("CSSParserAtRule").new_(name, prelude)) {}

CSSParserAtRule::CSSParserAtRule(const jsbind::DOMString& name, const jsbind::Sequence<jsbind::Any>& prelude, const jsbind::Sequence<CSSParserRule>& body) : CSSParserRule(emlite::Val::global("CSSParserAtRule").new_(name, prelude, body)) {}

jsbind::DOMString CSSParserAtRule::name() const {
    return CSSParserRule::get("name").as<jsbind::DOMString>();
}

jsbind::FrozenArray<CSSParserValue> CSSParserAtRule::prelude() const {
    return CSSParserRule::get("prelude").as<jsbind::FrozenArray<CSSParserValue>>();
}

jsbind::FrozenArray<CSSParserRule> CSSParserAtRule::body() const {
    return CSSParserRule::get("body").as<jsbind::FrozenArray<CSSParserRule>>();
}

