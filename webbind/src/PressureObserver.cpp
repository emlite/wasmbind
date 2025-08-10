#include <webbind/PressureObserver.hpp>
#include <webbind/PressureObserverOptions.hpp>
#include <webbind/PressureRecord.hpp>

namespace webbind {

PressureObserver PressureObserver::take_ownership(Handle h) noexcept {
        return PressureObserver(h);
    }
PressureObserver PressureObserver::clone() const noexcept { return *this; }
emlite::Val PressureObserver::instance() noexcept { return emlite::Val::global("PressureObserver"); }
PressureObserver::PressureObserver(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
PressureObserver::PressureObserver(const emlite::Val &val) noexcept: emlite::Val(val) {}

PressureObserver::PressureObserver(const jsbind::Function& callback) : emlite::Val(emlite::Val::global("PressureObserver").new_(callback)) {}

jsbind::Promise<jsbind::Undefined> PressureObserver::observe(const PressureSource& source) {
    return emlite::Val::call("observe", source).as<jsbind::Promise<jsbind::Undefined>>();
}

jsbind::Promise<jsbind::Undefined> PressureObserver::observe(const PressureSource& source, const PressureObserverOptions& options) {
    return emlite::Val::call("observe", source, options).as<jsbind::Promise<jsbind::Undefined>>();
}

jsbind::Undefined PressureObserver::unobserve(const PressureSource& source) {
    return emlite::Val::call("unobserve", source).as<jsbind::Undefined>();
}

jsbind::Undefined PressureObserver::disconnect() {
    return emlite::Val::call("disconnect").as<jsbind::Undefined>();
}

jsbind::TypedArray<PressureRecord> PressureObserver::takeRecords() {
    return emlite::Val::call("takeRecords").as<jsbind::TypedArray<PressureRecord>>();
}

jsbind::TypedArray<PressureSource> PressureObserver::knownSources() {
    return emlite::Val::global("pressureobserver").get("knownSources").as<jsbind::TypedArray<PressureSource>>();
}


} // namespace webbind