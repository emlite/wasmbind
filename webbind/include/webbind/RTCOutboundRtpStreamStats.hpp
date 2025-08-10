#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "RTCSentRtpStreamStats.hpp"

namespace webbind {

/// Dictionary type RTCOutboundRtpStreamStats
/// [`RTCOutboundRtpStreamStats`](https://developer.mozilla.org/en-US/docs/Web/API/RTCOutboundRtpStreamStats)
class RTCOutboundRtpStreamStats : public RTCSentRtpStreamStats {
  explicit RTCOutboundRtpStreamStats(Handle h) noexcept;
public:
    static RTCOutboundRtpStreamStats take_ownership(Handle h) noexcept;
    explicit RTCOutboundRtpStreamStats(const emlite::Val &val) noexcept;
    RTCOutboundRtpStreamStats() noexcept;
    [[nodiscard]] RTCOutboundRtpStreamStats clone() const noexcept;
    [[nodiscard]] jsbind::String mid() const;
    void mid(const jsbind::String& value);
    [[nodiscard]] jsbind::String mediaSourceId() const;
    void mediaSourceId(const jsbind::String& value);
    [[nodiscard]] jsbind::String remoteId() const;
    void remoteId(const jsbind::String& value);
    [[nodiscard]] jsbind::String rid() const;
    void rid(const jsbind::String& value);
    [[nodiscard]] unsigned long encodingIndex() const;
    void encodingIndex(unsigned long value);
    [[nodiscard]] long long headerBytesSent() const;
    void headerBytesSent(long long value);
    [[nodiscard]] long long retransmittedPacketsSent() const;
    void retransmittedPacketsSent(long long value);
    [[nodiscard]] long long retransmittedBytesSent() const;
    void retransmittedBytesSent(long long value);
    [[nodiscard]] unsigned long rtxSsrc() const;
    void rtxSsrc(unsigned long value);
    [[nodiscard]] double targetBitrate() const;
    void targetBitrate(double value);
    [[nodiscard]] long long totalEncodedBytesTarget() const;
    void totalEncodedBytesTarget(long long value);
    [[nodiscard]] unsigned long frameWidth() const;
    void frameWidth(unsigned long value);
    [[nodiscard]] unsigned long frameHeight() const;
    void frameHeight(unsigned long value);
    [[nodiscard]] double framesPerSecond() const;
    void framesPerSecond(double value);
    [[nodiscard]] unsigned long framesSent() const;
    void framesSent(unsigned long value);
    [[nodiscard]] unsigned long hugeFramesSent() const;
    void hugeFramesSent(unsigned long value);
    [[nodiscard]] unsigned long framesEncoded() const;
    void framesEncoded(unsigned long value);
    [[nodiscard]] unsigned long keyFramesEncoded() const;
    void keyFramesEncoded(unsigned long value);
    [[nodiscard]] long long qpSum() const;
    void qpSum(long long value);
    [[nodiscard]] double totalEncodeTime() const;
    void totalEncodeTime(double value);
    [[nodiscard]] double totalPacketSendDelay() const;
    void totalPacketSendDelay(double value);
    [[nodiscard]] RTCQualityLimitationReason qualityLimitationReason() const;
    void qualityLimitationReason(const RTCQualityLimitationReason& value);
    [[nodiscard]] jsbind::Record<jsbind::String, double> qualityLimitationDurations() const;
    void qualityLimitationDurations(jsbind::Record<jsbind::String, double> value);
    [[nodiscard]] unsigned long qualityLimitationResolutionChanges() const;
    void qualityLimitationResolutionChanges(unsigned long value);
    [[nodiscard]] unsigned long nackCount() const;
    void nackCount(unsigned long value);
    [[nodiscard]] unsigned long firCount() const;
    void firCount(unsigned long value);
    [[nodiscard]] unsigned long pliCount() const;
    void pliCount(unsigned long value);
    [[nodiscard]] jsbind::String encoderImplementation() const;
    void encoderImplementation(const jsbind::String& value);
    [[nodiscard]] bool powerEfficientEncoder() const;
    void powerEfficientEncoder(bool value);
    [[nodiscard]] bool active() const;
    void active(bool value);
    [[nodiscard]] jsbind::String scalabilityMode() const;
    void scalabilityMode(const jsbind::String& value);
};

} // namespace webbind