#include <webbind/CSSFontFeatureValuesMap.hpp>

namespace webbind {

CSSFontFeatureValuesMap CSSFontFeatureValuesMap::take_ownership(Handle h) noexcept {
        return CSSFontFeatureValuesMap(h);
    }
CSSFontFeatureValuesMap CSSFontFeatureValuesMap::clone() const noexcept { return *this; }
emlite::Val CSSFontFeatureValuesMap::instance() noexcept { return emlite::Val::global("CSSFontFeatureValuesMap"); }
CSSFontFeatureValuesMap::CSSFontFeatureValuesMap(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
CSSFontFeatureValuesMap::CSSFontFeatureValuesMap(const emlite::Val &val) noexcept: emlite::Val(val) {}

jsbind::Undefined CSSFontFeatureValuesMap::set(const jsbind::String& featureValueName, const jsbind::Any& values) {
    return emlite::Val::call("set", featureValueName, values).as<jsbind::Undefined>();
}


} // namespace webbind