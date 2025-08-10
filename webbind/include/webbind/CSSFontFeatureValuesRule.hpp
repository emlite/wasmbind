#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "CSSRule.hpp"

namespace webbind {

class CSSFontFeatureValuesMap;

/// Interface CSSFontFeatureValuesRule
/// [`CSSFontFeatureValuesRule`](https://developer.mozilla.org/en-US/docs/Web/API/CSSFontFeatureValuesRule)
class CSSFontFeatureValuesRule : public CSSRule {
    explicit CSSFontFeatureValuesRule(Handle h) noexcept;
public:
    explicit CSSFontFeatureValuesRule(const emlite::Val &val) noexcept;
    static CSSFontFeatureValuesRule take_ownership(Handle h) noexcept;
    [[nodiscard]] CSSFontFeatureValuesRule clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// [`CSSFontFeatureValuesRule.fontFamily`](https://developer.mozilla.org/en-US/docs/Web/API/CSSFontFeatureValuesRule/fontFamily)
    /// [`CSSFontFeatureValuesRule.fontFamily`](https://developer.mozilla.org/en-US/docs/Web/API/CSSFontFeatureValuesRule/fontFamily)
    [[nodiscard]] jsbind::String fontFamily() const;
    /// Setter of the `fontFamily` attribute.
    /// [`CSSFontFeatureValuesRule.fontFamily`](https://developer.mozilla.org/en-US/docs/Web/API/CSSFontFeatureValuesRule/fontFamily)
    void fontFamily(const jsbind::String& value);
    /// [`CSSFontFeatureValuesRule.annotation`](https://developer.mozilla.org/en-US/docs/Web/API/CSSFontFeatureValuesRule/annotation)
    /// [`CSSFontFeatureValuesRule.annotation`](https://developer.mozilla.org/en-US/docs/Web/API/CSSFontFeatureValuesRule/annotation)
    [[nodiscard]] CSSFontFeatureValuesMap annotation() const;
    /// [`CSSFontFeatureValuesRule.ornaments`](https://developer.mozilla.org/en-US/docs/Web/API/CSSFontFeatureValuesRule/ornaments)
    /// [`CSSFontFeatureValuesRule.ornaments`](https://developer.mozilla.org/en-US/docs/Web/API/CSSFontFeatureValuesRule/ornaments)
    [[nodiscard]] CSSFontFeatureValuesMap ornaments() const;
    /// [`CSSFontFeatureValuesRule.stylistic`](https://developer.mozilla.org/en-US/docs/Web/API/CSSFontFeatureValuesRule/stylistic)
    /// [`CSSFontFeatureValuesRule.stylistic`](https://developer.mozilla.org/en-US/docs/Web/API/CSSFontFeatureValuesRule/stylistic)
    [[nodiscard]] CSSFontFeatureValuesMap stylistic() const;
    /// [`CSSFontFeatureValuesRule.swash`](https://developer.mozilla.org/en-US/docs/Web/API/CSSFontFeatureValuesRule/swash)
    /// [`CSSFontFeatureValuesRule.swash`](https://developer.mozilla.org/en-US/docs/Web/API/CSSFontFeatureValuesRule/swash)
    [[nodiscard]] CSSFontFeatureValuesMap swash() const;
    /// [`CSSFontFeatureValuesRule.characterVariant`](https://developer.mozilla.org/en-US/docs/Web/API/CSSFontFeatureValuesRule/characterVariant)
    /// [`CSSFontFeatureValuesRule.characterVariant`](https://developer.mozilla.org/en-US/docs/Web/API/CSSFontFeatureValuesRule/characterVariant)
    [[nodiscard]] CSSFontFeatureValuesMap characterVariant() const;
    /// [`CSSFontFeatureValuesRule.styleset`](https://developer.mozilla.org/en-US/docs/Web/API/CSSFontFeatureValuesRule/styleset)
    /// [`CSSFontFeatureValuesRule.styleset`](https://developer.mozilla.org/en-US/docs/Web/API/CSSFontFeatureValuesRule/styleset)
    [[nodiscard]] CSSFontFeatureValuesMap styleset() const;
    /// [`CSSFontFeatureValuesRule.historicalForms`](https://developer.mozilla.org/en-US/docs/Web/API/CSSFontFeatureValuesRule/historicalForms)
    /// [`CSSFontFeatureValuesRule.historicalForms`](https://developer.mozilla.org/en-US/docs/Web/API/CSSFontFeatureValuesRule/historicalForms)
    [[nodiscard]] CSSFontFeatureValuesMap historicalForms() const;
};

} // namespace webbind