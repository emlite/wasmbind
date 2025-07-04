#include <webbind/RTCPeerConnectionIceErrorEvent.hpp>


RTCPeerConnectionIceErrorEvent RTCPeerConnectionIceErrorEvent::take_ownership(Handle h) noexcept {
        return RTCPeerConnectionIceErrorEvent(h);
    }
RTCPeerConnectionIceErrorEvent RTCPeerConnectionIceErrorEvent::clone() const noexcept { return *this; }
RTCPeerConnectionIceErrorEvent::RTCPeerConnectionIceErrorEvent(Handle h) noexcept : Event(emlite::Val::take_ownership(h)) {}
RTCPeerConnectionIceErrorEvent::RTCPeerConnectionIceErrorEvent(const emlite::Val &val) noexcept: Event(val) {}


RTCPeerConnectionIceErrorEvent::RTCPeerConnectionIceErrorEvent(const jsbind::DOMString& type, const jsbind::Any& eventInitDict): Event(emlite::Val::global("RTCPeerConnectionIceErrorEvent").new_(type, eventInitDict)) {}

jsbind::DOMString RTCPeerConnectionIceErrorEvent::address() const {
    return Event::get("address").as<jsbind::DOMString>();
}

unsigned short RTCPeerConnectionIceErrorEvent::port() const {
    return Event::get("port").as<unsigned short>();
}

jsbind::USVString RTCPeerConnectionIceErrorEvent::url() const {
    return Event::get("url").as<jsbind::USVString>();
}

unsigned short RTCPeerConnectionIceErrorEvent::errorCode() const {
    return Event::get("errorCode").as<unsigned short>();
}

jsbind::USVString RTCPeerConnectionIceErrorEvent::errorText() const {
    return Event::get("errorText").as<jsbind::USVString>();
}

