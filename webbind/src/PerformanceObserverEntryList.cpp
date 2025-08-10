#include <webbind/PerformanceObserverEntryList.hpp>

namespace webbind {

PerformanceObserverEntryList PerformanceObserverEntryList::take_ownership(Handle h) noexcept {
        return PerformanceObserverEntryList(h);
    }
PerformanceObserverEntryList PerformanceObserverEntryList::clone() const noexcept { return *this; }
emlite::Val PerformanceObserverEntryList::instance() noexcept { return emlite::Val::global("PerformanceObserverEntryList"); }
PerformanceObserverEntryList::PerformanceObserverEntryList(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
PerformanceObserverEntryList::PerformanceObserverEntryList(const emlite::Val &val) noexcept: emlite::Val(val) {}

jsbind::Any PerformanceObserverEntryList::getEntries() {
    return emlite::Val::call("getEntries").as<jsbind::Any>();
}

jsbind::Any PerformanceObserverEntryList::getEntriesByType(const jsbind::String& type) {
    return emlite::Val::call("getEntriesByType", type).as<jsbind::Any>();
}

jsbind::Any PerformanceObserverEntryList::getEntriesByName(const jsbind::String& name) {
    return emlite::Val::call("getEntriesByName", name).as<jsbind::Any>();
}

jsbind::Any PerformanceObserverEntryList::getEntriesByName(const jsbind::String& name, const jsbind::String& type) {
    return emlite::Val::call("getEntriesByName", name, type).as<jsbind::Any>();
}


} // namespace webbind