#include <webbind/PrivateAggregation.hpp>
#include <webbind/PAHistogramContribution.hpp>
#include <webbind/PADebugModeOptions.hpp>

namespace webbind {

PrivateAggregation PrivateAggregation::take_ownership(Handle h) noexcept {
        return PrivateAggregation(h);
    }
PrivateAggregation PrivateAggregation::clone() const noexcept { return *this; }
emlite::Val PrivateAggregation::instance() noexcept { return emlite::Val::global("PrivateAggregation"); }
PrivateAggregation::PrivateAggregation(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
PrivateAggregation::PrivateAggregation(const emlite::Val &val) noexcept: emlite::Val(val) {}

jsbind::Undefined PrivateAggregation::contributeToHistogram(const PAHistogramContribution& contribution) {
    return emlite::Val::call("contributeToHistogram", contribution).as<jsbind::Undefined>();
}

jsbind::Undefined PrivateAggregation::contributeToHistogramOnEvent(const jsbind::String& event, const jsbind::Record<jsbind::String, jsbind::Any>& contribution) {
    return emlite::Val::call("contributeToHistogramOnEvent", event, contribution).as<jsbind::Undefined>();
}

jsbind::Undefined PrivateAggregation::enableDebugMode() {
    return emlite::Val::call("enableDebugMode").as<jsbind::Undefined>();
}

jsbind::Undefined PrivateAggregation::enableDebugMode(const PADebugModeOptions& options) {
    return emlite::Val::call("enableDebugMode", options).as<jsbind::Undefined>();
}


} // namespace webbind