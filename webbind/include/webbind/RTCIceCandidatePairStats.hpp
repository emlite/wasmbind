#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "RTCStats.hpp"

namespace webbind {

/// Dictionary type RTCIceCandidatePairStats
/// [`RTCIceCandidatePairStats`](https://developer.mozilla.org/en-US/docs/Web/API/RTCIceCandidatePairStats)
class RTCIceCandidatePairStats : public RTCStats {
  explicit RTCIceCandidatePairStats(Handle h) noexcept;
public:
    static RTCIceCandidatePairStats take_ownership(Handle h) noexcept;
    explicit RTCIceCandidatePairStats(const emlite::Val &val) noexcept;
    RTCIceCandidatePairStats() noexcept;
    [[nodiscard]] RTCIceCandidatePairStats clone() const noexcept;
    [[nodiscard]] jsbind::String transportId() const;
    void transportId(const jsbind::String& value);
    [[nodiscard]] jsbind::String localCandidateId() const;
    void localCandidateId(const jsbind::String& value);
    [[nodiscard]] jsbind::String remoteCandidateId() const;
    void remoteCandidateId(const jsbind::String& value);
    [[nodiscard]] RTCStatsIceCandidatePairState state() const;
    void state(const RTCStatsIceCandidatePairState& value);
    [[nodiscard]] bool nominated() const;
    void nominated(bool value);
    [[nodiscard]] long long packetsSent() const;
    void packetsSent(long long value);
    [[nodiscard]] long long packetsReceived() const;
    void packetsReceived(long long value);
    [[nodiscard]] long long bytesSent() const;
    void bytesSent(long long value);
    [[nodiscard]] long long bytesReceived() const;
    void bytesReceived(long long value);
    [[nodiscard]] jsbind::Any lastPacketSentTimestamp() const;
    void lastPacketSentTimestamp(const jsbind::Any& value);
    [[nodiscard]] jsbind::Any lastPacketReceivedTimestamp() const;
    void lastPacketReceivedTimestamp(const jsbind::Any& value);
    [[nodiscard]] double totalRoundTripTime() const;
    void totalRoundTripTime(double value);
    [[nodiscard]] double currentRoundTripTime() const;
    void currentRoundTripTime(double value);
    [[nodiscard]] double availableOutgoingBitrate() const;
    void availableOutgoingBitrate(double value);
    [[nodiscard]] double availableIncomingBitrate() const;
    void availableIncomingBitrate(double value);
    [[nodiscard]] long long requestsReceived() const;
    void requestsReceived(long long value);
    [[nodiscard]] long long requestsSent() const;
    void requestsSent(long long value);
    [[nodiscard]] long long responsesReceived() const;
    void responsesReceived(long long value);
    [[nodiscard]] long long responsesSent() const;
    void responsesSent(long long value);
    [[nodiscard]] long long consentRequestsSent() const;
    void consentRequestsSent(long long value);
    [[nodiscard]] unsigned long packetsDiscardedOnSend() const;
    void packetsDiscardedOnSend(unsigned long value);
    [[nodiscard]] long long bytesDiscardedOnSend() const;
    void bytesDiscardedOnSend(long long value);
};

} // namespace webbind