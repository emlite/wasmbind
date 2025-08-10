#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type AttributionImpressionOptions
class AttributionImpressionOptions : public emlite::Val {
  explicit AttributionImpressionOptions(Handle h) noexcept;
public:
    static AttributionImpressionOptions take_ownership(Handle h) noexcept;
    explicit AttributionImpressionOptions(const emlite::Val &val) noexcept;
    AttributionImpressionOptions() noexcept;
    [[nodiscard]] AttributionImpressionOptions clone() const noexcept;
    /// Getter of the `histogramIndex` attribute.
    [[nodiscard]] unsigned long histogramIndex() const;
    /// Setter of the `histogramIndex` attribute.
    void histogramIndex(unsigned long value);
    /// Getter of the `matchValue` attribute.
    [[nodiscard]] unsigned long matchValue() const;
    /// Setter of the `matchValue` attribute.
    void matchValue(unsigned long value);
    /// Getter of the `conversionSites` attribute.
    [[nodiscard]] jsbind::TypedArray<jsbind::String> conversionSites() const;
    /// Setter of the `conversionSites` attribute.
    void conversionSites(const jsbind::TypedArray<jsbind::String>& value);
    /// Getter of the `conversionCallers` attribute.
    [[nodiscard]] jsbind::TypedArray<jsbind::String> conversionCallers() const;
    /// Setter of the `conversionCallers` attribute.
    void conversionCallers(const jsbind::TypedArray<jsbind::String>& value);
    /// Getter of the `lifetimeDays` attribute.
    [[nodiscard]] unsigned long lifetimeDays() const;
    /// Setter of the `lifetimeDays` attribute.
    void lifetimeDays(unsigned long value);
};

} // namespace webbind