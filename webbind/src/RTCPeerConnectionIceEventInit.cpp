#include <webbind/RTCPeerConnectionIceEventInit.hpp>
#include <webbind/RTCIceCandidate.hpp>

namespace webbind {

RTCPeerConnectionIceEventInit::RTCPeerConnectionIceEventInit(Handle h) noexcept : EventInit(emlite::Val::take_ownership(h)) {}
RTCPeerConnectionIceEventInit RTCPeerConnectionIceEventInit::take_ownership(Handle h) noexcept {
    return RTCPeerConnectionIceEventInit(h);
}

RTCPeerConnectionIceEventInit::RTCPeerConnectionIceEventInit(const emlite::Val &val) noexcept: EventInit(val) {}

RTCPeerConnectionIceEventInit::RTCPeerConnectionIceEventInit() noexcept: EventInit(emlite::Val::object()) {}

RTCPeerConnectionIceEventInit RTCPeerConnectionIceEventInit::clone() const noexcept { return *this; }

RTCIceCandidate RTCPeerConnectionIceEventInit::candidate() const {
    return emlite::Val::get("candidate").as<RTCIceCandidate>();
}

void RTCPeerConnectionIceEventInit::candidate(const RTCIceCandidate& value) {
    emlite::Val::set("candidate", value);
}

jsbind::String RTCPeerConnectionIceEventInit::url() const {
    return emlite::Val::get("url").as<jsbind::String>();
}

void RTCPeerConnectionIceEventInit::url(const jsbind::String& value) {
    emlite::Val::set("url", value);
}


} // namespace webbind