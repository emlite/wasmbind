#include <webbind/RTCIceCandidate.hpp>
#include <webbind/RTCIceTransport.hpp>


RTCIceCandidate RTCIceCandidate::take_ownership(Handle h) noexcept {
        return RTCIceCandidate(h);
    }
RTCIceCandidate RTCIceCandidate::clone() const noexcept { return *this; }
RTCIceCandidate::RTCIceCandidate(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
RTCIceCandidate::RTCIceCandidate(const emlite::Val &val) noexcept: emlite::Val(val) {}


RTCIceCandidate::RTCIceCandidate(const jsbind::Any& candidateInitDict): emlite::Val(emlite::Val::global("RTCIceCandidate").new_(candidateInitDict)) {}

jsbind::DOMString RTCIceCandidate::candidate() const {
    return emlite::Val::get("candidate").as<jsbind::DOMString>();
}

jsbind::DOMString RTCIceCandidate::sdpMid() const {
    return emlite::Val::get("sdpMid").as<jsbind::DOMString>();
}

unsigned short RTCIceCandidate::sdpMLineIndex() const {
    return emlite::Val::get("sdpMLineIndex").as<unsigned short>();
}

jsbind::DOMString RTCIceCandidate::foundation() const {
    return emlite::Val::get("foundation").as<jsbind::DOMString>();
}

RTCIceComponent RTCIceCandidate::component() const {
    return emlite::Val::get("component").as<RTCIceComponent>();
}

unsigned long RTCIceCandidate::priority() const {
    return emlite::Val::get("priority").as<unsigned long>();
}

jsbind::DOMString RTCIceCandidate::address() const {
    return emlite::Val::get("address").as<jsbind::DOMString>();
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

jsbind::DOMString RTCIceCandidate::relatedAddress() const {
    return emlite::Val::get("relatedAddress").as<jsbind::DOMString>();
}

unsigned short RTCIceCandidate::relatedPort() const {
    return emlite::Val::get("relatedPort").as<unsigned short>();
}

jsbind::DOMString RTCIceCandidate::usernameFragment() const {
    return emlite::Val::get("usernameFragment").as<jsbind::DOMString>();
}

RTCIceServerTransportProtocol RTCIceCandidate::relayProtocol() const {
    return emlite::Val::get("relayProtocol").as<RTCIceServerTransportProtocol>();
}

jsbind::USVString RTCIceCandidate::url() const {
    return emlite::Val::get("url").as<jsbind::USVString>();
}

RTCIceCandidateInit RTCIceCandidate::toJSON() {
    return emlite::Val::call("toJSON").as<RTCIceCandidateInit>();
}

