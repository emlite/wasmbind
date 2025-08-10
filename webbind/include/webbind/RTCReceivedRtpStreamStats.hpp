#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "RTCRtpStreamStats.hpp"

namespace webbind {

/// Dictionary type RTCReceivedRtpStreamStats
/// [`RTCReceivedRtpStreamStats`](https://developer.mozilla.org/en-US/docs/Web/API/RTCReceivedRtpStreamStats)
class RTCReceivedRtpStreamStats : public RTCRtpStreamStats {
  explicit RTCReceivedRtpStreamStats(Handle h) noexcept;
public:
    static RTCReceivedRtpStreamStats take_ownership(Handle h) noexcept;
    explicit RTCReceivedRtpStreamStats(const emlite::Val &val) noexcept;
    RTCReceivedRtpStreamStats() noexcept;
    [[nodiscard]] RTCReceivedRtpStreamStats clone() const noexcept;
    [[nodiscard]] long long packetsReceived() const;
    void packetsReceived(long long value);
    [[nodiscard]] long long packetsReceivedWithEct1() const;
    void packetsReceivedWithEct1(long long value);
    [[nodiscard]] long long packetsReceivedWithCe() const;
    void packetsReceivedWithCe(long long value);
    [[nodiscard]] long long packetsReportedAsLost() const;
    void packetsReportedAsLost(long long value);
    [[nodiscard]] long long packetsReportedAsLostButRecovered() const;
    void packetsReportedAsLostButRecovered(long long value);
    [[nodiscard]] long long packetsLost() const;
    void packetsLost(long long value);
    [[nodiscard]] double jitter() const;
    void jitter(double value);
};

} // namespace webbind