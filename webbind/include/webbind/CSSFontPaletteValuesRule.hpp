#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "CSSRule.hpp"
#include "enums.hpp"


class CSSFontPaletteValuesRule : public CSSRule {
    explicit CSSFontPaletteValuesRule(Handle h) noexcept;

public:
    explicit CSSFontPaletteValuesRule(const emlite::Val &val) noexcept;
    static CSSFontPaletteValuesRule take_ownership(Handle h) noexcept;

    CSSFontPaletteValuesRule clone() const noexcept;
    jsbind::CSSOMString name() const;
    jsbind::CSSOMString fontFamily() const;
    jsbind::CSSOMString basePalette() const;
    jsbind::CSSOMString overrideColors() const;
};

