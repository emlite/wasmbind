#include <webbind/PerformanceObserver.hpp>
#include <webbind/PerformanceObserverInit.hpp>

namespace webbind {

PerformanceObserver PerformanceObserver::take_ownership(Handle h) noexcept {
        return PerformanceObserver(h);
    }
PerformanceObserver PerformanceObserver::clone() const noexcept { return *this; }
emlite::Val PerformanceObserver::instance() noexcept { return emlite::Val::global("PerformanceObserver"); }
PerformanceObserver::PerformanceObserver(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
PerformanceObserver::PerformanceObserver(const emlite::Val &val) noexcept: emlite::Val(val) {}

PerformanceObserver::PerformanceObserver(const jsbind::Function& callback) : emlite::Val(emlite::Val::global("PerformanceObserver").new_(callback)) {}

jsbind::Undefined PerformanceObserver::observe() {
    return emlite::Val::call("observe").as<jsbind::Undefined>();
}

jsbind::Undefined PerformanceObserver::observe(const PerformanceObserverInit& options) {
    return emlite::Val::call("observe", options).as<jsbind::Undefined>();
}

jsbind::Undefined PerformanceObserver::disconnect() {
    return emlite::Val::call("disconnect").as<jsbind::Undefined>();
}

jsbind::Any PerformanceObserver::takeRecords() {
    return emlite::Val::call("takeRecords").as<jsbind::Any>();
}

jsbind::TypedArray<jsbind::String> PerformanceObserver::supportedEntryTypes() {
    return emlite::Val::global("performanceobserver").get("supportedEntryTypes").as<jsbind::TypedArray<jsbind::String>>();
}


} // namespace webbind