#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "RTCSentRtpStreamStats.hpp"

namespace webbind {

/// Dictionary type RTCRemoteOutboundRtpStreamStats
class RTCRemoteOutboundRtpStreamStats : public RTCSentRtpStreamStats {
  explicit RTCRemoteOutboundRtpStreamStats(Handle h) noexcept;
public:
    static RTCRemoteOutboundRtpStreamStats take_ownership(Handle h) noexcept;
    explicit RTCRemoteOutboundRtpStreamStats(const emlite::Val &val) noexcept;
    RTCRemoteOutboundRtpStreamStats() noexcept;
    [[nodiscard]] RTCRemoteOutboundRtpStreamStats clone() const noexcept;
    /// Getter of the `localId` attribute.
    [[nodiscard]] jsbind::String localId() const;
    /// Setter of the `localId` attribute.
    void localId(const jsbind::String& value);
    /// Getter of the `remoteTimestamp` attribute.
    [[nodiscard]] jsbind::Any remoteTimestamp() const;
    /// Setter of the `remoteTimestamp` attribute.
    void remoteTimestamp(const jsbind::Any& value);
    /// Getter of the `reportsSent` attribute.
    [[nodiscard]] long long reportsSent() const;
    /// Setter of the `reportsSent` attribute.
    void reportsSent(long long value);
    /// Getter of the `roundTripTime` attribute.
    [[nodiscard]] double roundTripTime() const;
    /// Setter of the `roundTripTime` attribute.
    void roundTripTime(double value);
    /// Getter of the `totalRoundTripTime` attribute.
    [[nodiscard]] double totalRoundTripTime() const;
    /// Setter of the `totalRoundTripTime` attribute.
    void totalRoundTripTime(double value);
    /// Getter of the `roundTripTimeMeasurements` attribute.
    [[nodiscard]] long long roundTripTimeMeasurements() const;
    /// Setter of the `roundTripTimeMeasurements` attribute.
    void roundTripTimeMeasurements(long long value);
};

} // namespace webbind