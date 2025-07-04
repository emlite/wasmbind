#include <webbind/AttributionAggregationServices.hpp>


AttributionAggregationServices AttributionAggregationServices::take_ownership(Handle h) noexcept {
        return AttributionAggregationServices(h);
    }
AttributionAggregationServices AttributionAggregationServices::clone() const noexcept { return *this; }
AttributionAggregationServices::AttributionAggregationServices(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
AttributionAggregationServices::AttributionAggregationServices(const emlite::Val &val) noexcept: emlite::Val(val) {}


