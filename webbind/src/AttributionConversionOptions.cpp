#include <webbind/AttributionConversionOptions.hpp>
#include <webbind/AttributionLogicOptions.hpp>

namespace webbind {

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

AttributionLogicOptions AttributionConversionOptions::logicOptions() const {
    return emlite::Val::get("logicOptions").as<AttributionLogicOptions>();
}

void AttributionConversionOptions::logicOptions(const AttributionLogicOptions& value) {
    emlite::Val::set("logicOptions", value);
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


} // namespace webbind