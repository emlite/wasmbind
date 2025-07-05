#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

class CSSUnitValue;
class CSSParserDeclaration;


namespace CSS {
} // namespace CSS



namespace CSS {
    bool supports(const jsbind::CSSOMString& property, const jsbind::CSSOMString& value);
    bool supports(const jsbind::CSSOMString& conditionText);
} // namespace CSS



namespace CSS {
} // namespace CSS



namespace CSS {
} // namespace CSS



namespace CSS {
} // namespace CSS



namespace CSS {
} // namespace CSS



namespace CSS {
    jsbind::Promise parseStylesheet(const jsbind::Any& css);
    jsbind::Promise parseStylesheet(const jsbind::Any& css, const jsbind::Any& options);
    jsbind::Promise parseRuleList(const jsbind::Any& css);
    jsbind::Promise parseRuleList(const jsbind::Any& css, const jsbind::Any& options);
    jsbind::Promise parseRule(const jsbind::Any& css);
    jsbind::Promise parseRule(const jsbind::Any& css, const jsbind::Any& options);
    jsbind::Promise parseDeclarationList(const jsbind::Any& css);
    jsbind::Promise parseDeclarationList(const jsbind::Any& css, const jsbind::Any& options);
    CSSParserDeclaration parseDeclaration(const jsbind::DOMString& css);
    CSSParserDeclaration parseDeclaration(const jsbind::DOMString& css, const jsbind::Any& options);
    jsbind::Any parseValue(const jsbind::DOMString& css);
    jsbind::Sequence<jsbind::Any> parseValueList(const jsbind::DOMString& css);
    jsbind::Sequence<jsbind::Sequence<jsbind::Any>> parseCommaValueList(const jsbind::DOMString& css);
} // namespace CSS



namespace CSS {
    jsbind::Undefined registerProperty(const jsbind::Any& definition);
} // namespace CSS



namespace CSS {
    CSSUnitValue number(double value);
    CSSUnitValue percent(double value);
    CSSUnitValue cap(double value);
    CSSUnitValue ch(double value);
    CSSUnitValue em(double value);
    CSSUnitValue ex(double value);
    CSSUnitValue ic(double value);
    CSSUnitValue lh(double value);
    CSSUnitValue rcap(double value);
    CSSUnitValue rch(double value);
    CSSUnitValue rem(double value);
    CSSUnitValue rex(double value);
    CSSUnitValue ric(double value);
    CSSUnitValue rlh(double value);
    CSSUnitValue vw(double value);
    CSSUnitValue vh(double value);
    CSSUnitValue vi(double value);
    CSSUnitValue vb(double value);
    CSSUnitValue vmin(double value);
    CSSUnitValue vmax(double value);
    CSSUnitValue svw(double value);
    CSSUnitValue svh(double value);
    CSSUnitValue svi(double value);
    CSSUnitValue svb(double value);
    CSSUnitValue svmin(double value);
    CSSUnitValue svmax(double value);
    CSSUnitValue lvw(double value);
    CSSUnitValue lvh(double value);
    CSSUnitValue lvi(double value);
    CSSUnitValue lvb(double value);
    CSSUnitValue lvmin(double value);
    CSSUnitValue lvmax(double value);
    CSSUnitValue dvw(double value);
    CSSUnitValue dvh(double value);
    CSSUnitValue dvi(double value);
    CSSUnitValue dvb(double value);
    CSSUnitValue dvmin(double value);
    CSSUnitValue dvmax(double value);
    CSSUnitValue cqw(double value);
    CSSUnitValue cqh(double value);
    CSSUnitValue cqi(double value);
    CSSUnitValue cqb(double value);
    CSSUnitValue cqmin(double value);
    CSSUnitValue cqmax(double value);
    CSSUnitValue cm(double value);
    CSSUnitValue mm(double value);
    CSSUnitValue Q(double value);
    CSSUnitValue in(double value);
    CSSUnitValue pt(double value);
    CSSUnitValue pc(double value);
    CSSUnitValue px(double value);
    CSSUnitValue deg(double value);
    CSSUnitValue grad(double value);
    CSSUnitValue rad(double value);
    CSSUnitValue turn(double value);
    CSSUnitValue s(double value);
    CSSUnitValue ms(double value);
    CSSUnitValue Hz(double value);
    CSSUnitValue kHz(double value);
    CSSUnitValue dpi(double value);
    CSSUnitValue dpcm(double value);
    CSSUnitValue dppx(double value);
    CSSUnitValue fr(double value);
} // namespace CSS



namespace CSS {
    jsbind::CSSOMString escape(const jsbind::CSSOMString& ident);
} // namespace CSS

