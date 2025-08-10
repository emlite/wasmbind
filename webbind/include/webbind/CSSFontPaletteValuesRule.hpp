#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "CSSRule.hpp"

namespace webbind {

/// Interface CSSFontPaletteValuesRule
/// [`CSSFontPaletteValuesRule`](https://developer.mozilla.org/en-US/docs/Web/API/CSSFontPaletteValuesRule)
class CSSFontPaletteValuesRule : public CSSRule {
    explicit CSSFontPaletteValuesRule(Handle h) noexcept;
public:
    explicit CSSFontPaletteValuesRule(const emlite::Val &val) noexcept;
    static CSSFontPaletteValuesRule take_ownership(Handle h) noexcept;
    [[nodiscard]] CSSFontPaletteValuesRule clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// [`CSSFontPaletteValuesRule.name`](https://developer.mozilla.org/en-US/docs/Web/API/CSSFontPaletteValuesRule/name)
    /// [`CSSFontPaletteValuesRule.name`](https://developer.mozilla.org/en-US/docs/Web/API/CSSFontPaletteValuesRule/name)
    [[nodiscard]] jsbind::String name() const;
    /// [`CSSFontPaletteValuesRule.fontFamily`](https://developer.mozilla.org/en-US/docs/Web/API/CSSFontPaletteValuesRule/fontFamily)
    /// [`CSSFontPaletteValuesRule.fontFamily`](https://developer.mozilla.org/en-US/docs/Web/API/CSSFontPaletteValuesRule/fontFamily)
    [[nodiscard]] jsbind::String fontFamily() const;
    /// [`CSSFontPaletteValuesRule.basePalette`](https://developer.mozilla.org/en-US/docs/Web/API/CSSFontPaletteValuesRule/basePalette)
    /// [`CSSFontPaletteValuesRule.basePalette`](https://developer.mozilla.org/en-US/docs/Web/API/CSSFontPaletteValuesRule/basePalette)
    [[nodiscard]] jsbind::String basePalette() const;
    /// [`CSSFontPaletteValuesRule.overrideColors`](https://developer.mozilla.org/en-US/docs/Web/API/CSSFontPaletteValuesRule/overrideColors)
    /// [`CSSFontPaletteValuesRule.overrideColors`](https://developer.mozilla.org/en-US/docs/Web/API/CSSFontPaletteValuesRule/overrideColors)
    [[nodiscard]] jsbind::String overrideColors() const;
};

} // namespace webbind