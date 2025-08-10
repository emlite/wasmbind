#include <webbind/LayoutShift.hpp>
#include <webbind/LayoutShiftAttribution.hpp>

namespace webbind {

LayoutShift LayoutShift::take_ownership(Handle h) noexcept {
    return LayoutShift(h);
}

LayoutShift LayoutShift::clone() const noexcept { return *this; }

emlite::Val LayoutShift::instance() noexcept { return emlite::Val::global("LayoutShift"); }

LayoutShift::LayoutShift(Handle h) noexcept : PerformanceEntry(emlite::Val::take_ownership(h)) {}

LayoutShift::LayoutShift(const emlite::Val &val) noexcept: PerformanceEntry(val) {}

double LayoutShift::value() const {
    return PerformanceEntry::get("value").as<double>();
}

bool LayoutShift::hadRecentInput() const {
    return PerformanceEntry::get("hadRecentInput").as<bool>();
}

jsbind::Any LayoutShift::lastInputTime() const {
    return PerformanceEntry::get("lastInputTime").as<jsbind::Any>();
}

jsbind::TypedArray<LayoutShiftAttribution> LayoutShift::sources() const {
    return PerformanceEntry::get("sources").as<jsbind::TypedArray<LayoutShiftAttribution>>();
}

jsbind::Object LayoutShift::toJSON() {
    return PerformanceEntry::call("toJSON").as<jsbind::Object>();
}


} // namespace webbind