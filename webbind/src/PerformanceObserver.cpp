#include <webbind/PerformanceObserver.hpp>


PerformanceObserverInit::PerformanceObserverInit(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
PerformanceObserverInit PerformanceObserverInit::take_ownership(Handle h) noexcept {
        return PerformanceObserverInit(h);
    }
PerformanceObserverInit::PerformanceObserverInit(const emlite::Val &val) noexcept: emlite::Val(val) {}
PerformanceObserverInit::PerformanceObserverInit() noexcept: emlite::Val(emlite::Val::object()) {}
PerformanceObserverInit PerformanceObserverInit::clone() const noexcept { return *this; }

jsbind::Sequence<jsbind::DOMString> PerformanceObserverInit::entryTypes() const {
    return emlite::Val::get("entryTypes").as<jsbind::Sequence<jsbind::DOMString>>();
}

void PerformanceObserverInit::entryTypes(const jsbind::Sequence<jsbind::DOMString>& value) {
    emlite::Val::set("entryTypes", value);
}

jsbind::DOMString PerformanceObserverInit::type() const {
    return emlite::Val::get("type").as<jsbind::DOMString>();
}

void PerformanceObserverInit::type(const jsbind::DOMString& value) {
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

jsbind::FrozenArray<jsbind::DOMString> PerformanceObserver::supportedEntryTypes() {
    return emlite::Val::global("performanceobserver").get("supportedEntryTypes").as<jsbind::FrozenArray<jsbind::DOMString>>();
}

