#include <webbind/PerformanceEntry.hpp>


PerformanceEntry PerformanceEntry::take_ownership(Handle h) noexcept {
        return PerformanceEntry(h);
    }
PerformanceEntry PerformanceEntry::clone() const noexcept { return *this; }
PerformanceEntry::PerformanceEntry(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
PerformanceEntry::PerformanceEntry(const emlite::Val &val) noexcept: emlite::Val(val) {}


long long PerformanceEntry::id() const {
    return emlite::Val::get("id").as<long long>();
}

jsbind::DOMString PerformanceEntry::name() const {
    return emlite::Val::get("name").as<jsbind::DOMString>();
}

jsbind::DOMString PerformanceEntry::entryType() const {
    return emlite::Val::get("entryType").as<jsbind::DOMString>();
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

