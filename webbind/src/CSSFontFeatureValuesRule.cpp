#include <webbind/CSSFontFeatureValuesRule.hpp>
#include <webbind/CSSFontFeatureValuesMap.hpp>

namespace webbind {

CSSFontFeatureValuesRule CSSFontFeatureValuesRule::take_ownership(Handle h) noexcept {
    return CSSFontFeatureValuesRule(h);
}

CSSFontFeatureValuesRule CSSFontFeatureValuesRule::clone() const noexcept { return *this; }

emlite::Val CSSFontFeatureValuesRule::instance() noexcept { return emlite::Val::global("CSSFontFeatureValuesRule"); }

CSSFontFeatureValuesRule::CSSFontFeatureValuesRule(Handle h) noexcept : CSSRule(emlite::Val::take_ownership(h)) {}

CSSFontFeatureValuesRule::CSSFontFeatureValuesRule(const emlite::Val &val) noexcept: CSSRule(val) {}

jsbind::String CSSFontFeatureValuesRule::fontFamily() const {
    return CSSRule::get("fontFamily").as<jsbind::String>();
}

void CSSFontFeatureValuesRule::fontFamily(const jsbind::String& value) {
    CSSRule::set("fontFamily", value);
}

CSSFontFeatureValuesMap CSSFontFeatureValuesRule::annotation() const {
    return CSSRule::get("annotation").as<CSSFontFeatureValuesMap>();
}

CSSFontFeatureValuesMap CSSFontFeatureValuesRule::ornaments() const {
    return CSSRule::get("ornaments").as<CSSFontFeatureValuesMap>();
}

CSSFontFeatureValuesMap CSSFontFeatureValuesRule::stylistic() const {
    return CSSRule::get("stylistic").as<CSSFontFeatureValuesMap>();
}

CSSFontFeatureValuesMap CSSFontFeatureValuesRule::swash() const {
    return CSSRule::get("swash").as<CSSFontFeatureValuesMap>();
}

CSSFontFeatureValuesMap CSSFontFeatureValuesRule::characterVariant() const {
    return CSSRule::get("characterVariant").as<CSSFontFeatureValuesMap>();
}

CSSFontFeatureValuesMap CSSFontFeatureValuesRule::styleset() const {
    return CSSRule::get("styleset").as<CSSFontFeatureValuesMap>();
}

CSSFontFeatureValuesMap CSSFontFeatureValuesRule::historicalForms() const {
    return CSSRule::get("historicalForms").as<CSSFontFeatureValuesMap>();
}


} // namespace webbind