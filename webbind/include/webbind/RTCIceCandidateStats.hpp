#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "RTCStats.hpp"

namespace webbind {

/// Dictionary type RTCIceCandidateStats
/// [`RTCIceCandidateStats`](https://developer.mozilla.org/en-US/docs/Web/API/RTCIceCandidateStats)
class RTCIceCandidateStats : public RTCStats {
  explicit RTCIceCandidateStats(Handle h) noexcept;
public:
    static RTCIceCandidateStats take_ownership(Handle h) noexcept;
    explicit RTCIceCandidateStats(const emlite::Val &val) noexcept;
    RTCIceCandidateStats() noexcept;
    [[nodiscard]] RTCIceCandidateStats clone() const noexcept;
    [[nodiscard]] jsbind::String transportId() const;
    void transportId(const jsbind::String& value);
    [[nodiscard]] jsbind::String address() const;
    void address(const jsbind::String& value);
    [[nodiscard]] long port() const;
    void port(long value);
    [[nodiscard]] jsbind::String protocol() const;
    void protocol(const jsbind::String& value);
    [[nodiscard]] RTCIceCandidateType candidateType() const;
    void candidateType(const RTCIceCandidateType& value);
    [[nodiscard]] long priority() const;
    void priority(long value);
    [[nodiscard]] jsbind::String url() const;
    void url(const jsbind::String& value);
    [[nodiscard]] RTCIceServerTransportProtocol relayProtocol() const;
    void relayProtocol(const RTCIceServerTransportProtocol& value);
    [[nodiscard]] jsbind::String foundation() const;
    void foundation(const jsbind::String& value);
    [[nodiscard]] jsbind::String relatedAddress() const;
    void relatedAddress(const jsbind::String& value);
    [[nodiscard]] long relatedPort() const;
    void relatedPort(long value);
    [[nodiscard]] jsbind::String usernameFragment() const;
    void usernameFragment(const jsbind::String& value);
    [[nodiscard]] RTCIceTcpCandidateType tcpType() const;
    void tcpType(const RTCIceTcpCandidateType& value);
};

} // namespace webbind