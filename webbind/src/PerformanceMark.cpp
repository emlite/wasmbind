#include <webbind/PerformanceMark.hpp>
#include <webbind/Performance.hpp>


PerformanceMark PerformanceMark::take_ownership(Handle h) noexcept {
        return PerformanceMark(h);
    }
PerformanceMark PerformanceMark::clone() const noexcept { return *this; }
PerformanceMark::PerformanceMark(Handle h) noexcept : PerformanceEntry(emlite::Val::take_ownership(h)) {}
PerformanceMark::PerformanceMark(const emlite::Val &val) noexcept: PerformanceEntry(val) {}


PerformanceMark::PerformanceMark(const jsbind::String& markName) : PerformanceEntry(emlite::Val::global("PerformanceMark").new_(markName)) {}

PerformanceMark::PerformanceMark(const jsbind::String& markName, const PerformanceMarkOptions& markOptions) : PerformanceEntry(emlite::Val::global("PerformanceMark").new_(markName, markOptions)) {}

jsbind::Any PerformanceMark::detail() const {
    return PerformanceEntry::get("detail").as<jsbind::Any>();
}

