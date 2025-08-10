#include <webbind/ServiceWorker.hpp>
#include <webbind/StructuredSerializeOptions.hpp>

namespace webbind {

ServiceWorker ServiceWorker::take_ownership(Handle h) noexcept {
        return ServiceWorker(h);
    }
ServiceWorker ServiceWorker::clone() const noexcept { return *this; }
emlite::Val ServiceWorker::instance() noexcept { return emlite::Val::global("ServiceWorker"); }
ServiceWorker::ServiceWorker(Handle h) noexcept : EventTarget(emlite::Val::take_ownership(h)) {}
ServiceWorker::ServiceWorker(const emlite::Val &val) noexcept: EventTarget(val) {}

jsbind::String ServiceWorker::scriptURL() const {
    return EventTarget::get("scriptURL").as<jsbind::String>();
}

ServiceWorkerState ServiceWorker::state() const {
    return EventTarget::get("state").as<ServiceWorkerState>();
}

jsbind::Undefined ServiceWorker::postMessage(const jsbind::Any& message) {
    return EventTarget::call("postMessage", message).as<jsbind::Undefined>();
}

jsbind::Undefined ServiceWorker::postMessage(const jsbind::Any& message, const StructuredSerializeOptions& options) {
    return EventTarget::call("postMessage", message, options).as<jsbind::Undefined>();
}

jsbind::Any ServiceWorker::onstatechange() const {
    return EventTarget::get("onstatechange").as<jsbind::Any>();
}

void ServiceWorker::onstatechange(const jsbind::Any& value) {
    EventTarget::set("onstatechange", value);
}

jsbind::Any ServiceWorker::onerror() const {
    return EventTarget::get("onerror").as<jsbind::Any>();
}

void ServiceWorker::onerror(const jsbind::Any& value) {
    EventTarget::set("onerror", value);
}


} // namespace webbind