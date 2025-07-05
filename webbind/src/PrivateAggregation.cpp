#include <webbind/PrivateAggregation.hpp>


PAHistogramContribution::PAHistogramContribution(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
PAHistogramContribution PAHistogramContribution::take_ownership(Handle h) noexcept {
        return PAHistogramContribution(h);
    }
PAHistogramContribution::PAHistogramContribution(const emlite::Val &val) noexcept: emlite::Val(val) {}
PAHistogramContribution::PAHistogramContribution() noexcept: emlite::Val(emlite::Val::object()) {}
PAHistogramContribution PAHistogramContribution::clone() const noexcept { return *this; }

long long PAHistogramContribution::bucket() const {
    return emlite::Val::get("bucket").as<long long>();
}

void PAHistogramContribution::bucket(long long value) {
    emlite::Val::set("bucket", value);
}

long PAHistogramContribution::value() const {
    return emlite::Val::get("value").as<long>();
}

void PAHistogramContribution::value(long value) {
    emlite::Val::set("value", value);
}

long long PAHistogramContribution::filteringId() const {
    return emlite::Val::get("filteringId").as<long long>();
}

void PAHistogramContribution::filteringId(long long value) {
    emlite::Val::set("filteringId", value);
}

PADebugModeOptions::PADebugModeOptions(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
PADebugModeOptions PADebugModeOptions::take_ownership(Handle h) noexcept {
        return PADebugModeOptions(h);
    }
PADebugModeOptions::PADebugModeOptions(const emlite::Val &val) noexcept: emlite::Val(val) {}
PADebugModeOptions::PADebugModeOptions() noexcept: emlite::Val(emlite::Val::object()) {}
PADebugModeOptions PADebugModeOptions::clone() const noexcept { return *this; }

long long PADebugModeOptions::debugKey() const {
    return emlite::Val::get("debugKey").as<long long>();
}

void PADebugModeOptions::debugKey(long long value) {
    emlite::Val::set("debugKey", value);
}

PrivateAggregation PrivateAggregation::take_ownership(Handle h) noexcept {
        return PrivateAggregation(h);
    }
PrivateAggregation PrivateAggregation::clone() const noexcept { return *this; }
PrivateAggregation::PrivateAggregation(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
PrivateAggregation::PrivateAggregation(const emlite::Val &val) noexcept: emlite::Val(val) {}


jsbind::Undefined PrivateAggregation::contributeToHistogram(const PAHistogramContribution& contribution) {
    return emlite::Val::call("contributeToHistogram", contribution).as<jsbind::Undefined>();
}

jsbind::Undefined PrivateAggregation::contributeToHistogramOnEvent(const jsbind::DOMString& event, const jsbind::Record<jsbind::DOMString, jsbind::Any>& contribution) {
    return emlite::Val::call("contributeToHistogramOnEvent", event, contribution).as<jsbind::Undefined>();
}

jsbind::Undefined PrivateAggregation::enableDebugMode() {
    return emlite::Val::call("enableDebugMode").as<jsbind::Undefined>();
}

jsbind::Undefined PrivateAggregation::enableDebugMode(const PADebugModeOptions& options) {
    return emlite::Val::call("enableDebugMode", options).as<jsbind::Undefined>();
}

