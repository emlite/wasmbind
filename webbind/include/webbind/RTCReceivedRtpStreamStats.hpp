#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "RTCRtpStreamStats.hpp"

namespace webbind {

/// Dictionary type RTCReceivedRtpStreamStats
class RTCReceivedRtpStreamStats : public RTCRtpStreamStats {
  explicit RTCReceivedRtpStreamStats(Handle h) noexcept;
public:
    static RTCReceivedRtpStreamStats take_ownership(Handle h) noexcept;
    explicit RTCReceivedRtpStreamStats(const emlite::Val &val) noexcept;
    RTCReceivedRtpStreamStats() noexcept;
    [[nodiscard]] RTCReceivedRtpStreamStats clone() const noexcept;
    /// Getter of the `packetsReceived` attribute.
    [[nodiscard]] long long packetsReceived() const;
    /// Setter of the `packetsReceived` attribute.
    void packetsReceived(long long value);
    /// Getter of the `packetsReceivedWithEct1` attribute.
    [[nodiscard]] long long packetsReceivedWithEct1() const;
    /// Setter of the `packetsReceivedWithEct1` attribute.
    void packetsReceivedWithEct1(long long value);
    /// Getter of the `packetsReceivedWithCe` attribute.
    [[nodiscard]] long long packetsReceivedWithCe() const;
    /// Setter of the `packetsReceivedWithCe` attribute.
    void packetsReceivedWithCe(long long value);
    /// Getter of the `packetsReportedAsLost` attribute.
    [[nodiscard]] long long packetsReportedAsLost() const;
    /// Setter of the `packetsReportedAsLost` attribute.
    void packetsReportedAsLost(long long value);
    /// Getter of the `packetsReportedAsLostButRecovered` attribute.
    [[nodiscard]] long long packetsReportedAsLostButRecovered() const;
    /// Setter of the `packetsReportedAsLostButRecovered` attribute.
    void packetsReportedAsLostButRecovered(long long value);
    /// Getter of the `packetsLost` attribute.
    [[nodiscard]] long long packetsLost() const;
    /// Setter of the `packetsLost` attribute.
    void packetsLost(long long value);
    /// Getter of the `jitter` attribute.
    [[nodiscard]] double jitter() const;
    /// Setter of the `jitter` attribute.
    void jitter(double value);
};

} // namespace webbind