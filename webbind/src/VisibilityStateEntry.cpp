#include <webbind/VisibilityStateEntry.hpp>


VisibilityStateEntry VisibilityStateEntry::take_ownership(Handle h) noexcept {
        return VisibilityStateEntry(h);
    }
VisibilityStateEntry VisibilityStateEntry::clone() const noexcept { return *this; }
VisibilityStateEntry::VisibilityStateEntry(Handle h) noexcept : PerformanceEntry(emlite::Val::take_ownership(h)) {}
VisibilityStateEntry::VisibilityStateEntry(const emlite::Val &val) noexcept: PerformanceEntry(val) {}


jsbind::String VisibilityStateEntry::name() const {
    return PerformanceEntry::get("name").as<jsbind::String>();
}

jsbind::String VisibilityStateEntry::entryType() const {
    return PerformanceEntry::get("entryType").as<jsbind::String>();
}

jsbind::Any VisibilityStateEntry::startTime() const {
    return PerformanceEntry::get("startTime").as<jsbind::Any>();
}

unsigned long VisibilityStateEntry::duration() const {
    return PerformanceEntry::get("duration").as<unsigned long>();
}

