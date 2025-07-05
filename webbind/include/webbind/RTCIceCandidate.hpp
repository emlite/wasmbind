#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "RTCIceTransport.hpp"
#include "enums.hpp"


class RTCIceCandidate : public emlite::Val {
    explicit RTCIceCandidate(Handle h) noexcept;

public:
    explicit RTCIceCandidate(const emlite::Val &val) noexcept;
    static RTCIceCandidate take_ownership(Handle h) noexcept;

    RTCIceCandidate clone() const noexcept;
    RTCIceCandidate();
    RTCIceCandidate(const jsbind::Any& candidateInitDict);
    jsbind::DOMString candidate() const;
    jsbind::DOMString sdpMid() const;
    unsigned short sdpMLineIndex() const;
    jsbind::DOMString foundation() const;
    RTCIceComponent component() const;
    unsigned long priority() const;
    jsbind::DOMString address() const;
    RTCIceProtocol protocol() const;
    unsigned short port() const;
    RTCIceCandidateType type() const;
    RTCIceTcpCandidateType tcpType() const;
    jsbind::DOMString relatedAddress() const;
    unsigned short relatedPort() const;
    jsbind::DOMString usernameFragment() const;
    RTCIceServerTransportProtocol relayProtocol() const;
    jsbind::USVString url() const;
    RTCIceCandidateInit toJSON();
};

