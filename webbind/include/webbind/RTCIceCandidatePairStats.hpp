#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "RTCStats.hpp"

namespace webbind {

/// Dictionary type RTCIceCandidatePairStats
class RTCIceCandidatePairStats : public RTCStats {
  explicit RTCIceCandidatePairStats(Handle h) noexcept;
public:
    static RTCIceCandidatePairStats take_ownership(Handle h) noexcept;
    explicit RTCIceCandidatePairStats(const emlite::Val &val) noexcept;
    RTCIceCandidatePairStats() noexcept;
    [[nodiscard]] RTCIceCandidatePairStats clone() const noexcept;
    /// Getter of the `transportId` attribute.
    [[nodiscard]] jsbind::String transportId() const;
    /// Setter of the `transportId` attribute.
    void transportId(const jsbind::String& value);
    /// Getter of the `localCandidateId` attribute.
    [[nodiscard]] jsbind::String localCandidateId() const;
    /// Setter of the `localCandidateId` attribute.
    void localCandidateId(const jsbind::String& value);
    /// Getter of the `remoteCandidateId` attribute.
    [[nodiscard]] jsbind::String remoteCandidateId() const;
    /// Setter of the `remoteCandidateId` attribute.
    void remoteCandidateId(const jsbind::String& value);
    /// Getter of the `state` attribute.
    [[nodiscard]] RTCStatsIceCandidatePairState state() const;
    /// Setter of the `state` attribute.
    void state(const RTCStatsIceCandidatePairState& value);
    /// Getter of the `nominated` attribute.
    [[nodiscard]] bool nominated() const;
    /// Setter of the `nominated` attribute.
    void nominated(bool value);
    /// Getter of the `packetsSent` attribute.
    [[nodiscard]] long long packetsSent() const;
    /// Setter of the `packetsSent` attribute.
    void packetsSent(long long value);
    /// Getter of the `packetsReceived` attribute.
    [[nodiscard]] long long packetsReceived() const;
    /// Setter of the `packetsReceived` attribute.
    void packetsReceived(long long value);
    /// Getter of the `bytesSent` attribute.
    [[nodiscard]] long long bytesSent() const;
    /// Setter of the `bytesSent` attribute.
    void bytesSent(long long value);
    /// Getter of the `bytesReceived` attribute.
    [[nodiscard]] long long bytesReceived() const;
    /// Setter of the `bytesReceived` attribute.
    void bytesReceived(long long value);
    /// Getter of the `lastPacketSentTimestamp` attribute.
    [[nodiscard]] jsbind::Any lastPacketSentTimestamp() const;
    /// Setter of the `lastPacketSentTimestamp` attribute.
    void lastPacketSentTimestamp(const jsbind::Any& value);
    /// Getter of the `lastPacketReceivedTimestamp` attribute.
    [[nodiscard]] jsbind::Any lastPacketReceivedTimestamp() const;
    /// Setter of the `lastPacketReceivedTimestamp` attribute.
    void lastPacketReceivedTimestamp(const jsbind::Any& value);
    /// Getter of the `totalRoundTripTime` attribute.
    [[nodiscard]] double totalRoundTripTime() const;
    /// Setter of the `totalRoundTripTime` attribute.
    void totalRoundTripTime(double value);
    /// Getter of the `currentRoundTripTime` attribute.
    [[nodiscard]] double currentRoundTripTime() const;
    /// Setter of the `currentRoundTripTime` attribute.
    void currentRoundTripTime(double value);
    /// Getter of the `availableOutgoingBitrate` attribute.
    [[nodiscard]] double availableOutgoingBitrate() const;
    /// Setter of the `availableOutgoingBitrate` attribute.
    void availableOutgoingBitrate(double value);
    /// Getter of the `availableIncomingBitrate` attribute.
    [[nodiscard]] double availableIncomingBitrate() const;
    /// Setter of the `availableIncomingBitrate` attribute.
    void availableIncomingBitrate(double value);
    /// Getter of the `requestsReceived` attribute.
    [[nodiscard]] long long requestsReceived() const;
    /// Setter of the `requestsReceived` attribute.
    void requestsReceived(long long value);
    /// Getter of the `requestsSent` attribute.
    [[nodiscard]] long long requestsSent() const;
    /// Setter of the `requestsSent` attribute.
    void requestsSent(long long value);
    /// Getter of the `responsesReceived` attribute.
    [[nodiscard]] long long responsesReceived() const;
    /// Setter of the `responsesReceived` attribute.
    void responsesReceived(long long value);
    /// Getter of the `responsesSent` attribute.
    [[nodiscard]] long long responsesSent() const;
    /// Setter of the `responsesSent` attribute.
    void responsesSent(long long value);
    /// Getter of the `consentRequestsSent` attribute.
    [[nodiscard]] long long consentRequestsSent() const;
    /// Setter of the `consentRequestsSent` attribute.
    void consentRequestsSent(long long value);
    /// Getter of the `packetsDiscardedOnSend` attribute.
    [[nodiscard]] unsigned long packetsDiscardedOnSend() const;
    /// Setter of the `packetsDiscardedOnSend` attribute.
    void packetsDiscardedOnSend(unsigned long value);
    /// Getter of the `bytesDiscardedOnSend` attribute.
    [[nodiscard]] long long bytesDiscardedOnSend() const;
    /// Setter of the `bytesDiscardedOnSend` attribute.
    void bytesDiscardedOnSend(long long value);
};

} // namespace webbind