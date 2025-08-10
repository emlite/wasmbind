#include "webbind/Attribution.hpp"
#include "webbind/AttributionAggregationServices.hpp"
#include "webbind/AttributionImpressionResult.hpp"
#include "webbind/AttributionImpressionOptions.hpp"
#include "webbind/AttributionConversionResult.hpp"
#include "webbind/AttributionConversionOptions.hpp"

namespace webbind {

Attribution Attribution::take_ownership(Handle h) noexcept {
        return Attribution(h);
    }
Attribution Attribution::clone() const noexcept { return *this; }
emlite::Val Attribution::instance() noexcept { return emlite::Val::global("Attribution"); }
Attribution::Attribution(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
Attribution::Attribution(const emlite::Val &val) noexcept: emlite::Val(val) {}

AttributionAggregationServices Attribution::aggregationServices() const {
    return emlite::Val::get("aggregationServices").as<AttributionAggregationServices>();
}

jsbind::Promise<AttributionImpressionResult> Attribution::saveImpression(const AttributionImpressionOptions& options) {
    return emlite::Val::call("saveImpression", options).as<jsbind::Promise<AttributionImpressionResult>>();
}

jsbind::Promise<AttributionConversionResult> Attribution::measureConversion(const AttributionConversionOptions& options) {
    return emlite::Val::call("measureConversion", options).as<jsbind::Promise<AttributionConversionResult>>();
}


} // namespace webbind