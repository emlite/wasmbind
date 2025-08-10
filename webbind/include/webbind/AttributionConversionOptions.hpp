#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type AttributionConversionOptions
class AttributionConversionOptions : public emlite::Val {
  explicit AttributionConversionOptions(Handle h) noexcept;
public:
    static AttributionConversionOptions take_ownership(Handle h) noexcept;
    explicit AttributionConversionOptions(const emlite::Val &val) noexcept;
    AttributionConversionOptions() noexcept;
    [[nodiscard]] AttributionConversionOptions clone() const noexcept;
    /// Getter of the `aggregationService` attribute.
    [[nodiscard]] jsbind::String aggregationService() const;
    /// Setter of the `aggregationService` attribute.
    void aggregationService(const jsbind::String& value);
    /// Getter of the `epsilon` attribute.
    [[nodiscard]] double epsilon() const;
    /// Setter of the `epsilon` attribute.
    void epsilon(double value);
    /// Getter of the `histogramSize` attribute.
    [[nodiscard]] unsigned long histogramSize() const;
    /// Setter of the `histogramSize` attribute.
    void histogramSize(unsigned long value);
    /// Getter of the `lookbackDays` attribute.
    [[nodiscard]] unsigned long lookbackDays() const;
    /// Setter of the `lookbackDays` attribute.
    void lookbackDays(unsigned long value);
    /// Getter of the `matchValues` attribute.
    [[nodiscard]] jsbind::TypedArray<unsigned long> matchValues() const;
    /// Setter of the `matchValues` attribute.
    void matchValues(jsbind::TypedArray<unsigned long> value);
    /// Getter of the `impressionSites` attribute.
    [[nodiscard]] jsbind::TypedArray<jsbind::String> impressionSites() const;
    /// Setter of the `impressionSites` attribute.
    void impressionSites(const jsbind::TypedArray<jsbind::String>& value);
    /// Getter of the `impressionCallers` attribute.
    [[nodiscard]] jsbind::TypedArray<jsbind::String> impressionCallers() const;
    /// Setter of the `impressionCallers` attribute.
    void impressionCallers(const jsbind::TypedArray<jsbind::String>& value);
    /// Getter of the `logic` attribute.
    [[nodiscard]] AttributionLogic logic() const;
    /// Setter of the `logic` attribute.
    void logic(const AttributionLogic& value);
    /// Getter of the `value` attribute.
    [[nodiscard]] unsigned long value() const;
    /// Setter of the `value` attribute.
    void value(unsigned long value);
    /// Getter of the `maxValue` attribute.
    [[nodiscard]] unsigned long maxValue() const;
    /// Setter of the `maxValue` attribute.
    void maxValue(unsigned long value);
};

} // namespace webbind