#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"


class CSSFontFeatureValuesMap : public emlite::Val {
    explicit CSSFontFeatureValuesMap(Handle h) noexcept;

public:
    explicit CSSFontFeatureValuesMap(const emlite::Val &val) noexcept;
    static CSSFontFeatureValuesMap take_ownership(Handle h) noexcept;

    CSSFontFeatureValuesMap clone() const noexcept;
    jsbind::Undefined set(const jsbind::CSSOMString& featureValueName, const jsbind::Any& values);
};

