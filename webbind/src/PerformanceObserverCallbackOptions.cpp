#include <webbind/PerformanceObserverCallbackOptions.hpp>

using emlite::Val;
namespace webbind {

PerformanceObserverCallbackOptions::PerformanceObserverCallbackOptions(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
PerformanceObserverCallbackOptions PerformanceObserverCallbackOptions::take_ownership(Handle h) noexcept {
        return PerformanceObserverCallbackOptions(h);
    }
PerformanceObserverCallbackOptions::PerformanceObserverCallbackOptions(const emlite::Val &val) noexcept: emlite::Val(val) {}
PerformanceObserverCallbackOptions::PerformanceObserverCallbackOptions() noexcept: emlite::Val(emlite::Val::object()) {}
PerformanceObserverCallbackOptions PerformanceObserverCallbackOptions::clone() const noexcept { return *this; }

long long PerformanceObserverCallbackOptions::droppedEntriesCount() const {
    return emlite::Val::get("droppedEntriesCount").as<long long>();
}

void PerformanceObserverCallbackOptions::droppedEntriesCount(long long value) {
    emlite::Val::set("droppedEntriesCount", value);
}


} // namespace webbind