#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "RTCReceivedRtpStreamStats.hpp"

namespace webbind {

/// Dictionary type RTCInboundRtpStreamStats
/// [`RTCInboundRtpStreamStats`](https://developer.mozilla.org/en-US/docs/Web/API/RTCInboundRtpStreamStats)
class RTCInboundRtpStreamStats : public RTCReceivedRtpStreamStats {
  explicit RTCInboundRtpStreamStats(Handle h) noexcept;
public:
    static RTCInboundRtpStreamStats take_ownership(Handle h) noexcept;
    explicit RTCInboundRtpStreamStats(const emlite::Val &val) noexcept;
    RTCInboundRtpStreamStats() noexcept;
    [[nodiscard]] RTCInboundRtpStreamStats clone() const noexcept;
    [[nodiscard]] jsbind::String trackIdentifier() const;
    void trackIdentifier(const jsbind::String& value);
    [[nodiscard]] jsbind::String mid() const;
    void mid(const jsbind::String& value);
    [[nodiscard]] jsbind::String remoteId() const;
    void remoteId(const jsbind::String& value);
    [[nodiscard]] unsigned long framesDecoded() const;
    void framesDecoded(unsigned long value);
    [[nodiscard]] unsigned long keyFramesDecoded() const;
    void keyFramesDecoded(unsigned long value);
    [[nodiscard]] unsigned long framesRendered() const;
    void framesRendered(unsigned long value);
    [[nodiscard]] unsigned long framesDropped() const;
    void framesDropped(unsigned long value);
    [[nodiscard]] unsigned long frameWidth() const;
    void frameWidth(unsigned long value);
    [[nodiscard]] unsigned long frameHeight() const;
    void frameHeight(unsigned long value);
    [[nodiscard]] double framesPerSecond() const;
    void framesPerSecond(double value);
    [[nodiscard]] long long qpSum() const;
    void qpSum(long long value);
    [[nodiscard]] double totalDecodeTime() const;
    void totalDecodeTime(double value);
    [[nodiscard]] double totalInterFrameDelay() const;
    void totalInterFrameDelay(double value);
    [[nodiscard]] double totalSquaredInterFrameDelay() const;
    void totalSquaredInterFrameDelay(double value);
    [[nodiscard]] unsigned long pauseCount() const;
    void pauseCount(unsigned long value);
    [[nodiscard]] double totalPausesDuration() const;
    void totalPausesDuration(double value);
    [[nodiscard]] unsigned long freezeCount() const;
    void freezeCount(unsigned long value);
    [[nodiscard]] double totalFreezesDuration() const;
    void totalFreezesDuration(double value);
    [[nodiscard]] jsbind::Any lastPacketReceivedTimestamp() const;
    void lastPacketReceivedTimestamp(const jsbind::Any& value);
    [[nodiscard]] long long headerBytesReceived() const;
    void headerBytesReceived(long long value);
    [[nodiscard]] long long packetsDiscarded() const;
    void packetsDiscarded(long long value);
    [[nodiscard]] long long fecBytesReceived() const;
    void fecBytesReceived(long long value);
    [[nodiscard]] long long fecPacketsReceived() const;
    void fecPacketsReceived(long long value);
    [[nodiscard]] long long fecPacketsDiscarded() const;
    void fecPacketsDiscarded(long long value);
    [[nodiscard]] long long bytesReceived() const;
    void bytesReceived(long long value);
    [[nodiscard]] unsigned long nackCount() const;
    void nackCount(unsigned long value);
    [[nodiscard]] unsigned long firCount() const;
    void firCount(unsigned long value);
    [[nodiscard]] unsigned long pliCount() const;
    void pliCount(unsigned long value);
    [[nodiscard]] double totalProcessingDelay() const;
    void totalProcessingDelay(double value);
    [[nodiscard]] jsbind::Any estimatedPlayoutTimestamp() const;
    void estimatedPlayoutTimestamp(const jsbind::Any& value);
    [[nodiscard]] double jitterBufferDelay() const;
    void jitterBufferDelay(double value);
    [[nodiscard]] double jitterBufferTargetDelay() const;
    void jitterBufferTargetDelay(double value);
    [[nodiscard]] long long jitterBufferEmittedCount() const;
    void jitterBufferEmittedCount(long long value);
    [[nodiscard]] double jitterBufferMinimumDelay() const;
    void jitterBufferMinimumDelay(double value);
    [[nodiscard]] long long totalSamplesReceived() const;
    void totalSamplesReceived(long long value);
    [[nodiscard]] long long concealedSamples() const;
    void concealedSamples(long long value);
    [[nodiscard]] long long silentConcealedSamples() const;
    void silentConcealedSamples(long long value);
    [[nodiscard]] long long concealmentEvents() const;
    void concealmentEvents(long long value);
    [[nodiscard]] long long insertedSamplesForDeceleration() const;
    void insertedSamplesForDeceleration(long long value);
    [[nodiscard]] long long removedSamplesForAcceleration() const;
    void removedSamplesForAcceleration(long long value);
    [[nodiscard]] double audioLevel() const;
    void audioLevel(double value);
    [[nodiscard]] double totalAudioEnergy() const;
    void totalAudioEnergy(double value);
    [[nodiscard]] double totalSamplesDuration() const;
    void totalSamplesDuration(double value);
    [[nodiscard]] unsigned long framesReceived() const;
    void framesReceived(unsigned long value);
    [[nodiscard]] jsbind::String decoderImplementation() const;
    void decoderImplementation(const jsbind::String& value);
    [[nodiscard]] jsbind::String playoutId() const;
    void playoutId(const jsbind::String& value);
    [[nodiscard]] bool powerEfficientDecoder() const;
    void powerEfficientDecoder(bool value);
    [[nodiscard]] unsigned long framesAssembledFromMultiplePackets() const;
    void framesAssembledFromMultiplePackets(unsigned long value);
    [[nodiscard]] double totalAssemblyTime() const;
    void totalAssemblyTime(double value);
    [[nodiscard]] long long retransmittedPacketsReceived() const;
    void retransmittedPacketsReceived(long long value);
    [[nodiscard]] long long retransmittedBytesReceived() const;
    void retransmittedBytesReceived(long long value);
    [[nodiscard]] unsigned long rtxSsrc() const;
    void rtxSsrc(unsigned long value);
    [[nodiscard]] unsigned long fecSsrc() const;
    void fecSsrc(unsigned long value);
    [[nodiscard]] double totalCorruptionProbability() const;
    void totalCorruptionProbability(double value);
    [[nodiscard]] double totalSquaredCorruptionProbability() const;
    void totalSquaredCorruptionProbability(double value);
    [[nodiscard]] long long corruptionMeasurements() const;
    void corruptionMeasurements(long long value);
};

} // namespace webbind