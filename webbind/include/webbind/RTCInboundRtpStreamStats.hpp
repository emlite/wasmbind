#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "RTCReceivedRtpStreamStats.hpp"

namespace webbind {

/// Dictionary type RTCInboundRtpStreamStats
class RTCInboundRtpStreamStats : public RTCReceivedRtpStreamStats {
  explicit RTCInboundRtpStreamStats(Handle h) noexcept;
public:
    static RTCInboundRtpStreamStats take_ownership(Handle h) noexcept;
    explicit RTCInboundRtpStreamStats(const emlite::Val &val) noexcept;
    RTCInboundRtpStreamStats() noexcept;
    [[nodiscard]] RTCInboundRtpStreamStats clone() const noexcept;
    /// Getter of the `trackIdentifier` attribute.
    [[nodiscard]] jsbind::String trackIdentifier() const;
    /// Setter of the `trackIdentifier` attribute.
    void trackIdentifier(const jsbind::String& value);
    /// Getter of the `mid` attribute.
    [[nodiscard]] jsbind::String mid() const;
    /// Setter of the `mid` attribute.
    void mid(const jsbind::String& value);
    /// Getter of the `remoteId` attribute.
    [[nodiscard]] jsbind::String remoteId() const;
    /// Setter of the `remoteId` attribute.
    void remoteId(const jsbind::String& value);
    /// Getter of the `framesDecoded` attribute.
    [[nodiscard]] unsigned long framesDecoded() const;
    /// Setter of the `framesDecoded` attribute.
    void framesDecoded(unsigned long value);
    /// Getter of the `keyFramesDecoded` attribute.
    [[nodiscard]] unsigned long keyFramesDecoded() const;
    /// Setter of the `keyFramesDecoded` attribute.
    void keyFramesDecoded(unsigned long value);
    /// Getter of the `framesRendered` attribute.
    [[nodiscard]] unsigned long framesRendered() const;
    /// Setter of the `framesRendered` attribute.
    void framesRendered(unsigned long value);
    /// Getter of the `framesDropped` attribute.
    [[nodiscard]] unsigned long framesDropped() const;
    /// Setter of the `framesDropped` attribute.
    void framesDropped(unsigned long value);
    /// Getter of the `frameWidth` attribute.
    [[nodiscard]] unsigned long frameWidth() const;
    /// Setter of the `frameWidth` attribute.
    void frameWidth(unsigned long value);
    /// Getter of the `frameHeight` attribute.
    [[nodiscard]] unsigned long frameHeight() const;
    /// Setter of the `frameHeight` attribute.
    void frameHeight(unsigned long value);
    /// Getter of the `framesPerSecond` attribute.
    [[nodiscard]] double framesPerSecond() const;
    /// Setter of the `framesPerSecond` attribute.
    void framesPerSecond(double value);
    /// Getter of the `qpSum` attribute.
    [[nodiscard]] long long qpSum() const;
    /// Setter of the `qpSum` attribute.
    void qpSum(long long value);
    /// Getter of the `totalDecodeTime` attribute.
    [[nodiscard]] double totalDecodeTime() const;
    /// Setter of the `totalDecodeTime` attribute.
    void totalDecodeTime(double value);
    /// Getter of the `totalInterFrameDelay` attribute.
    [[nodiscard]] double totalInterFrameDelay() const;
    /// Setter of the `totalInterFrameDelay` attribute.
    void totalInterFrameDelay(double value);
    /// Getter of the `totalSquaredInterFrameDelay` attribute.
    [[nodiscard]] double totalSquaredInterFrameDelay() const;
    /// Setter of the `totalSquaredInterFrameDelay` attribute.
    void totalSquaredInterFrameDelay(double value);
    /// Getter of the `pauseCount` attribute.
    [[nodiscard]] unsigned long pauseCount() const;
    /// Setter of the `pauseCount` attribute.
    void pauseCount(unsigned long value);
    /// Getter of the `totalPausesDuration` attribute.
    [[nodiscard]] double totalPausesDuration() const;
    /// Setter of the `totalPausesDuration` attribute.
    void totalPausesDuration(double value);
    /// Getter of the `freezeCount` attribute.
    [[nodiscard]] unsigned long freezeCount() const;
    /// Setter of the `freezeCount` attribute.
    void freezeCount(unsigned long value);
    /// Getter of the `totalFreezesDuration` attribute.
    [[nodiscard]] double totalFreezesDuration() const;
    /// Setter of the `totalFreezesDuration` attribute.
    void totalFreezesDuration(double value);
    /// Getter of the `lastPacketReceivedTimestamp` attribute.
    [[nodiscard]] jsbind::Any lastPacketReceivedTimestamp() const;
    /// Setter of the `lastPacketReceivedTimestamp` attribute.
    void lastPacketReceivedTimestamp(const jsbind::Any& value);
    /// Getter of the `headerBytesReceived` attribute.
    [[nodiscard]] long long headerBytesReceived() const;
    /// Setter of the `headerBytesReceived` attribute.
    void headerBytesReceived(long long value);
    /// Getter of the `packetsDiscarded` attribute.
    [[nodiscard]] long long packetsDiscarded() const;
    /// Setter of the `packetsDiscarded` attribute.
    void packetsDiscarded(long long value);
    /// Getter of the `fecBytesReceived` attribute.
    [[nodiscard]] long long fecBytesReceived() const;
    /// Setter of the `fecBytesReceived` attribute.
    void fecBytesReceived(long long value);
    /// Getter of the `fecPacketsReceived` attribute.
    [[nodiscard]] long long fecPacketsReceived() const;
    /// Setter of the `fecPacketsReceived` attribute.
    void fecPacketsReceived(long long value);
    /// Getter of the `fecPacketsDiscarded` attribute.
    [[nodiscard]] long long fecPacketsDiscarded() const;
    /// Setter of the `fecPacketsDiscarded` attribute.
    void fecPacketsDiscarded(long long value);
    /// Getter of the `bytesReceived` attribute.
    [[nodiscard]] long long bytesReceived() const;
    /// Setter of the `bytesReceived` attribute.
    void bytesReceived(long long value);
    /// Getter of the `nackCount` attribute.
    [[nodiscard]] unsigned long nackCount() const;
    /// Setter of the `nackCount` attribute.
    void nackCount(unsigned long value);
    /// Getter of the `firCount` attribute.
    [[nodiscard]] unsigned long firCount() const;
    /// Setter of the `firCount` attribute.
    void firCount(unsigned long value);
    /// Getter of the `pliCount` attribute.
    [[nodiscard]] unsigned long pliCount() const;
    /// Setter of the `pliCount` attribute.
    void pliCount(unsigned long value);
    /// Getter of the `totalProcessingDelay` attribute.
    [[nodiscard]] double totalProcessingDelay() const;
    /// Setter of the `totalProcessingDelay` attribute.
    void totalProcessingDelay(double value);
    /// Getter of the `estimatedPlayoutTimestamp` attribute.
    [[nodiscard]] jsbind::Any estimatedPlayoutTimestamp() const;
    /// Setter of the `estimatedPlayoutTimestamp` attribute.
    void estimatedPlayoutTimestamp(const jsbind::Any& value);
    /// Getter of the `jitterBufferDelay` attribute.
    [[nodiscard]] double jitterBufferDelay() const;
    /// Setter of the `jitterBufferDelay` attribute.
    void jitterBufferDelay(double value);
    /// Getter of the `jitterBufferTargetDelay` attribute.
    [[nodiscard]] double jitterBufferTargetDelay() const;
    /// Setter of the `jitterBufferTargetDelay` attribute.
    void jitterBufferTargetDelay(double value);
    /// Getter of the `jitterBufferEmittedCount` attribute.
    [[nodiscard]] long long jitterBufferEmittedCount() const;
    /// Setter of the `jitterBufferEmittedCount` attribute.
    void jitterBufferEmittedCount(long long value);
    /// Getter of the `jitterBufferMinimumDelay` attribute.
    [[nodiscard]] double jitterBufferMinimumDelay() const;
    /// Setter of the `jitterBufferMinimumDelay` attribute.
    void jitterBufferMinimumDelay(double value);
    /// Getter of the `totalSamplesReceived` attribute.
    [[nodiscard]] long long totalSamplesReceived() const;
    /// Setter of the `totalSamplesReceived` attribute.
    void totalSamplesReceived(long long value);
    /// Getter of the `concealedSamples` attribute.
    [[nodiscard]] long long concealedSamples() const;
    /// Setter of the `concealedSamples` attribute.
    void concealedSamples(long long value);
    /// Getter of the `silentConcealedSamples` attribute.
    [[nodiscard]] long long silentConcealedSamples() const;
    /// Setter of the `silentConcealedSamples` attribute.
    void silentConcealedSamples(long long value);
    /// Getter of the `concealmentEvents` attribute.
    [[nodiscard]] long long concealmentEvents() const;
    /// Setter of the `concealmentEvents` attribute.
    void concealmentEvents(long long value);
    /// Getter of the `insertedSamplesForDeceleration` attribute.
    [[nodiscard]] long long insertedSamplesForDeceleration() const;
    /// Setter of the `insertedSamplesForDeceleration` attribute.
    void insertedSamplesForDeceleration(long long value);
    /// Getter of the `removedSamplesForAcceleration` attribute.
    [[nodiscard]] long long removedSamplesForAcceleration() const;
    /// Setter of the `removedSamplesForAcceleration` attribute.
    void removedSamplesForAcceleration(long long value);
    /// Getter of the `audioLevel` attribute.
    [[nodiscard]] double audioLevel() const;
    /// Setter of the `audioLevel` attribute.
    void audioLevel(double value);
    /// Getter of the `totalAudioEnergy` attribute.
    [[nodiscard]] double totalAudioEnergy() const;
    /// Setter of the `totalAudioEnergy` attribute.
    void totalAudioEnergy(double value);
    /// Getter of the `totalSamplesDuration` attribute.
    [[nodiscard]] double totalSamplesDuration() const;
    /// Setter of the `totalSamplesDuration` attribute.
    void totalSamplesDuration(double value);
    /// Getter of the `framesReceived` attribute.
    [[nodiscard]] unsigned long framesReceived() const;
    /// Setter of the `framesReceived` attribute.
    void framesReceived(unsigned long value);
    /// Getter of the `decoderImplementation` attribute.
    [[nodiscard]] jsbind::String decoderImplementation() const;
    /// Setter of the `decoderImplementation` attribute.
    void decoderImplementation(const jsbind::String& value);
    /// Getter of the `playoutId` attribute.
    [[nodiscard]] jsbind::String playoutId() const;
    /// Setter of the `playoutId` attribute.
    void playoutId(const jsbind::String& value);
    /// Getter of the `powerEfficientDecoder` attribute.
    [[nodiscard]] bool powerEfficientDecoder() const;
    /// Setter of the `powerEfficientDecoder` attribute.
    void powerEfficientDecoder(bool value);
    /// Getter of the `framesAssembledFromMultiplePackets` attribute.
    [[nodiscard]] unsigned long framesAssembledFromMultiplePackets() const;
    /// Setter of the `framesAssembledFromMultiplePackets` attribute.
    void framesAssembledFromMultiplePackets(unsigned long value);
    /// Getter of the `totalAssemblyTime` attribute.
    [[nodiscard]] double totalAssemblyTime() const;
    /// Setter of the `totalAssemblyTime` attribute.
    void totalAssemblyTime(double value);
    /// Getter of the `retransmittedPacketsReceived` attribute.
    [[nodiscard]] long long retransmittedPacketsReceived() const;
    /// Setter of the `retransmittedPacketsReceived` attribute.
    void retransmittedPacketsReceived(long long value);
    /// Getter of the `retransmittedBytesReceived` attribute.
    [[nodiscard]] long long retransmittedBytesReceived() const;
    /// Setter of the `retransmittedBytesReceived` attribute.
    void retransmittedBytesReceived(long long value);
    /// Getter of the `rtxSsrc` attribute.
    [[nodiscard]] unsigned long rtxSsrc() const;
    /// Setter of the `rtxSsrc` attribute.
    void rtxSsrc(unsigned long value);
    /// Getter of the `fecSsrc` attribute.
    [[nodiscard]] unsigned long fecSsrc() const;
    /// Setter of the `fecSsrc` attribute.
    void fecSsrc(unsigned long value);
    /// Getter of the `totalCorruptionProbability` attribute.
    [[nodiscard]] double totalCorruptionProbability() const;
    /// Setter of the `totalCorruptionProbability` attribute.
    void totalCorruptionProbability(double value);
    /// Getter of the `totalSquaredCorruptionProbability` attribute.
    [[nodiscard]] double totalSquaredCorruptionProbability() const;
    /// Setter of the `totalSquaredCorruptionProbability` attribute.
    void totalSquaredCorruptionProbability(double value);
    /// Getter of the `corruptionMeasurements` attribute.
    [[nodiscard]] long long corruptionMeasurements() const;
    /// Setter of the `corruptionMeasurements` attribute.
    void corruptionMeasurements(long long value);
};

} // namespace webbind