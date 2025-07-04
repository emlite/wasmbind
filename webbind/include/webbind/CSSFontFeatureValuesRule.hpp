#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "CSSRule.hpp"
#include "enums.hpp"

class CSSFontFeatureValuesMap;


class CSSFontFeatureValuesRule : public CSSRule {
    explicit CSSFontFeatureValuesRule(Handle h) noexcept;

public:
    explicit CSSFontFeatureValuesRule(const emlite::Val &val) noexcept;
    static CSSFontFeatureValuesRule take_ownership(Handle h) noexcept;

    CSSFontFeatureValuesRule clone() const noexcept;
    jsbind::CSSOMString fontFamily() const;
    void fontFamily(const jsbind::CSSOMString& value);
    CSSFontFeatureValuesMap annotation() const;
    CSSFontFeatureValuesMap ornaments() const;
    CSSFontFeatureValuesMap stylistic() const;
    CSSFontFeatureValuesMap swash() const;
    CSSFontFeatureValuesMap characterVariant() const;
    CSSFontFeatureValuesMap styleset() const;
    CSSFontFeatureValuesMap historicalForms() const;
};

