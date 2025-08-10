#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "RTCReceivedRtpStreamStats.hpp"

namespace webbind {

/// Dictionary type RTCRemoteInboundRtpStreamStats
/// [`RTCRemoteInboundRtpStreamStats`](https://developer.mozilla.org/en-US/docs/Web/API/RTCRemoteInboundRtpStreamStats)
class RTCRemoteInboundRtpStreamStats : public RTCReceivedRtpStreamStats {
  explicit RTCRemoteInboundRtpStreamStats(Handle h) noexcept;
public:
    static RTCRemoteInboundRtpStreamStats take_ownership(Handle h) noexcept;
    explicit RTCRemoteInboundRtpStreamStats(const emlite::Val &val) noexcept;
    RTCRemoteInboundRtpStreamStats() noexcept;
    [[nodiscard]] RTCRemoteInboundRtpStreamStats clone() const noexcept;
    [[nodiscard]] jsbind::String localId() const;
    void localId(const jsbind::String& value);
    [[nodiscard]] double roundTripTime() const;
    void roundTripTime(double value);
    [[nodiscard]] double totalRoundTripTime() const;
    void totalRoundTripTime(double value);
    [[nodiscard]] double fractionLost() const;
    void fractionLost(double value);
    [[nodiscard]] long long roundTripTimeMeasurements() const;
    void roundTripTimeMeasurements(long long value);
    [[nodiscard]] long long packetsWithBleachedEct1Marking() const;
    void packetsWithBleachedEct1Marking(long long value);
};

} // namespace webbind