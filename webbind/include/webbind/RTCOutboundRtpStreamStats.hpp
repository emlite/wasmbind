#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "RTCSentRtpStreamStats.hpp"

namespace webbind {

/// Dictionary type RTCOutboundRtpStreamStats
class RTCOutboundRtpStreamStats : public RTCSentRtpStreamStats {
  explicit RTCOutboundRtpStreamStats(Handle h) noexcept;
public:
    static RTCOutboundRtpStreamStats take_ownership(Handle h) noexcept;
    explicit RTCOutboundRtpStreamStats(const emlite::Val &val) noexcept;
    RTCOutboundRtpStreamStats() noexcept;
    [[nodiscard]] RTCOutboundRtpStreamStats clone() const noexcept;
    /// Getter of the `mid` attribute.
    [[nodiscard]] jsbind::String mid() const;
    /// Setter of the `mid` attribute.
    void mid(const jsbind::String& value);
    /// Getter of the `mediaSourceId` attribute.
    [[nodiscard]] jsbind::String mediaSourceId() const;
    /// Setter of the `mediaSourceId` attribute.
    void mediaSourceId(const jsbind::String& value);
    /// Getter of the `remoteId` attribute.
    [[nodiscard]] jsbind::String remoteId() const;
    /// Setter of the `remoteId` attribute.
    void remoteId(const jsbind::String& value);
    /// Getter of the `rid` attribute.
    [[nodiscard]] jsbind::String rid() const;
    /// Setter of the `rid` attribute.
    void rid(const jsbind::String& value);
    /// Getter of the `encodingIndex` attribute.
    [[nodiscard]] unsigned long encodingIndex() const;
    /// Setter of the `encodingIndex` attribute.
    void encodingIndex(unsigned long value);
    /// Getter of the `headerBytesSent` attribute.
    [[nodiscard]] long long headerBytesSent() const;
    /// Setter of the `headerBytesSent` attribute.
    void headerBytesSent(long long value);
    /// Getter of the `retransmittedPacketsSent` attribute.
    [[nodiscard]] long long retransmittedPacketsSent() const;
    /// Setter of the `retransmittedPacketsSent` attribute.
    void retransmittedPacketsSent(long long value);
    /// Getter of the `retransmittedBytesSent` attribute.
    [[nodiscard]] long long retransmittedBytesSent() const;
    /// Setter of the `retransmittedBytesSent` attribute.
    void retransmittedBytesSent(long long value);
    /// Getter of the `rtxSsrc` attribute.
    [[nodiscard]] unsigned long rtxSsrc() const;
    /// Setter of the `rtxSsrc` attribute.
    void rtxSsrc(unsigned long value);
    /// Getter of the `targetBitrate` attribute.
    [[nodiscard]] double targetBitrate() const;
    /// Setter of the `targetBitrate` attribute.
    void targetBitrate(double value);
    /// Getter of the `totalEncodedBytesTarget` attribute.
    [[nodiscard]] long long totalEncodedBytesTarget() const;
    /// Setter of the `totalEncodedBytesTarget` attribute.
    void totalEncodedBytesTarget(long long value);
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
    /// Getter of the `framesSent` attribute.
    [[nodiscard]] unsigned long framesSent() const;
    /// Setter of the `framesSent` attribute.
    void framesSent(unsigned long value);
    /// Getter of the `hugeFramesSent` attribute.
    [[nodiscard]] unsigned long hugeFramesSent() const;
    /// Setter of the `hugeFramesSent` attribute.
    void hugeFramesSent(unsigned long value);
    /// Getter of the `framesEncoded` attribute.
    [[nodiscard]] unsigned long framesEncoded() const;
    /// Setter of the `framesEncoded` attribute.
    void framesEncoded(unsigned long value);
    /// Getter of the `keyFramesEncoded` attribute.
    [[nodiscard]] unsigned long keyFramesEncoded() const;
    /// Setter of the `keyFramesEncoded` attribute.
    void keyFramesEncoded(unsigned long value);
    /// Getter of the `qpSum` attribute.
    [[nodiscard]] long long qpSum() const;
    /// Setter of the `qpSum` attribute.
    void qpSum(long long value);
    /// Getter of the `totalEncodeTime` attribute.
    [[nodiscard]] double totalEncodeTime() const;
    /// Setter of the `totalEncodeTime` attribute.
    void totalEncodeTime(double value);
    /// Getter of the `totalPacketSendDelay` attribute.
    [[nodiscard]] double totalPacketSendDelay() const;
    /// Setter of the `totalPacketSendDelay` attribute.
    void totalPacketSendDelay(double value);
    /// Getter of the `qualityLimitationReason` attribute.
    [[nodiscard]] RTCQualityLimitationReason qualityLimitationReason() const;
    /// Setter of the `qualityLimitationReason` attribute.
    void qualityLimitationReason(const RTCQualityLimitationReason& value);
    /// Getter of the `qualityLimitationDurations` attribute.
    [[nodiscard]] jsbind::Record<jsbind::String, double> qualityLimitationDurations() const;
    /// Setter of the `qualityLimitationDurations` attribute.
    void qualityLimitationDurations(jsbind::Record<jsbind::String, double> value);
    /// Getter of the `qualityLimitationResolutionChanges` attribute.
    [[nodiscard]] unsigned long qualityLimitationResolutionChanges() const;
    /// Setter of the `qualityLimitationResolutionChanges` attribute.
    void qualityLimitationResolutionChanges(unsigned long value);
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
    /// Getter of the `encoderImplementation` attribute.
    [[nodiscard]] jsbind::String encoderImplementation() const;
    /// Setter of the `encoderImplementation` attribute.
    void encoderImplementation(const jsbind::String& value);
    /// Getter of the `powerEfficientEncoder` attribute.
    [[nodiscard]] bool powerEfficientEncoder() const;
    /// Setter of the `powerEfficientEncoder` attribute.
    void powerEfficientEncoder(bool value);
    /// Getter of the `active` attribute.
    [[nodiscard]] bool active() const;
    /// Setter of the `active` attribute.
    void active(bool value);
    /// Getter of the `scalabilityMode` attribute.
    [[nodiscard]] jsbind::String scalabilityMode() const;
    /// Setter of the `scalabilityMode` attribute.
    void scalabilityMode(const jsbind::String& value);
};

} // namespace webbind