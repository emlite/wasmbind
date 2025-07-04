#include <webbind/ServiceWorkerContainer.hpp>
#include <webbind/ServiceWorker.hpp>
#include <webbind/ServiceWorkerRegistration.hpp>


RegistrationOptions::RegistrationOptions(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
RegistrationOptions RegistrationOptions::take_ownership(Handle h) noexcept {
        return RegistrationOptions(h);
    }
RegistrationOptions::RegistrationOptions(const emlite::Val &val) noexcept: emlite::Val(val) {}
RegistrationOptions::RegistrationOptions() noexcept: emlite::Val(emlite::Val::object()) {}
RegistrationOptions RegistrationOptions::clone() const noexcept { return *this; }

jsbind::USVString RegistrationOptions::scope() const {
    return emlite::Val::get("scope").as<jsbind::USVString>();
}

void RegistrationOptions::scope(const jsbind::USVString& value) {
    emlite::Val::set("scope", value);
}

WorkerType RegistrationOptions::type() const {
    return emlite::Val::get("type").as<WorkerType>();
}

void RegistrationOptions::type(const WorkerType& value) {
    emlite::Val::set("type", value);
}

ServiceWorkerUpdateViaCache RegistrationOptions::updateViaCache() const {
    return emlite::Val::get("updateViaCache").as<ServiceWorkerUpdateViaCache>();
}

void RegistrationOptions::updateViaCache(const ServiceWorkerUpdateViaCache& value) {
    emlite::Val::set("updateViaCache", value);
}

ServiceWorkerContainer ServiceWorkerContainer::take_ownership(Handle h) noexcept {
        return ServiceWorkerContainer(h);
    }
ServiceWorkerContainer ServiceWorkerContainer::clone() const noexcept { return *this; }
ServiceWorkerContainer::ServiceWorkerContainer(Handle h) noexcept : EventTarget(emlite::Val::take_ownership(h)) {}
ServiceWorkerContainer::ServiceWorkerContainer(const emlite::Val &val) noexcept: EventTarget(val) {}


ServiceWorker ServiceWorkerContainer::controller() const {
    return EventTarget::get("controller").as<ServiceWorker>();
}

jsbind::Promise ServiceWorkerContainer::ready() const {
    return EventTarget::get("ready").as<jsbind::Promise>();
}

jsbind::Promise ServiceWorkerContainer::register_(const jsbind::Any& scriptURL, const RegistrationOptions& options) {
    return EventTarget::call("register", scriptURL, options).as<jsbind::Promise>();
}

jsbind::Promise ServiceWorkerContainer::getRegistration(const jsbind::USVString& clientURL) {
    return EventTarget::call("getRegistration", clientURL).as<jsbind::Promise>();
}

jsbind::Promise ServiceWorkerContainer::getRegistrations() {
    return EventTarget::call("getRegistrations").as<jsbind::Promise>();
}

jsbind::Undefined ServiceWorkerContainer::startMessages() {
    return EventTarget::call("startMessages").as<jsbind::Undefined>();
}

jsbind::Any ServiceWorkerContainer::oncontrollerchange() const {
    return EventTarget::get("oncontrollerchange").as<jsbind::Any>();
}

void ServiceWorkerContainer::oncontrollerchange(const jsbind::Any& value) {
    EventTarget::set("oncontrollerchange", value);
}

jsbind::Any ServiceWorkerContainer::onmessage() const {
    return EventTarget::get("onmessage").as<jsbind::Any>();
}

void ServiceWorkerContainer::onmessage(const jsbind::Any& value) {
    EventTarget::set("onmessage", value);
}

jsbind::Any ServiceWorkerContainer::onmessageerror() const {
    return EventTarget::get("onmessageerror").as<jsbind::Any>();
}

void ServiceWorkerContainer::onmessageerror(const jsbind::Any& value) {
    EventTarget::set("onmessageerror", value);
}

