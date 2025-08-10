#include <webbind/RTCLocalIceCandidateInit.hpp>

using emlite::Val;
namespace webbind {

RTCLocalIceCandidateInit::RTCLocalIceCandidateInit(Handle h) noexcept : RTCIceCandidateInit(emlite::Val::take_ownership(h)) {}
RTCLocalIceCandidateInit RTCLocalIceCandidateInit::take_ownership(Handle h) noexcept {
        return RTCLocalIceCandidateInit(h);
    }
RTCLocalIceCandidateInit::RTCLocalIceCandidateInit(const emlite::Val &val) noexcept: RTCIceCandidateInit(val) {}
RTCLocalIceCandidateInit::RTCLocalIceCandidateInit() noexcept: RTCIceCandidateInit(emlite::Val::object()) {}
RTCLocalIceCandidateInit RTCLocalIceCandidateInit::clone() const noexcept { return *this; }

RTCIceServerTransportProtocol RTCLocalIceCandidateInit::relayProtocol() const {
    return emlite::Val::get("relayProtocol").as<RTCIceServerTransportProtocol>();
}

void RTCLocalIceCandidateInit::relayProtocol(const RTCIceServerTransportProtocol& value) {
    emlite::Val::set("relayProtocol", value);
}

jsbind::String RTCLocalIceCandidateInit::url() const {
    return emlite::Val::get("url").as<jsbind::String>();
}

void RTCLocalIceCandidateInit::url(const jsbind::String& value) {
    emlite::Val::set("url", value);
}


} // namespace webbind