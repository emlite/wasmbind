#include <webbind/CSSParserFunction.hpp>


CSSParserFunction CSSParserFunction::take_ownership(Handle h) noexcept {
        return CSSParserFunction(h);
    }
CSSParserFunction CSSParserFunction::clone() const noexcept { return *this; }
CSSParserFunction::CSSParserFunction(Handle h) noexcept : CSSParserValue(emlite::Val::take_ownership(h)) {}
CSSParserFunction::CSSParserFunction(const emlite::Val &val) noexcept: CSSParserValue(val) {}


CSSParserFunction::CSSParserFunction(const jsbind::DOMString& name, const jsbind::Sequence<jsbind::Sequence<CSSParserValue>>& args) : CSSParserValue(emlite::Val::global("CSSParserFunction").new_(name, args)) {}

jsbind::DOMString CSSParserFunction::name() const {
    return CSSParserValue::get("name").as<jsbind::DOMString>();
}

jsbind::FrozenArray<jsbind::FrozenArray<CSSParserValue>> CSSParserFunction::args() const {
    return CSSParserValue::get("args").as<jsbind::FrozenArray<jsbind::FrozenArray<CSSParserValue>>>();
}

