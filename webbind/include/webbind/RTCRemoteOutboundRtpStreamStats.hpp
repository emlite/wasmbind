#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "RTCSentRtpStreamStats.hpp"

namespace webbind {

/// Dictionary type RTCRemoteOutboundRtpStreamStats
/// [`RTCRemoteOutboundRtpStreamStats`](https://developer.mozilla.org/en-US/docs/Web/API/RTCRemoteOutboundRtpStreamStats)
class RTCRemoteOutboundRtpStreamStats : public RTCSentRtpStreamStats {
  explicit RTCRemoteOutboundRtpStreamStats(Handle h) noexcept;
public:
    static RTCRemoteOutboundRtpStreamStats take_ownership(Handle h) noexcept;
    explicit RTCRemoteOutboundRtpStreamStats(const emlite::Val &val) noexcept;
    RTCRemoteOutboundRtpStreamStats() noexcept;
    [[nodiscard]] RTCRemoteOutboundRtpStreamStats clone() const noexcept;
    [[nodiscard]] jsbind::String localId() const;
    void localId(const jsbind::String& value);
    [[nodiscard]] jsbind::Any remoteTimestamp() const;
    void remoteTimestamp(const jsbind::Any& value);
    [[nodiscard]] long long reportsSent() const;
    void reportsSent(long long value);
    [[nodiscard]] double roundTripTime() const;
    void roundTripTime(double value);
    [[nodiscard]] double totalRoundTripTime() const;
    void totalRoundTripTime(double value);
    [[nodiscard]] long long roundTripTimeMeasurements() const;
    void roundTripTimeMeasurements(long long value);
};

} // namespace webbind