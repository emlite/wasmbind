#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"


/// The CSSFontFeatureValuesMap class.
/// [`CSSFontFeatureValuesMap`](https://developer.mozilla.org/en-US/docs/Web/API/CSSFontFeatureValuesMap)
class CSSFontFeatureValuesMap : public emlite::Val {
    explicit CSSFontFeatureValuesMap(Handle h) noexcept;

public:
    explicit CSSFontFeatureValuesMap(const emlite::Val &val) noexcept;
    static CSSFontFeatureValuesMap take_ownership(Handle h) noexcept;

    [[nodiscard]] CSSFontFeatureValuesMap clone() const noexcept;
    /// The set method.
    /// [`CSSFontFeatureValuesMap.set`](https://developer.mozilla.org/en-US/docs/Web/API/CSSFontFeatureValuesMap/set)
    jsbind::Undefined set(const jsbind::String& featureValueName, const jsbind::Any& values);
};

