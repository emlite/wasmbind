#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "RTCIceTransport.hpp"
#include "enums.hpp"


/// The RTCIceCandidate class.
/// [`RTCIceCandidate`](https://developer.mozilla.org/en-US/docs/Web/API/RTCIceCandidate)
class RTCIceCandidate : public emlite::Val {
    explicit RTCIceCandidate(Handle h) noexcept;

public:
    explicit RTCIceCandidate(const emlite::Val &val) noexcept;
    static RTCIceCandidate take_ownership(Handle h) noexcept;

    [[nodiscard]] RTCIceCandidate clone() const noexcept;
    /// The `new RTCIceCandidate(..)` constructor, creating a new RTCIceCandidate instance
    RTCIceCandidate();
    /// The `new RTCIceCandidate(..)` constructor, creating a new RTCIceCandidate instance
    RTCIceCandidate(const jsbind::Any& candidateInitDict);
    /// Getter of the `candidate` attribute.
    /// [`RTCIceCandidate.candidate`](https://developer.mozilla.org/en-US/docs/Web/API/RTCIceCandidate/candidate)
    [[nodiscard]] jsbind::String candidate() const;
    /// Getter of the `sdpMid` attribute.
    /// [`RTCIceCandidate.sdpMid`](https://developer.mozilla.org/en-US/docs/Web/API/RTCIceCandidate/sdpMid)
    [[nodiscard]] jsbind::String sdpMid() const;
    /// Getter of the `sdpMLineIndex` attribute.
    /// [`RTCIceCandidate.sdpMLineIndex`](https://developer.mozilla.org/en-US/docs/Web/API/RTCIceCandidate/sdpMLineIndex)
    [[nodiscard]] unsigned short sdpMLineIndex() const;
    /// Getter of the `foundation` attribute.
    /// [`RTCIceCandidate.foundation`](https://developer.mozilla.org/en-US/docs/Web/API/RTCIceCandidate/foundation)
    [[nodiscard]] jsbind::String foundation() const;
    /// Getter of the `component` attribute.
    /// [`RTCIceCandidate.component`](https://developer.mozilla.org/en-US/docs/Web/API/RTCIceCandidate/component)
    [[nodiscard]] RTCIceComponent component() const;
    /// Getter of the `priority` attribute.
    /// [`RTCIceCandidate.priority`](https://developer.mozilla.org/en-US/docs/Web/API/RTCIceCandidate/priority)
    [[nodiscard]] unsigned long priority() const;
    /// Getter of the `address` attribute.
    /// [`RTCIceCandidate.address`](https://developer.mozilla.org/en-US/docs/Web/API/RTCIceCandidate/address)
    [[nodiscard]] jsbind::String address() const;
    /// Getter of the `protocol` attribute.
    /// [`RTCIceCandidate.protocol`](https://developer.mozilla.org/en-US/docs/Web/API/RTCIceCandidate/protocol)
    [[nodiscard]] RTCIceProtocol protocol() const;
    /// Getter of the `port` attribute.
    /// [`RTCIceCandidate.port`](https://developer.mozilla.org/en-US/docs/Web/API/RTCIceCandidate/port)
    [[nodiscard]] unsigned short port() const;
    /// Getter of the `type` attribute.
    /// [`RTCIceCandidate.type`](https://developer.mozilla.org/en-US/docs/Web/API/RTCIceCandidate/type)
    [[nodiscard]] RTCIceCandidateType type() const;
    /// Getter of the `tcpType` attribute.
    /// [`RTCIceCandidate.tcpType`](https://developer.mozilla.org/en-US/docs/Web/API/RTCIceCandidate/tcpType)
    [[nodiscard]] RTCIceTcpCandidateType tcpType() const;
    /// Getter of the `relatedAddress` attribute.
    /// [`RTCIceCandidate.relatedAddress`](https://developer.mozilla.org/en-US/docs/Web/API/RTCIceCandidate/relatedAddress)
    [[nodiscard]] jsbind::String relatedAddress() const;
    /// Getter of the `relatedPort` attribute.
    /// [`RTCIceCandidate.relatedPort`](https://developer.mozilla.org/en-US/docs/Web/API/RTCIceCandidate/relatedPort)
    [[nodiscard]] unsigned short relatedPort() const;
    /// Getter of the `usernameFragment` attribute.
    /// [`RTCIceCandidate.usernameFragment`](https://developer.mozilla.org/en-US/docs/Web/API/RTCIceCandidate/usernameFragment)
    [[nodiscard]] jsbind::String usernameFragment() const;
    /// Getter of the `relayProtocol` attribute.
    /// [`RTCIceCandidate.relayProtocol`](https://developer.mozilla.org/en-US/docs/Web/API/RTCIceCandidate/relayProtocol)
    [[nodiscard]] RTCIceServerTransportProtocol relayProtocol() const;
    /// Getter of the `url` attribute.
    /// [`RTCIceCandidate.url`](https://developer.mozilla.org/en-US/docs/Web/API/RTCIceCandidate/url)
    [[nodiscard]] jsbind::String url() const;
    /// The toJSON method.
    /// [`RTCIceCandidate.toJSON`](https://developer.mozilla.org/en-US/docs/Web/API/RTCIceCandidate/toJSON)
    RTCIceCandidateInit toJSON();
};

