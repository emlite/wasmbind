#include <webbind/CSSParserAtRule.hpp>
#include <webbind/CSSParserValue.hpp>

namespace webbind {

CSSParserAtRule CSSParserAtRule::take_ownership(Handle h) noexcept {
    return CSSParserAtRule(h);
}

CSSParserAtRule CSSParserAtRule::clone() const noexcept { return *this; }

emlite::Val CSSParserAtRule::instance() noexcept { return emlite::Val::global("CSSParserAtRule"); }

CSSParserAtRule::CSSParserAtRule(Handle h) noexcept : CSSParserRule(emlite::Val::take_ownership(h)) {}

CSSParserAtRule::CSSParserAtRule(const emlite::Val &val) noexcept: CSSParserRule(val) {}

CSSParserAtRule::CSSParserAtRule(const jsbind::String& name, const jsbind::TypedArray<jsbind::Any>& prelude) : CSSParserRule(emlite::Val::global("CSSParserAtRule").new_(name, prelude)) {}

CSSParserAtRule::CSSParserAtRule(const jsbind::String& name, const jsbind::TypedArray<jsbind::Any>& prelude, const jsbind::TypedArray<CSSParserRule>& body) : CSSParserRule(emlite::Val::global("CSSParserAtRule").new_(name, prelude, body)) {}

jsbind::String CSSParserAtRule::name() const {
    return CSSParserRule::get("name").as<jsbind::String>();
}

jsbind::TypedArray<CSSParserValue> CSSParserAtRule::prelude() const {
    return CSSParserRule::get("prelude").as<jsbind::TypedArray<CSSParserValue>>();
}

jsbind::TypedArray<CSSParserRule> CSSParserAtRule::body() const {
    return CSSParserRule::get("body").as<jsbind::TypedArray<CSSParserRule>>();
}


} // namespace webbind