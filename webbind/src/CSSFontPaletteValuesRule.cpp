#include <webbind/CSSFontPaletteValuesRule.hpp>


CSSFontPaletteValuesRule CSSFontPaletteValuesRule::take_ownership(Handle h) noexcept {
        return CSSFontPaletteValuesRule(h);
    }
CSSFontPaletteValuesRule CSSFontPaletteValuesRule::clone() const noexcept { return *this; }
CSSFontPaletteValuesRule::CSSFontPaletteValuesRule(Handle h) noexcept : CSSRule(emlite::Val::take_ownership(h)) {}
CSSFontPaletteValuesRule::CSSFontPaletteValuesRule(const emlite::Val &val) noexcept: CSSRule(val) {}


jsbind::CSSOMString CSSFontPaletteValuesRule::name() const {
    return CSSRule::get("name").as<jsbind::CSSOMString>();
}

jsbind::CSSOMString CSSFontPaletteValuesRule::fontFamily() const {
    return CSSRule::get("fontFamily").as<jsbind::CSSOMString>();
}

jsbind::CSSOMString CSSFontPaletteValuesRule::basePalette() const {
    return CSSRule::get("basePalette").as<jsbind::CSSOMString>();
}

jsbind::CSSOMString CSSFontPaletteValuesRule::overrideColors() const {
    return CSSRule::get("overrideColors").as<jsbind::CSSOMString>();
}

