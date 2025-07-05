#include <webbind/PressureObserver.hpp>
#include <webbind/PressureRecord.hpp>


PressureObserverOptions::PressureObserverOptions(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
PressureObserverOptions PressureObserverOptions::take_ownership(Handle h) noexcept {
        return PressureObserverOptions(h);
    }
PressureObserverOptions::PressureObserverOptions(const emlite::Val &val) noexcept: emlite::Val(val) {}
PressureObserverOptions::PressureObserverOptions() noexcept: emlite::Val(emlite::Val::object()) {}
PressureObserverOptions PressureObserverOptions::clone() const noexcept { return *this; }

unsigned long PressureObserverOptions::sampleInterval() const {
    return emlite::Val::get("sampleInterval").as<unsigned long>();
}

void PressureObserverOptions::sampleInterval(unsigned long value) {
    emlite::Val::set("sampleInterval", value);
}

PressureObserver PressureObserver::take_ownership(Handle h) noexcept {
        return PressureObserver(h);
    }
PressureObserver PressureObserver::clone() const noexcept { return *this; }
PressureObserver::PressureObserver(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
PressureObserver::PressureObserver(const emlite::Val &val) noexcept: emlite::Val(val) {}


PressureObserver::PressureObserver(const jsbind::Function& callback) : emlite::Val(emlite::Val::global("PressureObserver").new_(callback)) {}

jsbind::Promise PressureObserver::observe(const PressureSource& source) {
    return emlite::Val::call("observe", source).as<jsbind::Promise>();
}

jsbind::Promise PressureObserver::observe(const PressureSource& source, const PressureObserverOptions& options) {
    return emlite::Val::call("observe", source, options).as<jsbind::Promise>();
}

jsbind::Undefined PressureObserver::unobserve(const PressureSource& source) {
    return emlite::Val::call("unobserve", source).as<jsbind::Undefined>();
}

jsbind::Undefined PressureObserver::disconnect() {
    return emlite::Val::call("disconnect").as<jsbind::Undefined>();
}

jsbind::Sequence<PressureRecord> PressureObserver::takeRecords() {
    return emlite::Val::call("takeRecords").as<jsbind::Sequence<PressureRecord>>();
}

jsbind::FrozenArray<PressureSource> PressureObserver::knownSources() {
    return emlite::Val::global("pressureobserver").get("knownSources").as<jsbind::FrozenArray<PressureSource>>();
}

