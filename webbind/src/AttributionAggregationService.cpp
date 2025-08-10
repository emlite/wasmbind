#include "webbind/AttributionAggregationService.hpp"

using emlite::Val;
namespace webbind {

AttributionAggregationService::AttributionAggregationService(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
AttributionAggregationService AttributionAggregationService::take_ownership(Handle h) noexcept {
        return AttributionAggregationService(h);
    }
AttributionAggregationService::AttributionAggregationService(const emlite::Val &val) noexcept: emlite::Val(val) {}
AttributionAggregationService::AttributionAggregationService() noexcept: emlite::Val(emlite::Val::object()) {}
AttributionAggregationService AttributionAggregationService::clone() const noexcept { return *this; }

jsbind::String AttributionAggregationService::protocol() const {
    return emlite::Val::get("protocol").as<jsbind::String>();
}

void AttributionAggregationService::protocol(const jsbind::String& value) {
    emlite::Val::set("protocol", value);
}


} // namespace webbind