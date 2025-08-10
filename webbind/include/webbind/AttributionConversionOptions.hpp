#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type AttributionConversionOptions
/// [`AttributionConversionOptions`](https://developer.mozilla.org/en-US/docs/Web/API/AttributionConversionOptions)
class AttributionConversionOptions : public emlite::Val {
  explicit AttributionConversionOptions(Handle h) noexcept;
public:
    static AttributionConversionOptions take_ownership(Handle h) noexcept;
    explicit AttributionConversionOptions(const emlite::Val &val) noexcept;
    AttributionConversionOptions() noexcept;
    [[nodiscard]] AttributionConversionOptions clone() const noexcept;
    [[nodiscard]] jsbind::String aggregationService() const;
    void aggregationService(const jsbind::String& value);
    [[nodiscard]] double epsilon() const;
    void epsilon(double value);
    [[nodiscard]] unsigned long histogramSize() const;
    void histogramSize(unsigned long value);
    [[nodiscard]] unsigned long lookbackDays() const;
    void lookbackDays(unsigned long value);
    [[nodiscard]] jsbind::TypedArray<unsigned long> matchValues() const;
    void matchValues(jsbind::TypedArray<unsigned long> value);
    [[nodiscard]] jsbind::TypedArray<jsbind::String> impressionSites() const;
    void impressionSites(const jsbind::TypedArray<jsbind::String>& value);
    [[nodiscard]] jsbind::TypedArray<jsbind::String> impressionCallers() const;
    void impressionCallers(const jsbind::TypedArray<jsbind::String>& value);
    [[nodiscard]] AttributionLogic logic() const;
    void logic(const AttributionLogic& value);
    [[nodiscard]] unsigned long value() const;
    void value(unsigned long value);
    [[nodiscard]] unsigned long maxValue() const;
    void maxValue(unsigned long value);
};

} // namespace webbind