#include "webbind/RTCIceCandidate.hpp"
#include "webbind/RTCLocalIceCandidateInit.hpp"
#include "webbind/RTCIceCandidateInit.hpp"

namespace webbind {

RTCIceCandidate RTCIceCandidate::take_ownership(Handle h) noexcept {
        return RTCIceCandidate(h);
    }
RTCIceCandidate RTCIceCandidate::clone() const noexcept { return *this; }
emlite::Val RTCIceCandidate::instance() noexcept { return emlite::Val::global("RTCIceCandidate"); }
RTCIceCandidate::RTCIceCandidate(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
RTCIceCandidate::RTCIceCandidate(const emlite::Val &val) noexcept: emlite::Val(val) {}

RTCIceCandidate::RTCIceCandidate() : emlite::Val(emlite::Val::global("RTCIceCandidate").new_()) {}

RTCIceCandidate::RTCIceCandidate(const RTCLocalIceCandidateInit& candidateInitDict) : emlite::Val(emlite::Val::global("RTCIceCandidate").new_(candidateInitDict)) {}

jsbind::String RTCIceCandidate::candidate() const {
    return emlite::Val::get("candidate").as<jsbind::String>();
}

jsbind::String RTCIceCandidate::sdpMid() const {
    return emlite::Val::get("sdpMid").as<jsbind::String>();
}

unsigned short RTCIceCandidate::sdpMLineIndex() const {
    return emlite::Val::get("sdpMLineIndex").as<unsigned short>();
}

jsbind::String RTCIceCandidate::foundation() const {
    return emlite::Val::get("foundation").as<jsbind::String>();
}

RTCIceComponent RTCIceCandidate::component() const {
    return emlite::Val::get("component").as<RTCIceComponent>();
}

unsigned long RTCIceCandidate::priority() const {
    return emlite::Val::get("priority").as<unsigned long>();
}

jsbind::String RTCIceCandidate::address() const {
    return emlite::Val::get("address").as<jsbind::String>();
}

RTCIceProtocol RTCIceCandidate::protocol() const {
    return emlite::Val::get("protocol").as<RTCIceProtocol>();
}

unsigned short RTCIceCandidate::port() const {
    return emlite::Val::get("port").as<unsigned short>();
}

RTCIceCandidateType RTCIceCandidate::type() const {
    return emlite::Val::get("type").as<RTCIceCandidateType>();
}

RTCIceTcpCandidateType RTCIceCandidate::tcpType() const {
    return emlite::Val::get("tcpType").as<RTCIceTcpCandidateType>();
}

jsbind::String RTCIceCandidate::relatedAddress() const {
    return emlite::Val::get("relatedAddress").as<jsbind::String>();
}

unsigned short RTCIceCandidate::relatedPort() const {
    return emlite::Val::get("relatedPort").as<unsigned short>();
}

jsbind::String RTCIceCandidate::usernameFragment() const {
    return emlite::Val::get("usernameFragment").as<jsbind::String>();
}

RTCIceServerTransportProtocol RTCIceCandidate::relayProtocol() const {
    return emlite::Val::get("relayProtocol").as<RTCIceServerTransportProtocol>();
}

jsbind::String RTCIceCandidate::url() const {
    return emlite::Val::get("url").as<jsbind::String>();
}

RTCIceCandidateInit RTCIceCandidate::toJSON() {
    return emlite::Val::call("toJSON").as<RTCIceCandidateInit>();
}


} // namespace webbind