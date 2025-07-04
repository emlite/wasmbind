#include <webbind/LayoutShift.hpp>
#include <webbind/LayoutShiftAttribution.hpp>


LayoutShift LayoutShift::take_ownership(Handle h) noexcept {
        return LayoutShift(h);
    }
LayoutShift LayoutShift::clone() const noexcept { return *this; }
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

jsbind::FrozenArray<LayoutShiftAttribution> LayoutShift::sources() const {
    return PerformanceEntry::get("sources").as<jsbind::FrozenArray<LayoutShiftAttribution>>();
}

jsbind::Object LayoutShift::toJSON() {
    return PerformanceEntry::call("toJSON").as<jsbind::Object>();
}

