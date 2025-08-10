#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "enums.hpp"

namespace webbind {

class RTCLocalIceCandidateInit;
class RTCIceCandidateInit;

/// Interface RTCIceCandidate
/// [`RTCIceCandidate`](https://developer.mozilla.org/en-US/docs/Web/API/RTCIceCandidate)
class RTCIceCandidate : public emlite::Val {
    explicit RTCIceCandidate(Handle h) noexcept;
public:
    explicit RTCIceCandidate(const emlite::Val &val) noexcept;
    static RTCIceCandidate take_ownership(Handle h) noexcept;
    [[nodiscard]] RTCIceCandidate clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// The `new RTCIceCandidate(..)` constructor, creating a new RTCIceCandidate instance
    RTCIceCandidate();
    /// The `new RTCIceCandidate(..)` constructor, creating a new RTCIceCandidate instance
    RTCIceCandidate(const RTCLocalIceCandidateInit& candidateInitDict);
    /// [`RTCIceCandidate.candidate`](https://developer.mozilla.org/en-US/docs/Web/API/RTCIceCandidate/candidate)
    /// [`RTCIceCandidate.candidate`](https://developer.mozilla.org/en-US/docs/Web/API/RTCIceCandidate/candidate)
    [[nodiscard]] jsbind::String candidate() const;
    /// [`RTCIceCandidate.sdpMid`](https://developer.mozilla.org/en-US/docs/Web/API/RTCIceCandidate/sdpMid)
    /// [`RTCIceCandidate.sdpMid`](https://developer.mozilla.org/en-US/docs/Web/API/RTCIceCandidate/sdpMid)
    [[nodiscard]] jsbind::String sdpMid() const;
    /// [`RTCIceCandidate.sdpMLineIndex`](https://developer.mozilla.org/en-US/docs/Web/API/RTCIceCandidate/sdpMLineIndex)
    /// [`RTCIceCandidate.sdpMLineIndex`](https://developer.mozilla.org/en-US/docs/Web/API/RTCIceCandidate/sdpMLineIndex)
    [[nodiscard]] unsigned short sdpMLineIndex() const;
    /// [`RTCIceCandidate.foundation`](https://developer.mozilla.org/en-US/docs/Web/API/RTCIceCandidate/foundation)
    /// [`RTCIceCandidate.foundation`](https://developer.mozilla.org/en-US/docs/Web/API/RTCIceCandidate/foundation)
    [[nodiscard]] jsbind::String foundation() const;
    /// [`RTCIceCandidate.component`](https://developer.mozilla.org/en-US/docs/Web/API/RTCIceCandidate/component)
    /// [`RTCIceCandidate.component`](https://developer.mozilla.org/en-US/docs/Web/API/RTCIceCandidate/component)
    [[nodiscard]] RTCIceComponent component() const;
    /// [`RTCIceCandidate.priority`](https://developer.mozilla.org/en-US/docs/Web/API/RTCIceCandidate/priority)
    /// [`RTCIceCandidate.priority`](https://developer.mozilla.org/en-US/docs/Web/API/RTCIceCandidate/priority)
    [[nodiscard]] unsigned long priority() const;
    /// [`RTCIceCandidate.address`](https://developer.mozilla.org/en-US/docs/Web/API/RTCIceCandidate/address)
    /// [`RTCIceCandidate.address`](https://developer.mozilla.org/en-US/docs/Web/API/RTCIceCandidate/address)
    [[nodiscard]] jsbind::String address() const;
    /// [`RTCIceCandidate.protocol`](https://developer.mozilla.org/en-US/docs/Web/API/RTCIceCandidate/protocol)
    /// [`RTCIceCandidate.protocol`](https://developer.mozilla.org/en-US/docs/Web/API/RTCIceCandidate/protocol)
    [[nodiscard]] RTCIceProtocol protocol() const;
    /// [`RTCIceCandidate.port`](https://developer.mozilla.org/en-US/docs/Web/API/RTCIceCandidate/port)
    /// [`RTCIceCandidate.port`](https://developer.mozilla.org/en-US/docs/Web/API/RTCIceCandidate/port)
    [[nodiscard]] unsigned short port() const;
    /// [`RTCIceCandidate.type`](https://developer.mozilla.org/en-US/docs/Web/API/RTCIceCandidate/type)
    /// [`RTCIceCandidate.type`](https://developer.mozilla.org/en-US/docs/Web/API/RTCIceCandidate/type)
    [[nodiscard]] RTCIceCandidateType type() const;
    /// [`RTCIceCandidate.tcpType`](https://developer.mozilla.org/en-US/docs/Web/API/RTCIceCandidate/tcpType)
    /// [`RTCIceCandidate.tcpType`](https://developer.mozilla.org/en-US/docs/Web/API/RTCIceCandidate/tcpType)
    [[nodiscard]] RTCIceTcpCandidateType tcpType() const;
    /// [`RTCIceCandidate.relatedAddress`](https://developer.mozilla.org/en-US/docs/Web/API/RTCIceCandidate/relatedAddress)
    /// [`RTCIceCandidate.relatedAddress`](https://developer.mozilla.org/en-US/docs/Web/API/RTCIceCandidate/relatedAddress)
    [[nodiscard]] jsbind::String relatedAddress() const;
    /// [`RTCIceCandidate.relatedPort`](https://developer.mozilla.org/en-US/docs/Web/API/RTCIceCandidate/relatedPort)
    /// [`RTCIceCandidate.relatedPort`](https://developer.mozilla.org/en-US/docs/Web/API/RTCIceCandidate/relatedPort)
    [[nodiscard]] unsigned short relatedPort() const;
    /// [`RTCIceCandidate.usernameFragment`](https://developer.mozilla.org/en-US/docs/Web/API/RTCIceCandidate/usernameFragment)
    /// [`RTCIceCandidate.usernameFragment`](https://developer.mozilla.org/en-US/docs/Web/API/RTCIceCandidate/usernameFragment)
    [[nodiscard]] jsbind::String usernameFragment() const;
    /// [`RTCIceCandidate.relayProtocol`](https://developer.mozilla.org/en-US/docs/Web/API/RTCIceCandidate/relayProtocol)
    /// [`RTCIceCandidate.relayProtocol`](https://developer.mozilla.org/en-US/docs/Web/API/RTCIceCandidate/relayProtocol)
    [[nodiscard]] RTCIceServerTransportProtocol relayProtocol() const;
    /// [`RTCIceCandidate.url`](https://developer.mozilla.org/en-US/docs/Web/API/RTCIceCandidate/url)
    /// [`RTCIceCandidate.url`](https://developer.mozilla.org/en-US/docs/Web/API/RTCIceCandidate/url)
    [[nodiscard]] jsbind::String url() const;
    /// The toJSON method.
    /// [`RTCIceCandidate.toJSON`](https://developer.mozilla.org/en-US/docs/Web/API/RTCIceCandidate/toJSON)
    RTCIceCandidateInit toJSON();
};

} // namespace webbind