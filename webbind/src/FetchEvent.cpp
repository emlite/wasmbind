#include "webbind/FetchEvent.hpp"
#include "webbind/FetchEventInit.hpp"
#include "webbind/Request.hpp"
#include "webbind/Response.hpp"

namespace webbind {

FetchEvent FetchEvent::take_ownership(Handle h) noexcept {
        return FetchEvent(h);
    }
FetchEvent FetchEvent::clone() const noexcept { return *this; }
emlite::Val FetchEvent::instance() noexcept { return emlite::Val::global("FetchEvent"); }
FetchEvent::FetchEvent(Handle h) noexcept : ExtendableEvent(emlite::Val::take_ownership(h)) {}
FetchEvent::FetchEvent(const emlite::Val &val) noexcept: ExtendableEvent(val) {}

FetchEvent::FetchEvent(const jsbind::String& type, const FetchEventInit& eventInitDict) : ExtendableEvent(emlite::Val::global("FetchEvent").new_(type, eventInitDict)) {}

Request FetchEvent::request() const {
    return ExtendableEvent::get("request").as<Request>();
}

jsbind::Promise<jsbind::Any> FetchEvent::preloadResponse() const {
    return ExtendableEvent::get("preloadResponse").as<jsbind::Promise<jsbind::Any>>();
}

jsbind::String FetchEvent::clientId() const {
    return ExtendableEvent::get("clientId").as<jsbind::String>();
}

jsbind::String FetchEvent::resultingClientId() const {
    return ExtendableEvent::get("resultingClientId").as<jsbind::String>();
}

jsbind::String FetchEvent::replacesClientId() const {
    return ExtendableEvent::get("replacesClientId").as<jsbind::String>();
}

jsbind::Promise<jsbind::Undefined> FetchEvent::handled() const {
    return ExtendableEvent::get("handled").as<jsbind::Promise<jsbind::Undefined>>();
}

jsbind::Undefined FetchEvent::respondWith(const jsbind::Promise<Response>& r) {
    return ExtendableEvent::call("respondWith", r).as<jsbind::Undefined>();
}


} // namespace webbind