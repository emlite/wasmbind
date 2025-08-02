#include <webbind/CSSParserDeclaration.hpp>
#include <webbind/CSSParserValue.hpp>


CSSParserDeclaration CSSParserDeclaration::take_ownership(Handle h) noexcept {
        return CSSParserDeclaration(h);
    }
CSSParserDeclaration CSSParserDeclaration::clone() const noexcept { return *this; }
emlite::Val CSSParserDeclaration::instance() noexcept { return emlite::Val::global("CSSParserDeclaration"); }
CSSParserDeclaration::CSSParserDeclaration(Handle h) noexcept : CSSParserRule(emlite::Val::take_ownership(h)) {}
CSSParserDeclaration::CSSParserDeclaration(const emlite::Val &val) noexcept: CSSParserRule(val) {}


CSSParserDeclaration::CSSParserDeclaration(const jsbind::String& name) : CSSParserRule(emlite::Val::global("CSSParserDeclaration").new_(name)) {}

CSSParserDeclaration::CSSParserDeclaration(const jsbind::String& name, const jsbind::TypedArray<CSSParserRule>& body) : CSSParserRule(emlite::Val::global("CSSParserDeclaration").new_(name, body)) {}

jsbind::String CSSParserDeclaration::name() const {
    return CSSParserRule::get("name").as<jsbind::String>();
}

jsbind::TypedArray<CSSParserValue> CSSParserDeclaration::body() const {
    return CSSParserRule::get("body").as<jsbind::TypedArray<CSSParserValue>>();
}

