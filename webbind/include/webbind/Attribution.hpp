#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "AttributionImpressionResult.hpp"
#include "AttributionImpressionOptions.hpp"
#include "AttributionConversionResult.hpp"
#include "AttributionConversionOptions.hpp"

namespace webbind {

class AttributionAggregationServices;

/// Interface Attribution
/// [`Attribution`](https://developer.mozilla.org/en-US/docs/Web/API/Attribution)
class Attribution : public emlite::Val {
    explicit Attribution(Handle h) noexcept;
public:
    explicit Attribution(const emlite::Val &val) noexcept;
    static Attribution take_ownership(Handle h) noexcept;
    [[nodiscard]] Attribution clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// Getter of the `aggregationServices` attribute.
    /// [`Attribution.aggregationServices`](https://developer.mozilla.org/en-US/docs/Web/API/Attribution/aggregationServices)
    [[nodiscard]] AttributionAggregationServices aggregationServices() const;
    /// The saveImpression method.
    /// [`Attribution.saveImpression`](https://developer.mozilla.org/en-US/docs/Web/API/Attribution/saveImpression)
    jsbind::Promise<AttributionImpressionResult> saveImpression(const AttributionImpressionOptions& options);
    /// The measureConversion method.
    /// [`Attribution.measureConversion`](https://developer.mozilla.org/en-US/docs/Web/API/Attribution/measureConversion)
    jsbind::Promise<AttributionConversionResult> measureConversion(const AttributionConversionOptions& options);
};

} // namespace webbind