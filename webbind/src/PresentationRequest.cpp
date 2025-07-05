#include <webbind/PresentationRequest.hpp>
#include <webbind/PresentationConnection.hpp>
#include <webbind/PresentationAvailability.hpp>


PresentationRequest PresentationRequest::take_ownership(Handle h) noexcept {
        return PresentationRequest(h);
    }
PresentationRequest PresentationRequest::clone() const noexcept { return *this; }
PresentationRequest::PresentationRequest(Handle h) noexcept : EventTarget(emlite::Val::take_ownership(h)) {}
PresentationRequest::PresentationRequest(const emlite::Val &val) noexcept: EventTarget(val) {}


PresentationRequest::PresentationRequest(const jsbind::Sequence<jsbind::USVString>& urls) : EventTarget(emlite::Val::global("PresentationRequest").new_(urls)) {}

jsbind::Promise PresentationRequest::start() {
    return EventTarget::call("start").as<jsbind::Promise>();
}

jsbind::Promise PresentationRequest::reconnect(const jsbind::USVString& presentationId) {
    return EventTarget::call("reconnect", presentationId).as<jsbind::Promise>();
}

jsbind::Promise PresentationRequest::getAvailability() {
    return EventTarget::call("getAvailability").as<jsbind::Promise>();
}

jsbind::Any PresentationRequest::onconnectionavailable() const {
    return EventTarget::get("onconnectionavailable").as<jsbind::Any>();
}

void PresentationRequest::onconnectionavailable(const jsbind::Any& value) {
    EventTarget::set("onconnectionavailable", value);
}

