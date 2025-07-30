#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "RTCRtpSender.hpp"
#include "enums.hpp"

class MediaStreamTrack;
class RTCDtlsTransport;
class RTCRtpReceiveParameters;
class RTCRtpContributingSource;
class RTCRtpSynchronizationSource;
class RTCStatsReport;


class RTCRtpReceiveParameters : public emlite::Val {
  explicit RTCRtpReceiveParameters(Handle h) noexcept;
public:
    static RTCRtpReceiveParameters take_ownership(Handle h) noexcept;
    explicit RTCRtpReceiveParameters(const emlite::Val &val) noexcept;
    RTCRtpReceiveParameters() noexcept;
    RTCRtpReceiveParameters clone() const noexcept;
};

class RTCRtpContributingSource : public emlite::Val {
  explicit RTCRtpContributingSource(Handle h) noexcept;
public:
    static RTCRtpContributingSource take_ownership(Handle h) noexcept;
    explicit RTCRtpContributingSource(const emlite::Val &val) noexcept;
    RTCRtpContributingSource() noexcept;
    RTCRtpContributingSource clone() const noexcept;
    jsbind::Any timestamp() const;
    void timestamp(const jsbind::Any& value);
    unsigned long source() const;
    void source(unsigned long value);
    double audioLevel() const;
    void audioLevel(double value);
    unsigned long rtpTimestamp() const;
    void rtpTimestamp(unsigned long value);
};

class RTCRtpSynchronizationSource : public emlite::Val {
  explicit RTCRtpSynchronizationSource(Handle h) noexcept;
public:
    static RTCRtpSynchronizationSource take_ownership(Handle h) noexcept;
    explicit RTCRtpSynchronizationSource(const emlite::Val &val) noexcept;
    RTCRtpSynchronizationSource() noexcept;
    RTCRtpSynchronizationSource clone() const noexcept;
};

class RTCRtpReceiver : public emlite::Val {
    explicit RTCRtpReceiver(Handle h) noexcept;

public:
    explicit RTCRtpReceiver(const emlite::Val &val) noexcept;
    static RTCRtpReceiver take_ownership(Handle h) noexcept;

    RTCRtpReceiver clone() const noexcept;
    MediaStreamTrack track() const;
    RTCDtlsTransport transport() const;
    static RTCRtpCapabilities getCapabilities(const jsbind::String& kind);
    RTCRtpReceiveParameters getParameters();
    jsbind::TypedArray<RTCRtpContributingSource> getContributingSources();
    jsbind::TypedArray<RTCRtpSynchronizationSource> getSynchronizationSources();
    jsbind::Promise<RTCStatsReport> getStats();
    jsbind::Any jitterBufferTarget() const;
    void jitterBufferTarget(const jsbind::Any& value);
    jsbind::Any transform() const;
    void transform(const jsbind::Any& value);
};

