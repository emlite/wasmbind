#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "RTCStats.hpp"

namespace webbind {

/// Dictionary type RTCIceCandidateStats
class RTCIceCandidateStats : public RTCStats {
  explicit RTCIceCandidateStats(Handle h) noexcept;
public:
    static RTCIceCandidateStats take_ownership(Handle h) noexcept;
    explicit RTCIceCandidateStats(const emlite::Val &val) noexcept;
    RTCIceCandidateStats() noexcept;
    [[nodiscard]] RTCIceCandidateStats clone() const noexcept;
    /// Getter of the `transportId` attribute.
    [[nodiscard]] jsbind::String transportId() const;
    /// Setter of the `transportId` attribute.
    void transportId(const jsbind::String& value);
    /// Getter of the `address` attribute.
    [[nodiscard]] jsbind::String address() const;
    /// Setter of the `address` attribute.
    void address(const jsbind::String& value);
    /// Getter of the `port` attribute.
    [[nodiscard]] long port() const;
    /// Setter of the `port` attribute.
    void port(long value);
    /// Getter of the `protocol` attribute.
    [[nodiscard]] jsbind::String protocol() const;
    /// Setter of the `protocol` attribute.
    void protocol(const jsbind::String& value);
    /// Getter of the `candidateType` attribute.
    [[nodiscard]] RTCIceCandidateType candidateType() const;
    /// Setter of the `candidateType` attribute.
    void candidateType(const RTCIceCandidateType& value);
    /// Getter of the `priority` attribute.
    [[nodiscard]] long priority() const;
    /// Setter of the `priority` attribute.
    void priority(long value);
    /// Getter of the `url` attribute.
    [[nodiscard]] jsbind::String url() const;
    /// Setter of the `url` attribute.
    void url(const jsbind::String& value);
    /// Getter of the `relayProtocol` attribute.
    [[nodiscard]] RTCIceServerTransportProtocol relayProtocol() const;
    /// Setter of the `relayProtocol` attribute.
    void relayProtocol(const RTCIceServerTransportProtocol& value);
    /// Getter of the `foundation` attribute.
    [[nodiscard]] jsbind::String foundation() const;
    /// Setter of the `foundation` attribute.
    void foundation(const jsbind::String& value);
    /// Getter of the `relatedAddress` attribute.
    [[nodiscard]] jsbind::String relatedAddress() const;
    /// Setter of the `relatedAddress` attribute.
    void relatedAddress(const jsbind::String& value);
    /// Getter of the `relatedPort` attribute.
    [[nodiscard]] long relatedPort() const;
    /// Setter of the `relatedPort` attribute.
    void relatedPort(long value);
    /// Getter of the `usernameFragment` attribute.
    [[nodiscard]] jsbind::String usernameFragment() const;
    /// Setter of the `usernameFragment` attribute.
    void usernameFragment(const jsbind::String& value);
    /// Getter of the `tcpType` attribute.
    [[nodiscard]] RTCIceTcpCandidateType tcpType() const;
    /// Setter of the `tcpType` attribute.
    void tcpType(const RTCIceTcpCandidateType& value);
};

} // namespace webbind