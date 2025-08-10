#include <webbind/PerformanceMarkOptions.hpp>

namespace webbind {

PerformanceMarkOptions::PerformanceMarkOptions(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
PerformanceMarkOptions PerformanceMarkOptions::take_ownership(Handle h) noexcept {
    return PerformanceMarkOptions(h);
}

PerformanceMarkOptions::PerformanceMarkOptions(const emlite::Val &val) noexcept: emlite::Val(val) {}

PerformanceMarkOptions::PerformanceMarkOptions() noexcept: emlite::Val(emlite::Val::object()) {}

PerformanceMarkOptions PerformanceMarkOptions::clone() const noexcept { return *this; }

jsbind::Any PerformanceMarkOptions::detail() const {
    return emlite::Val::get("detail").as<jsbind::Any>();
}

void PerformanceMarkOptions::detail(const jsbind::Any& value) {
    emlite::Val::set("detail", value);
}

jsbind::Any PerformanceMarkOptions::startTime() const {
    return emlite::Val::get("startTime").as<jsbind::Any>();
}

void PerformanceMarkOptions::startTime(const jsbind::Any& value) {
    emlite::Val::set("startTime", value);
}


} // namespace webbind