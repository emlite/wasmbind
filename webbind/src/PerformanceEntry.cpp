#include <webbind/PerformanceEntry.hpp>

namespace webbind {

PerformanceEntry PerformanceEntry::take_ownership(Handle h) noexcept {
        return PerformanceEntry(h);
    }
PerformanceEntry PerformanceEntry::clone() const noexcept { return *this; }
emlite::Val PerformanceEntry::instance() noexcept { return emlite::Val::global("PerformanceEntry"); }
PerformanceEntry::PerformanceEntry(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
PerformanceEntry::PerformanceEntry(const emlite::Val &val) noexcept: emlite::Val(val) {}

long long PerformanceEntry::id() const {
    return emlite::Val::get("id").as<long long>();
}

jsbind::String PerformanceEntry::name() const {
    return emlite::Val::get("name").as<jsbind::String>();
}

jsbind::String PerformanceEntry::entryType() const {
    return emlite::Val::get("entryType").as<jsbind::String>();
}

jsbind::Any PerformanceEntry::startTime() const {
    return emlite::Val::get("startTime").as<jsbind::Any>();
}

jsbind::Any PerformanceEntry::duration() const {
    return emlite::Val::get("duration").as<jsbind::Any>();
}

long long PerformanceEntry::navigationId() const {
    return emlite::Val::get("navigationId").as<long long>();
}

jsbind::Object PerformanceEntry::toJSON() {
    return emlite::Val::call("toJSON").as<jsbind::Object>();
}


} // namespace webbind