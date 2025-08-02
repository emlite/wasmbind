#include <webbind/PerformanceObserver.hpp>


PerformanceObserverInit::PerformanceObserverInit(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
PerformanceObserverInit PerformanceObserverInit::take_ownership(Handle h) noexcept {
        return PerformanceObserverInit(h);
    }
PerformanceObserverInit::PerformanceObserverInit(const emlite::Val &val) noexcept: emlite::Val(val) {}
PerformanceObserverInit::PerformanceObserverInit() noexcept: emlite::Val(emlite::Val::object()) {}
PerformanceObserverInit PerformanceObserverInit::clone() const noexcept { return *this; }

jsbind::TypedArray<jsbind::String> PerformanceObserverInit::entryTypes() const {
    return emlite::Val::get("entryTypes").as<jsbind::TypedArray<jsbind::String>>();
}

void PerformanceObserverInit::entryTypes(const jsbind::TypedArray<jsbind::String>& value) {
    emlite::Val::set("entryTypes", value);
}

jsbind::String PerformanceObserverInit::type() const {
    return emlite::Val::get("type").as<jsbind::String>();
}

void PerformanceObserverInit::type(const jsbind::String& value) {
    emlite::Val::set("type", value);
}

bool PerformanceObserverInit::buffered() const {
    return emlite::Val::get("buffered").as<bool>();
}

void PerformanceObserverInit::buffered(bool value) {
    emlite::Val::set("buffered", value);
}

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

