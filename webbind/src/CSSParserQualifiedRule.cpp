#include <webbind/CSSParserQualifiedRule.hpp>
#include <webbind/CSSParserValue.hpp>


CSSParserQualifiedRule CSSParserQualifiedRule::take_ownership(Handle h) noexcept {
        return CSSParserQualifiedRule(h);
    }
CSSParserQualifiedRule CSSParserQualifiedRule::clone() const noexcept { return *this; }
CSSParserQualifiedRule::CSSParserQualifiedRule(Handle h) noexcept : CSSParserRule(emlite::Val::take_ownership(h)) {}
CSSParserQualifiedRule::CSSParserQualifiedRule(const emlite::Val &val) noexcept: CSSParserRule(val) {}


CSSParserQualifiedRule::CSSParserQualifiedRule(const jsbind::Sequence<jsbind::Any>& prelude) : CSSParserRule(emlite::Val::global("CSSParserQualifiedRule").new_(prelude)) {}

CSSParserQualifiedRule::CSSParserQualifiedRule(const jsbind::Sequence<jsbind::Any>& prelude, const jsbind::Sequence<CSSParserRule>& body) : CSSParserRule(emlite::Val::global("CSSParserQualifiedRule").new_(prelude, body)) {}

jsbind::FrozenArray<CSSParserValue> CSSParserQualifiedRule::prelude() const {
    return CSSParserRule::get("prelude").as<jsbind::FrozenArray<CSSParserValue>>();
}

jsbind::FrozenArray<CSSParserRule> CSSParserQualifiedRule::body() const {
    return CSSParserRule::get("body").as<jsbind::FrozenArray<CSSParserRule>>();
}

