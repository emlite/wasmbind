#include <webbind/CSS.hpp>
#include <webbind/CSSUnitValue.hpp>
#include <webbind/CSSParserDeclaration.hpp>




bool CSS::supports(const jsbind::CSSOMString& property, const jsbind::CSSOMString& value) {
    return emlite::Val::global("css").call("supports", property, value).as<bool>();
}

bool CSS::supports(const jsbind::CSSOMString& conditionText) {
    return emlite::Val::global("css").call("supports", conditionText).as<bool>();
}











jsbind::Promise CSS::parseStylesheet(const jsbind::Any& css) {
    return emlite::Val::global("css").call("parseStylesheet", css).as<jsbind::Promise>();
}

jsbind::Promise CSS::parseStylesheet(const jsbind::Any& css, const jsbind::Any& options) {
    return emlite::Val::global("css").call("parseStylesheet", css, options).as<jsbind::Promise>();
}

jsbind::Promise CSS::parseRuleList(const jsbind::Any& css) {
    return emlite::Val::global("css").call("parseRuleList", css).as<jsbind::Promise>();
}

jsbind::Promise CSS::parseRuleList(const jsbind::Any& css, const jsbind::Any& options) {
    return emlite::Val::global("css").call("parseRuleList", css, options).as<jsbind::Promise>();
}

jsbind::Promise CSS::parseRule(const jsbind::Any& css) {
    return emlite::Val::global("css").call("parseRule", css).as<jsbind::Promise>();
}

jsbind::Promise CSS::parseRule(const jsbind::Any& css, const jsbind::Any& options) {
    return emlite::Val::global("css").call("parseRule", css, options).as<jsbind::Promise>();
}

jsbind::Promise CSS::parseDeclarationList(const jsbind::Any& css) {
    return emlite::Val::global("css").call("parseDeclarationList", css).as<jsbind::Promise>();
}

jsbind::Promise CSS::parseDeclarationList(const jsbind::Any& css, const jsbind::Any& options) {
    return emlite::Val::global("css").call("parseDeclarationList", css, options).as<jsbind::Promise>();
}

CSSParserDeclaration CSS::parseDeclaration(const jsbind::DOMString& css) {
    return emlite::Val::global("css").call("parseDeclaration", css).as<CSSParserDeclaration>();
}

CSSParserDeclaration CSS::parseDeclaration(const jsbind::DOMString& css, const jsbind::Any& options) {
    return emlite::Val::global("css").call("parseDeclaration", css, options).as<CSSParserDeclaration>();
}

jsbind::Any CSS::parseValue(const jsbind::DOMString& css) {
    return emlite::Val::global("css").call("parseValue", css).as<jsbind::Any>();
}

jsbind::Sequence<jsbind::Any> CSS::parseValueList(const jsbind::DOMString& css) {
    return emlite::Val::global("css").call("parseValueList", css).as<jsbind::Sequence<jsbind::Any>>();
}

jsbind::Sequence<jsbind::Sequence<jsbind::Any>> CSS::parseCommaValueList(const jsbind::DOMString& css) {
    return emlite::Val::global("css").call("parseCommaValueList", css).as<jsbind::Sequence<jsbind::Sequence<jsbind::Any>>>();
}



jsbind::Undefined CSS::registerProperty(const jsbind::Any& definition) {
    return emlite::Val::global("css").call("registerProperty", definition).as<jsbind::Undefined>();
}



CSSUnitValue CSS::number(double value) {
    return emlite::Val::global("css").call("number", value).as<CSSUnitValue>();
}

CSSUnitValue CSS::percent(double value) {
    return emlite::Val::global("css").call("percent", value).as<CSSUnitValue>();
}

CSSUnitValue CSS::cap(double value) {
    return emlite::Val::global("css").call("cap", value).as<CSSUnitValue>();
}

CSSUnitValue CSS::ch(double value) {
    return emlite::Val::global("css").call("ch", value).as<CSSUnitValue>();
}

CSSUnitValue CSS::em(double value) {
    return emlite::Val::global("css").call("em", value).as<CSSUnitValue>();
}

CSSUnitValue CSS::ex(double value) {
    return emlite::Val::global("css").call("ex", value).as<CSSUnitValue>();
}

CSSUnitValue CSS::ic(double value) {
    return emlite::Val::global("css").call("ic", value).as<CSSUnitValue>();
}

CSSUnitValue CSS::lh(double value) {
    return emlite::Val::global("css").call("lh", value).as<CSSUnitValue>();
}

CSSUnitValue CSS::rcap(double value) {
    return emlite::Val::global("css").call("rcap", value).as<CSSUnitValue>();
}

CSSUnitValue CSS::rch(double value) {
    return emlite::Val::global("css").call("rch", value).as<CSSUnitValue>();
}

CSSUnitValue CSS::rem(double value) {
    return emlite::Val::global("css").call("rem", value).as<CSSUnitValue>();
}

CSSUnitValue CSS::rex(double value) {
    return emlite::Val::global("css").call("rex", value).as<CSSUnitValue>();
}

CSSUnitValue CSS::ric(double value) {
    return emlite::Val::global("css").call("ric", value).as<CSSUnitValue>();
}

CSSUnitValue CSS::rlh(double value) {
    return emlite::Val::global("css").call("rlh", value).as<CSSUnitValue>();
}

CSSUnitValue CSS::vw(double value) {
    return emlite::Val::global("css").call("vw", value).as<CSSUnitValue>();
}

CSSUnitValue CSS::vh(double value) {
    return emlite::Val::global("css").call("vh", value).as<CSSUnitValue>();
}

CSSUnitValue CSS::vi(double value) {
    return emlite::Val::global("css").call("vi", value).as<CSSUnitValue>();
}

CSSUnitValue CSS::vb(double value) {
    return emlite::Val::global("css").call("vb", value).as<CSSUnitValue>();
}

CSSUnitValue CSS::vmin(double value) {
    return emlite::Val::global("css").call("vmin", value).as<CSSUnitValue>();
}

CSSUnitValue CSS::vmax(double value) {
    return emlite::Val::global("css").call("vmax", value).as<CSSUnitValue>();
}

CSSUnitValue CSS::svw(double value) {
    return emlite::Val::global("css").call("svw", value).as<CSSUnitValue>();
}

CSSUnitValue CSS::svh(double value) {
    return emlite::Val::global("css").call("svh", value).as<CSSUnitValue>();
}

CSSUnitValue CSS::svi(double value) {
    return emlite::Val::global("css").call("svi", value).as<CSSUnitValue>();
}

CSSUnitValue CSS::svb(double value) {
    return emlite::Val::global("css").call("svb", value).as<CSSUnitValue>();
}

CSSUnitValue CSS::svmin(double value) {
    return emlite::Val::global("css").call("svmin", value).as<CSSUnitValue>();
}

CSSUnitValue CSS::svmax(double value) {
    return emlite::Val::global("css").call("svmax", value).as<CSSUnitValue>();
}

CSSUnitValue CSS::lvw(double value) {
    return emlite::Val::global("css").call("lvw", value).as<CSSUnitValue>();
}

CSSUnitValue CSS::lvh(double value) {
    return emlite::Val::global("css").call("lvh", value).as<CSSUnitValue>();
}

CSSUnitValue CSS::lvi(double value) {
    return emlite::Val::global("css").call("lvi", value).as<CSSUnitValue>();
}

CSSUnitValue CSS::lvb(double value) {
    return emlite::Val::global("css").call("lvb", value).as<CSSUnitValue>();
}

CSSUnitValue CSS::lvmin(double value) {
    return emlite::Val::global("css").call("lvmin", value).as<CSSUnitValue>();
}

CSSUnitValue CSS::lvmax(double value) {
    return emlite::Val::global("css").call("lvmax", value).as<CSSUnitValue>();
}

CSSUnitValue CSS::dvw(double value) {
    return emlite::Val::global("css").call("dvw", value).as<CSSUnitValue>();
}

CSSUnitValue CSS::dvh(double value) {
    return emlite::Val::global("css").call("dvh", value).as<CSSUnitValue>();
}

CSSUnitValue CSS::dvi(double value) {
    return emlite::Val::global("css").call("dvi", value).as<CSSUnitValue>();
}

CSSUnitValue CSS::dvb(double value) {
    return emlite::Val::global("css").call("dvb", value).as<CSSUnitValue>();
}

CSSUnitValue CSS::dvmin(double value) {
    return emlite::Val::global("css").call("dvmin", value).as<CSSUnitValue>();
}

CSSUnitValue CSS::dvmax(double value) {
    return emlite::Val::global("css").call("dvmax", value).as<CSSUnitValue>();
}

CSSUnitValue CSS::cqw(double value) {
    return emlite::Val::global("css").call("cqw", value).as<CSSUnitValue>();
}

CSSUnitValue CSS::cqh(double value) {
    return emlite::Val::global("css").call("cqh", value).as<CSSUnitValue>();
}

CSSUnitValue CSS::cqi(double value) {
    return emlite::Val::global("css").call("cqi", value).as<CSSUnitValue>();
}

CSSUnitValue CSS::cqb(double value) {
    return emlite::Val::global("css").call("cqb", value).as<CSSUnitValue>();
}

CSSUnitValue CSS::cqmin(double value) {
    return emlite::Val::global("css").call("cqmin", value).as<CSSUnitValue>();
}

CSSUnitValue CSS::cqmax(double value) {
    return emlite::Val::global("css").call("cqmax", value).as<CSSUnitValue>();
}

CSSUnitValue CSS::cm(double value) {
    return emlite::Val::global("css").call("cm", value).as<CSSUnitValue>();
}

CSSUnitValue CSS::mm(double value) {
    return emlite::Val::global("css").call("mm", value).as<CSSUnitValue>();
}

CSSUnitValue CSS::Q(double value) {
    return emlite::Val::global("css").call("Q", value).as<CSSUnitValue>();
}

CSSUnitValue CSS::in(double value) {
    return emlite::Val::global("css").call("in", value).as<CSSUnitValue>();
}

CSSUnitValue CSS::pt(double value) {
    return emlite::Val::global("css").call("pt", value).as<CSSUnitValue>();
}

CSSUnitValue CSS::pc(double value) {
    return emlite::Val::global("css").call("pc", value).as<CSSUnitValue>();
}

CSSUnitValue CSS::px(double value) {
    return emlite::Val::global("css").call("px", value).as<CSSUnitValue>();
}

CSSUnitValue CSS::deg(double value) {
    return emlite::Val::global("css").call("deg", value).as<CSSUnitValue>();
}

CSSUnitValue CSS::grad(double value) {
    return emlite::Val::global("css").call("grad", value).as<CSSUnitValue>();
}

CSSUnitValue CSS::rad(double value) {
    return emlite::Val::global("css").call("rad", value).as<CSSUnitValue>();
}

CSSUnitValue CSS::turn(double value) {
    return emlite::Val::global("css").call("turn", value).as<CSSUnitValue>();
}

CSSUnitValue CSS::s(double value) {
    return emlite::Val::global("css").call("s", value).as<CSSUnitValue>();
}

CSSUnitValue CSS::ms(double value) {
    return emlite::Val::global("css").call("ms", value).as<CSSUnitValue>();
}

CSSUnitValue CSS::Hz(double value) {
    return emlite::Val::global("css").call("Hz", value).as<CSSUnitValue>();
}

CSSUnitValue CSS::kHz(double value) {
    return emlite::Val::global("css").call("kHz", value).as<CSSUnitValue>();
}

CSSUnitValue CSS::dpi(double value) {
    return emlite::Val::global("css").call("dpi", value).as<CSSUnitValue>();
}

CSSUnitValue CSS::dpcm(double value) {
    return emlite::Val::global("css").call("dpcm", value).as<CSSUnitValue>();
}

CSSUnitValue CSS::dppx(double value) {
    return emlite::Val::global("css").call("dppx", value).as<CSSUnitValue>();
}

CSSUnitValue CSS::fr(double value) {
    return emlite::Val::global("css").call("fr", value).as<CSSUnitValue>();
}



jsbind::CSSOMString CSS::escape(const jsbind::CSSOMString& ident) {
    return emlite::Val::global("css").call("escape", ident).as<jsbind::CSSOMString>();
}

