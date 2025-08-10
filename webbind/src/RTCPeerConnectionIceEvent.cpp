#include <webbind/RTCPeerConnectionIceEvent.hpp>
#include <webbind/RTCPeerConnectionIceEventInit.hpp>
#include <webbind/RTCIceCandidate.hpp>

namespace webbind {

RTCPeerConnectionIceEvent RTCPeerConnectionIceEvent::take_ownership(Handle h) noexcept {
    return RTCPeerConnectionIceEvent(h);
}

RTCPeerConnectionIceEvent RTCPeerConnectionIceEvent::clone() const noexcept { return *this; }

emlite::Val RTCPeerConnectionIceEvent::instance() noexcept { return emlite::Val::global("RTCPeerConnectionIceEvent"); }

RTCPeerConnectionIceEvent::RTCPeerConnectionIceEvent(Handle h) noexcept : Event(emlite::Val::take_ownership(h)) {}

RTCPeerConnectionIceEvent::RTCPeerConnectionIceEvent(const emlite::Val &val) noexcept: Event(val) {}

RTCPeerConnectionIceEvent::RTCPeerConnectionIceEvent(const jsbind::String& type) : Event(emlite::Val::global("RTCPeerConnectionIceEvent").new_(type)) {}

RTCPeerConnectionIceEvent::RTCPeerConnectionIceEvent(const jsbind::String& type, const RTCPeerConnectionIceEventInit& eventInitDict) : Event(emlite::Val::global("RTCPeerConnectionIceEvent").new_(type, eventInitDict)) {}

RTCIceCandidate RTCPeerConnectionIceEvent::candidate() const {
    return Event::get("candidate").as<RTCIceCandidate>();
}

jsbind::String RTCPeerConnectionIceEvent::url() const {
    return Event::get("url").as<jsbind::String>();
}


} // namespace webbind