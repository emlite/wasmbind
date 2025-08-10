#include <webbind/CSSFontPaletteValuesRule.hpp>

namespace webbind {

CSSFontPaletteValuesRule CSSFontPaletteValuesRule::take_ownership(Handle h) noexcept {
        return CSSFontPaletteValuesRule(h);
    }
CSSFontPaletteValuesRule CSSFontPaletteValuesRule::clone() const noexcept { return *this; }
emlite::Val CSSFontPaletteValuesRule::instance() noexcept { return emlite::Val::global("CSSFontPaletteValuesRule"); }
CSSFontPaletteValuesRule::CSSFontPaletteValuesRule(Handle h) noexcept : CSSRule(emlite::Val::take_ownership(h)) {}
CSSFontPaletteValuesRule::CSSFontPaletteValuesRule(const emlite::Val &val) noexcept: CSSRule(val) {}

jsbind::String CSSFontPaletteValuesRule::name() const {
    return CSSRule::get("name").as<jsbind::String>();
}

jsbind::String CSSFontPaletteValuesRule::fontFamily() const {
    return CSSRule::get("fontFamily").as<jsbind::String>();
}

jsbind::String CSSFontPaletteValuesRule::basePalette() const {
    return CSSRule::get("basePalette").as<jsbind::String>();
}

jsbind::String CSSFontPaletteValuesRule::overrideColors() const {
    return CSSRule::get("overrideColors").as<jsbind::String>();
}


} // namespace webbind