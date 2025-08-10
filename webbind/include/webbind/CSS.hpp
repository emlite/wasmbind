#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>


namespace webbind {

class Worklet;
class HighlightRegistry;
class CSSParserRule;
class CSSParserOptions;
class CSSParserDeclaration;
class PropertyDefinition;
class CSSUnitValue;

/// Namespace CSS
/// [`CSS`](https://developer.mozilla.org/en-US/docs/Web/API/CSS)
namespace CSS {
    /// The escape function.
    /// [`CSS.escape`](https://developer.mozilla.org/en-US/docs/Web/API/CSS/escape)
    jsbind::String escape(const jsbind::String& ident);
    /// The supports function.
    /// [`CSS.supports`](https://developer.mozilla.org/en-US/docs/Web/API/CSS/supports)
    bool supports(const jsbind::String& conditionText);
    /// The parseStylesheet function.
    /// [`CSS.parseStylesheet`](https://developer.mozilla.org/en-US/docs/Web/API/CSS/parseStylesheet)
    jsbind::Promise<jsbind::TypedArray<CSSParserRule>> parseStylesheet(const jsbind::Any& css);
    /// The parseStylesheet function.
    /// [`CSS.parseStylesheet`](https://developer.mozilla.org/en-US/docs/Web/API/CSS/parseStylesheet)
    jsbind::Promise<jsbind::TypedArray<CSSParserRule>> parseStylesheet(const jsbind::Any& css, const CSSParserOptions& options);
    /// The parseRuleList function.
    /// [`CSS.parseRuleList`](https://developer.mozilla.org/en-US/docs/Web/API/CSS/parseRuleList)
    jsbind::Promise<jsbind::TypedArray<CSSParserRule>> parseRuleList(const jsbind::Any& css);
    /// The parseRuleList function.
    /// [`CSS.parseRuleList`](https://developer.mozilla.org/en-US/docs/Web/API/CSS/parseRuleList)
    jsbind::Promise<jsbind::TypedArray<CSSParserRule>> parseRuleList(const jsbind::Any& css, const CSSParserOptions& options);
    /// The parseRule function.
    /// [`CSS.parseRule`](https://developer.mozilla.org/en-US/docs/Web/API/CSS/parseRule)
    jsbind::Promise<CSSParserRule> parseRule(const jsbind::Any& css);
    /// The parseRule function.
    /// [`CSS.parseRule`](https://developer.mozilla.org/en-US/docs/Web/API/CSS/parseRule)
    jsbind::Promise<CSSParserRule> parseRule(const jsbind::Any& css, const CSSParserOptions& options);
    /// The parseDeclarationList function.
    /// [`CSS.parseDeclarationList`](https://developer.mozilla.org/en-US/docs/Web/API/CSS/parseDeclarationList)
    jsbind::Promise<jsbind::TypedArray<CSSParserRule>> parseDeclarationList(const jsbind::Any& css);
    /// The parseDeclarationList function.
    /// [`CSS.parseDeclarationList`](https://developer.mozilla.org/en-US/docs/Web/API/CSS/parseDeclarationList)
    jsbind::Promise<jsbind::TypedArray<CSSParserRule>> parseDeclarationList(const jsbind::Any& css, const CSSParserOptions& options);
    /// The parseDeclaration function.
    /// [`CSS.parseDeclaration`](https://developer.mozilla.org/en-US/docs/Web/API/CSS/parseDeclaration)
    CSSParserDeclaration parseDeclaration(const jsbind::String& css);
    /// The parseDeclaration function.
    /// [`CSS.parseDeclaration`](https://developer.mozilla.org/en-US/docs/Web/API/CSS/parseDeclaration)
    CSSParserDeclaration parseDeclaration(const jsbind::String& css, const CSSParserOptions& options);
    /// The parseValue function.
    /// [`CSS.parseValue`](https://developer.mozilla.org/en-US/docs/Web/API/CSS/parseValue)
    jsbind::Any parseValue(const jsbind::String& css);
    /// The parseValueList function.
    /// [`CSS.parseValueList`](https://developer.mozilla.org/en-US/docs/Web/API/CSS/parseValueList)
    jsbind::TypedArray<jsbind::Any> parseValueList(const jsbind::String& css);
    /// The parseCommaValueList function.
    /// [`CSS.parseCommaValueList`](https://developer.mozilla.org/en-US/docs/Web/API/CSS/parseCommaValueList)
    jsbind::TypedArray<jsbind::TypedArray<jsbind::Any>> parseCommaValueList(const jsbind::String& css);
    /// The registerProperty function.
    /// [`CSS.registerProperty`](https://developer.mozilla.org/en-US/docs/Web/API/CSS/registerProperty)
    jsbind::Undefined registerProperty(const PropertyDefinition& definition);
    /// The number function.
    /// [`CSS.number`](https://developer.mozilla.org/en-US/docs/Web/API/CSS/number)
    CSSUnitValue number(double value);
    /// The percent function.
    /// [`CSS.percent`](https://developer.mozilla.org/en-US/docs/Web/API/CSS/percent)
    CSSUnitValue percent(double value);
    /// The cap function.
    /// [`CSS.cap`](https://developer.mozilla.org/en-US/docs/Web/API/CSS/cap)
    CSSUnitValue cap(double value);
    /// The ch function.
    /// [`CSS.ch`](https://developer.mozilla.org/en-US/docs/Web/API/CSS/ch)
    CSSUnitValue ch(double value);
    /// The em function.
    /// [`CSS.em`](https://developer.mozilla.org/en-US/docs/Web/API/CSS/em)
    CSSUnitValue em(double value);
    /// The ex function.
    /// [`CSS.ex`](https://developer.mozilla.org/en-US/docs/Web/API/CSS/ex)
    CSSUnitValue ex(double value);
    /// The ic function.
    /// [`CSS.ic`](https://developer.mozilla.org/en-US/docs/Web/API/CSS/ic)
    CSSUnitValue ic(double value);
    /// The lh function.
    /// [`CSS.lh`](https://developer.mozilla.org/en-US/docs/Web/API/CSS/lh)
    CSSUnitValue lh(double value);
    /// The rcap function.
    /// [`CSS.rcap`](https://developer.mozilla.org/en-US/docs/Web/API/CSS/rcap)
    CSSUnitValue rcap(double value);
    /// The rch function.
    /// [`CSS.rch`](https://developer.mozilla.org/en-US/docs/Web/API/CSS/rch)
    CSSUnitValue rch(double value);
    /// The rem function.
    /// [`CSS.rem`](https://developer.mozilla.org/en-US/docs/Web/API/CSS/rem)
    CSSUnitValue rem(double value);
    /// The rex function.
    /// [`CSS.rex`](https://developer.mozilla.org/en-US/docs/Web/API/CSS/rex)
    CSSUnitValue rex(double value);
    /// The ric function.
    /// [`CSS.ric`](https://developer.mozilla.org/en-US/docs/Web/API/CSS/ric)
    CSSUnitValue ric(double value);
    /// The rlh function.
    /// [`CSS.rlh`](https://developer.mozilla.org/en-US/docs/Web/API/CSS/rlh)
    CSSUnitValue rlh(double value);
    /// The vw function.
    /// [`CSS.vw`](https://developer.mozilla.org/en-US/docs/Web/API/CSS/vw)
    CSSUnitValue vw(double value);
    /// The vh function.
    /// [`CSS.vh`](https://developer.mozilla.org/en-US/docs/Web/API/CSS/vh)
    CSSUnitValue vh(double value);
    /// The vi function.
    /// [`CSS.vi`](https://developer.mozilla.org/en-US/docs/Web/API/CSS/vi)
    CSSUnitValue vi(double value);
    /// The vb function.
    /// [`CSS.vb`](https://developer.mozilla.org/en-US/docs/Web/API/CSS/vb)
    CSSUnitValue vb(double value);
    /// The vmin function.
    /// [`CSS.vmin`](https://developer.mozilla.org/en-US/docs/Web/API/CSS/vmin)
    CSSUnitValue vmin(double value);
    /// The vmax function.
    /// [`CSS.vmax`](https://developer.mozilla.org/en-US/docs/Web/API/CSS/vmax)
    CSSUnitValue vmax(double value);
    /// The svw function.
    /// [`CSS.svw`](https://developer.mozilla.org/en-US/docs/Web/API/CSS/svw)
    CSSUnitValue svw(double value);
    /// The svh function.
    /// [`CSS.svh`](https://developer.mozilla.org/en-US/docs/Web/API/CSS/svh)
    CSSUnitValue svh(double value);
    /// The svi function.
    /// [`CSS.svi`](https://developer.mozilla.org/en-US/docs/Web/API/CSS/svi)
    CSSUnitValue svi(double value);
    /// The svb function.
    /// [`CSS.svb`](https://developer.mozilla.org/en-US/docs/Web/API/CSS/svb)
    CSSUnitValue svb(double value);
    /// The svmin function.
    /// [`CSS.svmin`](https://developer.mozilla.org/en-US/docs/Web/API/CSS/svmin)
    CSSUnitValue svmin(double value);
    /// The svmax function.
    /// [`CSS.svmax`](https://developer.mozilla.org/en-US/docs/Web/API/CSS/svmax)
    CSSUnitValue svmax(double value);
    /// The lvw function.
    /// [`CSS.lvw`](https://developer.mozilla.org/en-US/docs/Web/API/CSS/lvw)
    CSSUnitValue lvw(double value);
    /// The lvh function.
    /// [`CSS.lvh`](https://developer.mozilla.org/en-US/docs/Web/API/CSS/lvh)
    CSSUnitValue lvh(double value);
    /// The lvi function.
    /// [`CSS.lvi`](https://developer.mozilla.org/en-US/docs/Web/API/CSS/lvi)
    CSSUnitValue lvi(double value);
    /// The lvb function.
    /// [`CSS.lvb`](https://developer.mozilla.org/en-US/docs/Web/API/CSS/lvb)
    CSSUnitValue lvb(double value);
    /// The lvmin function.
    /// [`CSS.lvmin`](https://developer.mozilla.org/en-US/docs/Web/API/CSS/lvmin)
    CSSUnitValue lvmin(double value);
    /// The lvmax function.
    /// [`CSS.lvmax`](https://developer.mozilla.org/en-US/docs/Web/API/CSS/lvmax)
    CSSUnitValue lvmax(double value);
    /// The dvw function.
    /// [`CSS.dvw`](https://developer.mozilla.org/en-US/docs/Web/API/CSS/dvw)
    CSSUnitValue dvw(double value);
    /// The dvh function.
    /// [`CSS.dvh`](https://developer.mozilla.org/en-US/docs/Web/API/CSS/dvh)
    CSSUnitValue dvh(double value);
    /// The dvi function.
    /// [`CSS.dvi`](https://developer.mozilla.org/en-US/docs/Web/API/CSS/dvi)
    CSSUnitValue dvi(double value);
    /// The dvb function.
    /// [`CSS.dvb`](https://developer.mozilla.org/en-US/docs/Web/API/CSS/dvb)
    CSSUnitValue dvb(double value);
    /// The dvmin function.
    /// [`CSS.dvmin`](https://developer.mozilla.org/en-US/docs/Web/API/CSS/dvmin)
    CSSUnitValue dvmin(double value);
    /// The dvmax function.
    /// [`CSS.dvmax`](https://developer.mozilla.org/en-US/docs/Web/API/CSS/dvmax)
    CSSUnitValue dvmax(double value);
    /// The cqw function.
    /// [`CSS.cqw`](https://developer.mozilla.org/en-US/docs/Web/API/CSS/cqw)
    CSSUnitValue cqw(double value);
    /// The cqh function.
    /// [`CSS.cqh`](https://developer.mozilla.org/en-US/docs/Web/API/CSS/cqh)
    CSSUnitValue cqh(double value);
    /// The cqi function.
    /// [`CSS.cqi`](https://developer.mozilla.org/en-US/docs/Web/API/CSS/cqi)
    CSSUnitValue cqi(double value);
    /// The cqb function.
    /// [`CSS.cqb`](https://developer.mozilla.org/en-US/docs/Web/API/CSS/cqb)
    CSSUnitValue cqb(double value);
    /// The cqmin function.
    /// [`CSS.cqmin`](https://developer.mozilla.org/en-US/docs/Web/API/CSS/cqmin)
    CSSUnitValue cqmin(double value);
    /// The cqmax function.
    /// [`CSS.cqmax`](https://developer.mozilla.org/en-US/docs/Web/API/CSS/cqmax)
    CSSUnitValue cqmax(double value);
    /// The cm function.
    /// [`CSS.cm`](https://developer.mozilla.org/en-US/docs/Web/API/CSS/cm)
    CSSUnitValue cm(double value);
    /// The mm function.
    /// [`CSS.mm`](https://developer.mozilla.org/en-US/docs/Web/API/CSS/mm)
    CSSUnitValue mm(double value);
    /// The Q function.
    /// [`CSS.Q`](https://developer.mozilla.org/en-US/docs/Web/API/CSS/Q)
    CSSUnitValue Q(double value);
    /// The in function.
    /// [`CSS.in`](https://developer.mozilla.org/en-US/docs/Web/API/CSS/in)
    CSSUnitValue in(double value);
    /// The pt function.
    /// [`CSS.pt`](https://developer.mozilla.org/en-US/docs/Web/API/CSS/pt)
    CSSUnitValue pt(double value);
    /// The pc function.
    /// [`CSS.pc`](https://developer.mozilla.org/en-US/docs/Web/API/CSS/pc)
    CSSUnitValue pc(double value);
    /// The px function.
    /// [`CSS.px`](https://developer.mozilla.org/en-US/docs/Web/API/CSS/px)
    CSSUnitValue px(double value);
    /// The deg function.
    /// [`CSS.deg`](https://developer.mozilla.org/en-US/docs/Web/API/CSS/deg)
    CSSUnitValue deg(double value);
    /// The grad function.
    /// [`CSS.grad`](https://developer.mozilla.org/en-US/docs/Web/API/CSS/grad)
    CSSUnitValue grad(double value);
    /// The rad function.
    /// [`CSS.rad`](https://developer.mozilla.org/en-US/docs/Web/API/CSS/rad)
    CSSUnitValue rad(double value);
    /// The turn function.
    /// [`CSS.turn`](https://developer.mozilla.org/en-US/docs/Web/API/CSS/turn)
    CSSUnitValue turn(double value);
    /// The s function.
    /// [`CSS.s`](https://developer.mozilla.org/en-US/docs/Web/API/CSS/s)
    CSSUnitValue s(double value);
    /// The ms function.
    /// [`CSS.ms`](https://developer.mozilla.org/en-US/docs/Web/API/CSS/ms)
    CSSUnitValue ms(double value);
    /// The Hz function.
    /// [`CSS.Hz`](https://developer.mozilla.org/en-US/docs/Web/API/CSS/Hz)
    CSSUnitValue Hz(double value);
    /// The kHz function.
    /// [`CSS.kHz`](https://developer.mozilla.org/en-US/docs/Web/API/CSS/kHz)
    CSSUnitValue kHz(double value);
    /// The dpi function.
    /// [`CSS.dpi`](https://developer.mozilla.org/en-US/docs/Web/API/CSS/dpi)
    CSSUnitValue dpi(double value);
    /// The dpcm function.
    /// [`CSS.dpcm`](https://developer.mozilla.org/en-US/docs/Web/API/CSS/dpcm)
    CSSUnitValue dpcm(double value);
    /// The dppx function.
    /// [`CSS.dppx`](https://developer.mozilla.org/en-US/docs/Web/API/CSS/dppx)
    CSSUnitValue dppx(double value);
    /// The fr function.
    /// [`CSS.fr`](https://developer.mozilla.org/en-US/docs/Web/API/CSS/fr)
    CSSUnitValue fr(double value);
} // namespace CSS

} // namespace webbind