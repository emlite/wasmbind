#include <webbind/CSSParserBlock.hpp>


CSSParserBlock CSSParserBlock::take_ownership(Handle h) noexcept {
        return CSSParserBlock(h);
    }
CSSParserBlock CSSParserBlock::clone() const noexcept { return *this; }
CSSParserBlock::CSSParserBlock(Handle h) noexcept : CSSParserValue(emlite::Val::take_ownership(h)) {}
CSSParserBlock::CSSParserBlock(const emlite::Val &val) noexcept: CSSParserValue(val) {}


CSSParserBlock::CSSParserBlock(const jsbind::DOMString& name, const jsbind::Sequence<CSSParserValue>& body): CSSParserValue(emlite::Val::global("CSSParserBlock").new_(name, body)) {}

jsbind::DOMString CSSParserBlock::name() const {
    return CSSParserValue::get("name").as<jsbind::DOMString>();
}

jsbind::FrozenArray<CSSParserValue> CSSParserBlock::body() const {
    return CSSParserValue::get("body").as<jsbind::FrozenArray<CSSParserValue>>();
}

