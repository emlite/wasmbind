#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "CSSRule.hpp"
#include "enums.hpp"


/// The CSSFontPaletteValuesRule class.
/// [`CSSFontPaletteValuesRule`](https://developer.mozilla.org/en-US/docs/Web/API/CSSFontPaletteValuesRule)
class CSSFontPaletteValuesRule : public CSSRule {
    explicit CSSFontPaletteValuesRule(Handle h) noexcept;

public:
    explicit CSSFontPaletteValuesRule(const emlite::Val &val) noexcept;
    static CSSFontPaletteValuesRule take_ownership(Handle h) noexcept;

    [[nodiscard]] CSSFontPaletteValuesRule clone() const noexcept;
    /// Getter of the `name` attribute.
    /// [`CSSFontPaletteValuesRule.name`](https://developer.mozilla.org/en-US/docs/Web/API/CSSFontPaletteValuesRule/name)
    [[nodiscard]] jsbind::String name() const;
    /// Getter of the `fontFamily` attribute.
    /// [`CSSFontPaletteValuesRule.fontFamily`](https://developer.mozilla.org/en-US/docs/Web/API/CSSFontPaletteValuesRule/fontFamily)
    [[nodiscard]] jsbind::String fontFamily() const;
    /// Getter of the `basePalette` attribute.
    /// [`CSSFontPaletteValuesRule.basePalette`](https://developer.mozilla.org/en-US/docs/Web/API/CSSFontPaletteValuesRule/basePalette)
    [[nodiscard]] jsbind::String basePalette() const;
    /// Getter of the `overrideColors` attribute.
    /// [`CSSFontPaletteValuesRule.overrideColors`](https://developer.mozilla.org/en-US/docs/Web/API/CSSFontPaletteValuesRule/overrideColors)
    [[nodiscard]] jsbind::String overrideColors() const;
};

