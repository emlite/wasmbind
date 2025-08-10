#include "webbind/PerformancePaintTiming.hpp"

namespace webbind {

PerformancePaintTiming PerformancePaintTiming::take_ownership(Handle h) noexcept {
        return PerformancePaintTiming(h);
    }
PerformancePaintTiming PerformancePaintTiming::clone() const noexcept { return *this; }
emlite::Val PerformancePaintTiming::instance() noexcept { return emlite::Val::global("PerformancePaintTiming"); }
PerformancePaintTiming::PerformancePaintTiming(Handle h) noexcept : PerformanceEntry(emlite::Val::take_ownership(h)) {}
PerformancePaintTiming::PerformancePaintTiming(const emlite::Val &val) noexcept: PerformanceEntry(val) {}

jsbind::Object PerformancePaintTiming::toJSON() {
    return PerformanceEntry::call("toJSON").as<jsbind::Object>();
}

jsbind::Any PerformancePaintTiming::paintTime() const {
    return PerformanceEntry::get("paintTime").as<jsbind::Any>();
}

jsbind::Any PerformancePaintTiming::presentationTime() const {
    return PerformanceEntry::get("presentationTime").as<jsbind::Any>();
}


} // namespace webbind