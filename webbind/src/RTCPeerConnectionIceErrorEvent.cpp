#include <webbind/RTCPeerConnectionIceErrorEvent.hpp>
#include <webbind/RTCPeerConnectionIceErrorEventInit.hpp>

namespace webbind {

RTCPeerConnectionIceErrorEvent RTCPeerConnectionIceErrorEvent::take_ownership(Handle h) noexcept {
    return RTCPeerConnectionIceErrorEvent(h);
}

RTCPeerConnectionIceErrorEvent RTCPeerConnectionIceErrorEvent::clone() const noexcept { return *this; }

emlite::Val RTCPeerConnectionIceErrorEvent::instance() noexcept { return emlite::Val::global("RTCPeerConnectionIceErrorEvent"); }

RTCPeerConnectionIceErrorEvent::RTCPeerConnectionIceErrorEvent(Handle h) noexcept : Event(emlite::Val::take_ownership(h)) {}

RTCPeerConnectionIceErrorEvent::RTCPeerConnectionIceErrorEvent(const emlite::Val &val) noexcept: Event(val) {}

RTCPeerConnectionIceErrorEvent::RTCPeerConnectionIceErrorEvent(const jsbind::String& type, const RTCPeerConnectionIceErrorEventInit& eventInitDict) : Event(emlite::Val::global("RTCPeerConnectionIceErrorEvent").new_(type, eventInitDict)) {}

jsbind::String RTCPeerConnectionIceErrorEvent::address() const {
    return Event::get("address").as<jsbind::String>();
}

unsigned short RTCPeerConnectionIceErrorEvent::port() const {
    return Event::get("port").as<unsigned short>();
}

jsbind::String RTCPeerConnectionIceErrorEvent::url() const {
    return Event::get("url").as<jsbind::String>();
}

unsigned short RTCPeerConnectionIceErrorEvent::errorCode() const {
    return Event::get("errorCode").as<unsigned short>();
}

jsbind::String RTCPeerConnectionIceErrorEvent::errorText() const {
    return Event::get("errorText").as<jsbind::String>();
}


} // namespace webbind