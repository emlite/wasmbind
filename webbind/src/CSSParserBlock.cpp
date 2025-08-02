#include <webbind/CSSParserBlock.hpp>


CSSParserBlock CSSParserBlock::take_ownership(Handle h) noexcept {
        return CSSParserBlock(h);
    }
CSSParserBlock CSSParserBlock::clone() const noexcept { return *this; }
emlite::Val CSSParserBlock::instance() noexcept { return emlite::Val::global("CSSParserBlock"); }
CSSParserBlock::CSSParserBlock(Handle h) noexcept : CSSParserValue(emlite::Val::take_ownership(h)) {}
CSSParserBlock::CSSParserBlock(const emlite::Val &val) noexcept: CSSParserValue(val) {}


CSSParserBlock::CSSParserBlock(const jsbind::String& name, const jsbind::TypedArray<CSSParserValue>& body) : CSSParserValue(emlite::Val::global("CSSParserBlock").new_(name, body)) {}

jsbind::String CSSParserBlock::name() const {
    return CSSParserValue::get("name").as<jsbind::String>();
}

jsbind::TypedArray<CSSParserValue> CSSParserBlock::body() const {
    return CSSParserValue::get("body").as<jsbind::TypedArray<CSSParserValue>>();
}

