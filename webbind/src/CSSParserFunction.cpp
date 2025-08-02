#include <webbind/CSSParserFunction.hpp>


CSSParserFunction CSSParserFunction::take_ownership(Handle h) noexcept {
        return CSSParserFunction(h);
    }
CSSParserFunction CSSParserFunction::clone() const noexcept { return *this; }
emlite::Val CSSParserFunction::instance() noexcept { return emlite::Val::global("CSSParserFunction"); }
CSSParserFunction::CSSParserFunction(Handle h) noexcept : CSSParserValue(emlite::Val::take_ownership(h)) {}
CSSParserFunction::CSSParserFunction(const emlite::Val &val) noexcept: CSSParserValue(val) {}


CSSParserFunction::CSSParserFunction(const jsbind::String& name, const jsbind::TypedArray<jsbind::TypedArray<CSSParserValue>>& args) : CSSParserValue(emlite::Val::global("CSSParserFunction").new_(name, args)) {}

jsbind::String CSSParserFunction::name() const {
    return CSSParserValue::get("name").as<jsbind::String>();
}

jsbind::TypedArray<jsbind::TypedArray<CSSParserValue>> CSSParserFunction::args() const {
    return CSSParserValue::get("args").as<jsbind::TypedArray<jsbind::TypedArray<CSSParserValue>>>();
}

