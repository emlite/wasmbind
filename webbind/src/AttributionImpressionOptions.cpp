#include <webbind/AttributionImpressionOptions.hpp>

using emlite::Val;
namespace webbind {

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


} // namespace webbind