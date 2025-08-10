#include <webbind/PresentationRequest.hpp>
#include <webbind/PresentationConnection.hpp>
#include <webbind/PresentationAvailability.hpp>

namespace webbind {

PresentationRequest PresentationRequest::take_ownership(Handle h) noexcept {
    return PresentationRequest(h);
}

PresentationRequest PresentationRequest::clone() const noexcept { return *this; }

emlite::Val PresentationRequest::instance() noexcept { return emlite::Val::global("PresentationRequest"); }

PresentationRequest::PresentationRequest(Handle h) noexcept : EventTarget(emlite::Val::take_ownership(h)) {}

PresentationRequest::PresentationRequest(const emlite::Val &val) noexcept: EventTarget(val) {}

PresentationRequest::PresentationRequest(const jsbind::TypedArray<jsbind::String>& urls) : EventTarget(emlite::Val::global("PresentationRequest").new_(urls)) {}

jsbind::Promise<PresentationConnection> PresentationRequest::start() {
    return EventTarget::call("start").as<jsbind::Promise<PresentationConnection>>();
}

jsbind::Promise<PresentationConnection> PresentationRequest::reconnect(const jsbind::String& presentationId) {
    return EventTarget::call("reconnect", presentationId).as<jsbind::Promise<PresentationConnection>>();
}

jsbind::Promise<PresentationAvailability> PresentationRequest::getAvailability() {
    return EventTarget::call("getAvailability").as<jsbind::Promise<PresentationAvailability>>();
}

jsbind::Any PresentationRequest::onconnectionavailable() const {
    return EventTarget::get("onconnectionavailable").as<jsbind::Any>();
}

void PresentationRequest::onconnectionavailable(const jsbind::Any& value) {
    EventTarget::set("onconnectionavailable", value);
}


} // namespace webbind