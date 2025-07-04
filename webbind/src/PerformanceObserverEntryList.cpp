#include <webbind/PerformanceObserverEntryList.hpp>


PerformanceObserverEntryList PerformanceObserverEntryList::take_ownership(Handle h) noexcept {
        return PerformanceObserverEntryList(h);
    }
PerformanceObserverEntryList PerformanceObserverEntryList::clone() const noexcept { return *this; }
PerformanceObserverEntryList::PerformanceObserverEntryList(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
PerformanceObserverEntryList::PerformanceObserverEntryList(const emlite::Val &val) noexcept: emlite::Val(val) {}


jsbind::Any PerformanceObserverEntryList::getEntries() {
    return emlite::Val::call("getEntries").as<jsbind::Any>();
}

jsbind::Any PerformanceObserverEntryList::getEntriesByType(const jsbind::DOMString& type) {
    return emlite::Val::call("getEntriesByType", type).as<jsbind::Any>();
}

jsbind::Any PerformanceObserverEntryList::getEntriesByName(const jsbind::DOMString& name, const jsbind::DOMString& type) {
    return emlite::Val::call("getEntriesByName", name, type).as<jsbind::Any>();
}

