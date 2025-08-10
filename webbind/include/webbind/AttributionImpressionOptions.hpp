#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type AttributionImpressionOptions
/// [`AttributionImpressionOptions`](https://developer.mozilla.org/en-US/docs/Web/API/AttributionImpressionOptions)
class AttributionImpressionOptions : public emlite::Val {
  explicit AttributionImpressionOptions(Handle h) noexcept;
public:
    static AttributionImpressionOptions take_ownership(Handle h) noexcept;
    explicit AttributionImpressionOptions(const emlite::Val &val) noexcept;
    AttributionImpressionOptions() noexcept;
    [[nodiscard]] AttributionImpressionOptions clone() const noexcept;
    [[nodiscard]] unsigned long histogramIndex() const;
    void histogramIndex(unsigned long value);
    [[nodiscard]] unsigned long matchValue() const;
    void matchValue(unsigned long value);
    [[nodiscard]] jsbind::TypedArray<jsbind::String> conversionSites() const;
    void conversionSites(const jsbind::TypedArray<jsbind::String>& value);
    [[nodiscard]] jsbind::TypedArray<jsbind::String> conversionCallers() const;
    void conversionCallers(const jsbind::TypedArray<jsbind::String>& value);
    [[nodiscard]] unsigned long lifetimeDays() const;
    void lifetimeDays(unsigned long value);
};

} // namespace webbind