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
    /// Getter of the `fontFamily` attribute.
    /// [`CSSFontFeatureValuesRule.fontFamily`](https://developer.mozilla.org/en-US/docs/Web/API/CSSFontFeatureValuesRule/fontFamily)
    [[nodiscard]] jsbind::String fontFamily() const;
    /// Setter of the `fontFamily` attribute.
    /// [`CSSFontFeatureValuesRule.fontFamily`](https://developer.mozilla.org/en-US/docs/Web/API/CSSFontFeatureValuesRule/fontFamily)
    void fontFamily(const jsbind::String& value);
    /// Getter of the `annotation` attribute.
    /// [`CSSFontFeatureValuesRule.annotation`](https://developer.mozilla.org/en-US/docs/Web/API/CSSFontFeatureValuesRule/annotation)
    [[nodiscard]] CSSFontFeatureValuesMap annotation() const;
    /// Getter of the `ornaments` attribute.
    /// [`CSSFontFeatureValuesRule.ornaments`](https://developer.mozilla.org/en-US/docs/Web/API/CSSFontFeatureValuesRule/ornaments)
    [[nodiscard]] CSSFontFeatureValuesMap ornaments() const;
    /// Getter of the `stylistic` attribute.
    /// [`CSSFontFeatureValuesRule.stylistic`](https://developer.mozilla.org/en-US/docs/Web/API/CSSFontFeatureValuesRule/stylistic)
    [[nodiscard]] CSSFontFeatureValuesMap stylistic() const;
    /// Getter of the `swash` attribute.
    /// [`CSSFontFeatureValuesRule.swash`](https://developer.mozilla.org/en-US/docs/Web/API/CSSFontFeatureValuesRule/swash)
    [[nodiscard]] CSSFontFeatureValuesMap swash() const;
    /// Getter of the `characterVariant` attribute.
    /// [`CSSFontFeatureValuesRule.characterVariant`](https://developer.mozilla.org/en-US/docs/Web/API/CSSFontFeatureValuesRule/characterVariant)
    [[nodiscard]] CSSFontFeatureValuesMap characterVariant() const;
    /// Getter of the `styleset` attribute.
    /// [`CSSFontFeatureValuesRule.styleset`](https://developer.mozilla.org/en-US/docs/Web/API/CSSFontFeatureValuesRule/styleset)
    [[nodiscard]] CSSFontFeatureValuesMap styleset() const;
    /// Getter of the `historicalForms` attribute.
    /// [`CSSFontFeatureValuesRule.historicalForms`](https://developer.mozilla.org/en-US/docs/Web/API/CSSFontFeatureValuesRule/historicalForms)
    [[nodiscard]] CSSFontFeatureValuesMap historicalForms() const;
};

} // namespace webbind