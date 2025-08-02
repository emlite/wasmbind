#include <webbind/Attribution.hpp>
#include <webbind/AttributionAggregationServices.hpp>


AttributionImpressionResult::AttributionImpressionResult(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
AttributionImpressionResult AttributionImpressionResult::take_ownership(Handle h) noexcept {
        return AttributionImpressionResult(h);
    }
AttributionImpressionResult::AttributionImpressionResult(const emlite::Val &val) noexcept: emlite::Val(val) {}
AttributionImpressionResult::AttributionImpressionResult() noexcept: emlite::Val(emlite::Val::object()) {}
AttributionImpressionResult AttributionImpressionResult::clone() const noexcept { return *this; }

AttributionImpressionOptions::AttributionImpressionOptions(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
AttributionImpressionOptions AttributionImpressionOptions::take_ownership(Handle h) noexcept {
        return AttributionImpressionOptions(h);
    }
AttributionImpressionOptions::AttributionImpressionOptions(const emlite::Val &val) noexcept: emlite::Val(val) {}
AttributionImpressionOptions::AttributionImpressionOptions() noexcept: emlite::Val(emlite::Val::object()) {}
AttributionImpressionOptions AttributionImpressionOptions::clone() const noexcept { return *this; }

unsigned long AttributionImpressionOptions::histogramIndex() const {
    return emlite::Val::get("histogramIndex").as<unsigned long>();
}

void AttributionImpressionOptions::histogramIndex(unsigned long value) {
    emlite::Val::set("histogramIndex", value);
}

unsigned long AttributionImpressionOptions::matchValue() const {
    return emlite::Val::get("matchValue").as<unsigned long>();
}

void AttributionImpressionOptions::matchValue(unsigned long value) {
    emlite::Val::set("matchValue", value);
}

jsbind::TypedArray<jsbind::String> AttributionImpressionOptions::conversionSites() const {
    return emlite::Val::get("conversionSites").as<jsbind::TypedArray<jsbind::String>>();
}

void AttributionImpressionOptions::conversionSites(const jsbind::TypedArray<jsbind::String>& value) {
    emlite::Val::set("conversionSites", value);
}

jsbind::TypedArray<jsbind::String> AttributionImpressionOptions::conversionCallers() const {
    return emlite::Val::get("conversionCallers").as<jsbind::TypedArray<jsbind::String>>();
}

void AttributionImpressionOptions::conversionCallers(const jsbind::TypedArray<jsbind::String>& value) {
    emlite::Val::set("conversionCallers", value);
}

unsigned long AttributionImpressionOptions::lifetimeDays() const {
    return emlite::Val::get("lifetimeDays").as<unsigned long>();
}

void AttributionImpressionOptions::lifetimeDays(unsigned long value) {
    emlite::Val::set("lifetimeDays", value);
}

AttributionConversionResult::AttributionConversionResult(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
AttributionConversionResult AttributionConversionResult::take_ownership(Handle h) noexcept {
        return AttributionConversionResult(h);
    }
AttributionConversionResult::AttributionConversionResult(const emlite::Val &val) noexcept: emlite::Val(val) {}
AttributionConversionResult::AttributionConversionResult() noexcept: emlite::Val(emlite::Val::object()) {}
AttributionConversionResult AttributionConversionResult::clone() const noexcept { return *this; }

jsbind::Uint8Array AttributionConversionResult::report() const {
    return emlite::Val::get("report").as<jsbind::Uint8Array>();
}

void AttributionConversionResult::report(const jsbind::Uint8Array& value) {
    emlite::Val::set("report", value);
}

AttributionConversionOptions::AttributionConversionOptions(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
AttributionConversionOptions AttributionConversionOptions::take_ownership(Handle h) noexcept {
        return AttributionConversionOptions(h);
    }
AttributionConversionOptions::AttributionConversionOptions(const emlite::Val &val) noexcept: emlite::Val(val) {}
AttributionConversionOptions::AttributionConversionOptions() noexcept: emlite::Val(emlite::Val::object()) {}
AttributionConversionOptions AttributionConversionOptions::clone() const noexcept { return *this; }

jsbind::String AttributionConversionOptions::aggregationService() const {
    return emlite::Val::get("aggregationService").as<jsbind::String>();
}

void AttributionConversionOptions::aggregationService(const jsbind::String& value) {
    emlite::Val::set("aggregationService", value);
}

double AttributionConversionOptions::epsilon() const {
    return emlite::Val::get("epsilon").as<double>();
}

void AttributionConversionOptions::epsilon(double value) {
    emlite::Val::set("epsilon", value);
}

unsigned long AttributionConversionOptions::histogramSize() const {
    return emlite::Val::get("histogramSize").as<unsigned long>();
}

void AttributionConversionOptions::histogramSize(unsigned long value) {
    emlite::Val::set("histogramSize", value);
}

unsigned long AttributionConversionOptions::lookbackDays() const {
    return emlite::Val::get("lookbackDays").as<unsigned long>();
}

void AttributionConversionOptions::lookbackDays(unsigned long value) {
    emlite::Val::set("lookbackDays", value);
}

jsbind::TypedArray<unsigned long> AttributionConversionOptions::matchValues() const {
    return emlite::Val::get("matchValues").as<jsbind::TypedArray<unsigned long>>();
}

void AttributionConversionOptions::matchValues(jsbind::TypedArray<unsigned long> value) {
    emlite::Val::set("matchValues", value);
}

jsbind::TypedArray<jsbind::String> AttributionConversionOptions::impressionSites() const {
    return emlite::Val::get("impressionSites").as<jsbind::TypedArray<jsbind::String>>();
}

void AttributionConversionOptions::impressionSites(const jsbind::TypedArray<jsbind::String>& value) {
    emlite::Val::set("impressionSites", value);
}

jsbind::TypedArray<jsbind::String> AttributionConversionOptions::impressionCallers() const {
    return emlite::Val::get("impressionCallers").as<jsbind::TypedArray<jsbind::String>>();
}

void AttributionConversionOptions::impressionCallers(const jsbind::TypedArray<jsbind::String>& value) {
    emlite::Val::set("impressionCallers", value);
}

AttributionLogic AttributionConversionOptions::logic() const {
    return emlite::Val::get("logic").as<AttributionLogic>();
}

void AttributionConversionOptions::logic(const AttributionLogic& value) {
    emlite::Val::set("logic", value);
}

unsigned long AttributionConversionOptions::value() const {
    return emlite::Val::get("value").as<unsigned long>();
}

void AttributionConversionOptions::value(unsigned long value) {
    emlite::Val::set("value", value);
}

unsigned long AttributionConversionOptions::maxValue() const {
    return emlite::Val::get("maxValue").as<unsigned long>();
}

void AttributionConversionOptions::maxValue(unsigned long value) {
    emlite::Val::set("maxValue", value);
}

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

