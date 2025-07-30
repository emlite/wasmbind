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
    jsbind::String candidate() const;
    jsbind::String sdpMid() const;
    unsigned short sdpMLineIndex() const;
    jsbind::String foundation() const;
    RTCIceComponent component() const;
    unsigned long priority() const;
    jsbind::String address() const;
    RTCIceProtocol protocol() const;
    unsigned short port() const;
    RTCIceCandidateType type() const;
    RTCIceTcpCandidateType tcpType() const;
    jsbind::String relatedAddress() const;
    unsigned short relatedPort() const;
    jsbind::String usernameFragment() const;
    RTCIceServerTransportProtocol relayProtocol() const;
    jsbind::String url() const;
    RTCIceCandidateInit toJSON();
};

