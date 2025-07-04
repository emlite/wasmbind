#include <webbind/CSSParserDeclaration.hpp>
#include <webbind/CSSParserValue.hpp>


CSSParserDeclaration CSSParserDeclaration::take_ownership(Handle h) noexcept {
        return CSSParserDeclaration(h);
    }
CSSParserDeclaration CSSParserDeclaration::clone() const noexcept { return *this; }
CSSParserDeclaration::CSSParserDeclaration(Handle h) noexcept : CSSParserRule(emlite::Val::take_ownership(h)) {}
CSSParserDeclaration::CSSParserDeclaration(const emlite::Val &val) noexcept: CSSParserRule(val) {}


CSSParserDeclaration::CSSParserDeclaration(const jsbind::DOMString& name, const jsbind::Sequence<CSSParserRule>& body): CSSParserRule(emlite::Val::global("CSSParserDeclaration").new_(name, body)) {}

jsbind::DOMString CSSParserDeclaration::name() const {
    return CSSParserRule::get("name").as<jsbind::DOMString>();
}

jsbind::FrozenArray<CSSParserValue> CSSParserDeclaration::body() const {
    return CSSParserRule::get("body").as<jsbind::FrozenArray<CSSParserValue>>();
}

