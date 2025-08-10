#include <webbind/PerformanceMeasureOptions.hpp>

using emlite::Val;
namespace webbind {

PerformanceMeasureOptions::PerformanceMeasureOptions(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
PerformanceMeasureOptions PerformanceMeasureOptions::take_ownership(Handle h) noexcept {
        return PerformanceMeasureOptions(h);
    }
PerformanceMeasureOptions::PerformanceMeasureOptions(const emlite::Val &val) noexcept: emlite::Val(val) {}
PerformanceMeasureOptions::PerformanceMeasureOptions() noexcept: emlite::Val(emlite::Val::object()) {}
PerformanceMeasureOptions PerformanceMeasureOptions::clone() const noexcept { return *this; }

jsbind::Any PerformanceMeasureOptions::detail() const {
    return emlite::Val::get("detail").as<jsbind::Any>();
}

void PerformanceMeasureOptions::detail(const jsbind::Any& value) {
    emlite::Val::set("detail", value);
}

jsbind::Any PerformanceMeasureOptions::start() const {
    return emlite::Val::get("start").as<jsbind::Any>();
}

void PerformanceMeasureOptions::start(const jsbind::Any& value) {
    emlite::Val::set("start", value);
}

jsbind::Any PerformanceMeasureOptions::duration() const {
    return emlite::Val::get("duration").as<jsbind::Any>();
}

void PerformanceMeasureOptions::duration(const jsbind::Any& value) {
    emlite::Val::set("duration", value);
}

jsbind::Any PerformanceMeasureOptions::end() const {
    return emlite::Val::get("end").as<jsbind::Any>();
}

void PerformanceMeasureOptions::end(const jsbind::Any& value) {
    emlite::Val::set("end", value);
}


} // namespace webbind