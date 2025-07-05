#include <webbind/FetchEvent.hpp>
#include <webbind/Request.hpp>
#include <webbind/Response.hpp>


FetchEvent FetchEvent::take_ownership(Handle h) noexcept {
        return FetchEvent(h);
    }
FetchEvent FetchEvent::clone() const noexcept { return *this; }
FetchEvent::FetchEvent(Handle h) noexcept : ExtendableEvent(emlite::Val::take_ownership(h)) {}
FetchEvent::FetchEvent(const emlite::Val &val) noexcept: ExtendableEvent(val) {}


FetchEvent::FetchEvent(const jsbind::DOMString& type, const jsbind::Any& eventInitDict) : ExtendableEvent(emlite::Val::global("FetchEvent").new_(type, eventInitDict)) {}

Request FetchEvent::request() const {
    return ExtendableEvent::get("request").as<Request>();
}

jsbind::Promise FetchEvent::preloadResponse() const {
    return ExtendableEvent::get("preloadResponse").as<jsbind::Promise>();
}

jsbind::DOMString FetchEvent::clientId() const {
    return ExtendableEvent::get("clientId").as<jsbind::DOMString>();
}

jsbind::DOMString FetchEvent::resultingClientId() const {
    return ExtendableEvent::get("resultingClientId").as<jsbind::DOMString>();
}

jsbind::DOMString FetchEvent::replacesClientId() const {
    return ExtendableEvent::get("replacesClientId").as<jsbind::DOMString>();
}

jsbind::Promise FetchEvent::handled() const {
    return ExtendableEvent::get("handled").as<jsbind::Promise>();
}

jsbind::Undefined FetchEvent::respondWith(const jsbind::Promise& r) {
    return ExtendableEvent::call("respondWith", r).as<jsbind::Undefined>();
}

