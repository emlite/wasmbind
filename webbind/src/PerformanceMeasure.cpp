#include <webbind/PerformanceMeasure.hpp>

namespace webbind {

PerformanceMeasure PerformanceMeasure::take_ownership(Handle h) noexcept {
        return PerformanceMeasure(h);
    }
PerformanceMeasure PerformanceMeasure::clone() const noexcept { return *this; }
emlite::Val PerformanceMeasure::instance() noexcept { return emlite::Val::global("PerformanceMeasure"); }
PerformanceMeasure::PerformanceMeasure(Handle h) noexcept : PerformanceEntry(emlite::Val::take_ownership(h)) {}
PerformanceMeasure::PerformanceMeasure(const emlite::Val &val) noexcept: PerformanceEntry(val) {}

jsbind::Any PerformanceMeasure::detail() const {
    return PerformanceEntry::get("detail").as<jsbind::Any>();
}


} // namespace webbind