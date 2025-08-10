#include <webbind/CSS.hpp>
#include <webbind/Worklet.hpp>
#include <webbind/HighlightRegistry.hpp>
#include <webbind/CSSParserRule.hpp>
#include <webbind/CSSParserOptions.hpp>
#include <webbind/CSSParserDeclaration.hpp>
#include <webbind/PropertyDefinition.hpp>
#include <webbind/CSSUnitValue.hpp>

namespace webbind {

namespace CSS {

jsbind::String escape(const jsbind::String& ident) {
    return emlite::Val::global("css").call("escape", ident).as<jsbind::String>();
}

bool supports(const jsbind::String& conditionText) {
    return emlite::Val::global("css").call("supports", conditionText).as<bool>();
}

jsbind::Promise<jsbind::TypedArray<CSSParserRule>> parseStylesheet(const jsbind::Any& css) {
    return emlite::Val::global("css").call("parseStylesheet", css).as<jsbind::Promise<jsbind::TypedArray<CSSParserRule>>>();
}

jsbind::Promise<jsbind::TypedArray<CSSParserRule>> parseStylesheet(const jsbind::Any& css, const CSSParserOptions& options) {
    return emlite::Val::global("css").call("parseStylesheet", css, options).as<jsbind::Promise<jsbind::TypedArray<CSSParserRule>>>();
}

jsbind::Promise<jsbind::TypedArray<CSSParserRule>> parseRuleList(const jsbind::Any& css) {
    return emlite::Val::global("css").call("parseRuleList", css).as<jsbind::Promise<jsbind::TypedArray<CSSParserRule>>>();
}

jsbind::Promise<jsbind::TypedArray<CSSParserRule>> parseRuleList(const jsbind::Any& css, const CSSParserOptions& options) {
    return emlite::Val::global("css").call("parseRuleList", css, options).as<jsbind::Promise<jsbind::TypedArray<CSSParserRule>>>();
}

jsbind::Promise<CSSParserRule> parseRule(const jsbind::Any& css) {
    return emlite::Val::global("css").call("parseRule", css).as<jsbind::Promise<CSSParserRule>>();
}

jsbind::Promise<CSSParserRule> parseRule(const jsbind::Any& css, const CSSParserOptions& options) {
    return emlite::Val::global("css").call("parseRule", css, options).as<jsbind::Promise<CSSParserRule>>();
}

jsbind::Promise<jsbind::TypedArray<CSSParserRule>> parseDeclarationList(const jsbind::Any& css) {
    return emlite::Val::global("css").call("parseDeclarationList", css).as<jsbind::Promise<jsbind::TypedArray<CSSParserRule>>>();
}

jsbind::Promise<jsbind::TypedArray<CSSParserRule>> parseDeclarationList(const jsbind::Any& css, const CSSParserOptions& options) {
    return emlite::Val::global("css").call("parseDeclarationList", css, options).as<jsbind::Promise<jsbind::TypedArray<CSSParserRule>>>();
}

CSSParserDeclaration parseDeclaration(const jsbind::String& css) {
    return emlite::Val::global("css").call("parseDeclaration", css).as<CSSParserDeclaration>();
}

CSSParserDeclaration parseDeclaration(const jsbind::String& css, const CSSParserOptions& options) {
    return emlite::Val::global("css").call("parseDeclaration", css, options).as<CSSParserDeclaration>();
}

jsbind::Any parseValue(const jsbind::String& css) {
    return emlite::Val::global("css").call("parseValue", css).as<jsbind::Any>();
}

jsbind::TypedArray<jsbind::Any> parseValueList(const jsbind::String& css) {
    return emlite::Val::global("css").call("parseValueList", css).as<jsbind::TypedArray<jsbind::Any>>();
}

jsbind::TypedArray<jsbind::TypedArray<jsbind::Any>> parseCommaValueList(const jsbind::String& css) {
    return emlite::Val::global("css").call("parseCommaValueList", css).as<jsbind::TypedArray<jsbind::TypedArray<jsbind::Any>>>();
}

jsbind::Undefined registerProperty(const PropertyDefinition& definition) {
    return emlite::Val::global("css").call("registerProperty", definition).as<jsbind::Undefined>();
}

CSSUnitValue number(double value) {
    return emlite::Val::global("css").call("number", value).as<CSSUnitValue>();
}

CSSUnitValue percent(double value) {
    return emlite::Val::global("css").call("percent", value).as<CSSUnitValue>();
}

CSSUnitValue cap(double value) {
    return emlite::Val::global("css").call("cap", value).as<CSSUnitValue>();
}

CSSUnitValue ch(double value) {
    return emlite::Val::global("css").call("ch", value).as<CSSUnitValue>();
}

CSSUnitValue em(double value) {
    return emlite::Val::global("css").call("em", value).as<CSSUnitValue>();
}

CSSUnitValue ex(double value) {
    return emlite::Val::global("css").call("ex", value).as<CSSUnitValue>();
}

CSSUnitValue ic(double value) {
    return emlite::Val::global("css").call("ic", value).as<CSSUnitValue>();
}

CSSUnitValue lh(double value) {
    return emlite::Val::global("css").call("lh", value).as<CSSUnitValue>();
}

CSSUnitValue rcap(double value) {
    return emlite::Val::global("css").call("rcap", value).as<CSSUnitValue>();
}

CSSUnitValue rch(double value) {
    return emlite::Val::global("css").call("rch", value).as<CSSUnitValue>();
}

CSSUnitValue rem(double value) {
    return emlite::Val::global("css").call("rem", value).as<CSSUnitValue>();
}

CSSUnitValue rex(double value) {
    return emlite::Val::global("css").call("rex", value).as<CSSUnitValue>();
}

CSSUnitValue ric(double value) {
    return emlite::Val::global("css").call("ric", value).as<CSSUnitValue>();
}

CSSUnitValue rlh(double value) {
    return emlite::Val::global("css").call("rlh", value).as<CSSUnitValue>();
}

CSSUnitValue vw(double value) {
    return emlite::Val::global("css").call("vw", value).as<CSSUnitValue>();
}

CSSUnitValue vh(double value) {
    return emlite::Val::global("css").call("vh", value).as<CSSUnitValue>();
}

CSSUnitValue vi(double value) {
    return emlite::Val::global("css").call("vi", value).as<CSSUnitValue>();
}

CSSUnitValue vb(double value) {
    return emlite::Val::global("css").call("vb", value).as<CSSUnitValue>();
}

CSSUnitValue vmin(double value) {
    return emlite::Val::global("css").call("vmin", value).as<CSSUnitValue>();
}

CSSUnitValue vmax(double value) {
    return emlite::Val::global("css").call("vmax", value).as<CSSUnitValue>();
}

CSSUnitValue svw(double value) {
    return emlite::Val::global("css").call("svw", value).as<CSSUnitValue>();
}

CSSUnitValue svh(double value) {
    return emlite::Val::global("css").call("svh", value).as<CSSUnitValue>();
}

CSSUnitValue svi(double value) {
    return emlite::Val::global("css").call("svi", value).as<CSSUnitValue>();
}

CSSUnitValue svb(double value) {
    return emlite::Val::global("css").call("svb", value).as<CSSUnitValue>();
}

CSSUnitValue svmin(double value) {
    return emlite::Val::global("css").call("svmin", value).as<CSSUnitValue>();
}

CSSUnitValue svmax(double value) {
    return emlite::Val::global("css").call("svmax", value).as<CSSUnitValue>();
}

CSSUnitValue lvw(double value) {
    return emlite::Val::global("css").call("lvw", value).as<CSSUnitValue>();
}

CSSUnitValue lvh(double value) {
    return emlite::Val::global("css").call("lvh", value).as<CSSUnitValue>();
}

CSSUnitValue lvi(double value) {
    return emlite::Val::global("css").call("lvi", value).as<CSSUnitValue>();
}

CSSUnitValue lvb(double value) {
    return emlite::Val::global("css").call("lvb", value).as<CSSUnitValue>();
}

CSSUnitValue lvmin(double value) {
    return emlite::Val::global("css").call("lvmin", value).as<CSSUnitValue>();
}

CSSUnitValue lvmax(double value) {
    return emlite::Val::global("css").call("lvmax", value).as<CSSUnitValue>();
}

CSSUnitValue dvw(double value) {
    return emlite::Val::global("css").call("dvw", value).as<CSSUnitValue>();
}

CSSUnitValue dvh(double value) {
    return emlite::Val::global("css").call("dvh", value).as<CSSUnitValue>();
}

CSSUnitValue dvi(double value) {
    return emlite::Val::global("css").call("dvi", value).as<CSSUnitValue>();
}

CSSUnitValue dvb(double value) {
    return emlite::Val::global("css").call("dvb", value).as<CSSUnitValue>();
}

CSSUnitValue dvmin(double value) {
    return emlite::Val::global("css").call("dvmin", value).as<CSSUnitValue>();
}

CSSUnitValue dvmax(double value) {
    return emlite::Val::global("css").call("dvmax", value).as<CSSUnitValue>();
}

CSSUnitValue cqw(double value) {
    return emlite::Val::global("css").call("cqw", value).as<CSSUnitValue>();
}

CSSUnitValue cqh(double value) {
    return emlite::Val::global("css").call("cqh", value).as<CSSUnitValue>();
}

CSSUnitValue cqi(double value) {
    return emlite::Val::global("css").call("cqi", value).as<CSSUnitValue>();
}

CSSUnitValue cqb(double value) {
    return emlite::Val::global("css").call("cqb", value).as<CSSUnitValue>();
}

CSSUnitValue cqmin(double value) {
    return emlite::Val::global("css").call("cqmin", value).as<CSSUnitValue>();
}

CSSUnitValue cqmax(double value) {
    return emlite::Val::global("css").call("cqmax", value).as<CSSUnitValue>();
}

CSSUnitValue cm(double value) {
    return emlite::Val::global("css").call("cm", value).as<CSSUnitValue>();
}

CSSUnitValue mm(double value) {
    return emlite::Val::global("css").call("mm", value).as<CSSUnitValue>();
}

CSSUnitValue Q(double value) {
    return emlite::Val::global("css").call("Q", value).as<CSSUnitValue>();
}

CSSUnitValue in(double value) {
    return emlite::Val::global("css").call("in", value).as<CSSUnitValue>();
}

CSSUnitValue pt(double value) {
    return emlite::Val::global("css").call("pt", value).as<CSSUnitValue>();
}

CSSUnitValue pc(double value) {
    return emlite::Val::global("css").call("pc", value).as<CSSUnitValue>();
}

CSSUnitValue px(double value) {
    return emlite::Val::global("css").call("px", value).as<CSSUnitValue>();
}

CSSUnitValue deg(double value) {
    return emlite::Val::global("css").call("deg", value).as<CSSUnitValue>();
}

CSSUnitValue grad(double value) {
    return emlite::Val::global("css").call("grad", value).as<CSSUnitValue>();
}

CSSUnitValue rad(double value) {
    return emlite::Val::global("css").call("rad", value).as<CSSUnitValue>();
}

CSSUnitValue turn(double value) {
    return emlite::Val::global("css").call("turn", value).as<CSSUnitValue>();
}

CSSUnitValue s(double value) {
    return emlite::Val::global("css").call("s", value).as<CSSUnitValue>();
}

CSSUnitValue ms(double value) {
    return emlite::Val::global("css").call("ms", value).as<CSSUnitValue>();
}

CSSUnitValue Hz(double value) {
    return emlite::Val::global("css").call("Hz", value).as<CSSUnitValue>();
}

CSSUnitValue kHz(double value) {
    return emlite::Val::global("css").call("kHz", value).as<CSSUnitValue>();
}

CSSUnitValue dpi(double value) {
    return emlite::Val::global("css").call("dpi", value).as<CSSUnitValue>();
}

CSSUnitValue dpcm(double value) {
    return emlite::Val::global("css").call("dpcm", value).as<CSSUnitValue>();
}

CSSUnitValue dppx(double value) {
    return emlite::Val::global("css").call("dppx", value).as<CSSUnitValue>();
}

CSSUnitValue fr(double value) {
    return emlite::Val::global("css").call("fr", value).as<CSSUnitValue>();
}

} // namespace CSS

} // namespace webbind