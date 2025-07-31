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
    [[nodiscard]] RTCRtpReceiveParameters clone() const noexcept;
};

class RTCRtpContributingSource : public emlite::Val {
  explicit RTCRtpContributingSource(Handle h) noexcept;
public:
    static RTCRtpContributingSource take_ownership(Handle h) noexcept;
    explicit RTCRtpContributingSource(const emlite::Val &val) noexcept;
    RTCRtpContributingSource() noexcept;
    [[nodiscard]] RTCRtpContributingSource clone() const noexcept;
    [[nodiscard]] jsbind::Any timestamp() const;
    void timestamp(const jsbind::Any& value);
    [[nodiscard]] unsigned long source() const;
    void source(unsigned long value);
    [[nodiscard]] double audioLevel() const;
    void audioLevel(double value);
    [[nodiscard]] unsigned long rtpTimestamp() const;
    void rtpTimestamp(unsigned long value);
};

class RTCRtpSynchronizationSource : public emlite::Val {
  explicit RTCRtpSynchronizationSource(Handle h) noexcept;
public:
    static RTCRtpSynchronizationSource take_ownership(Handle h) noexcept;
    explicit RTCRtpSynchronizationSource(const emlite::Val &val) noexcept;
    RTCRtpSynchronizationSource() noexcept;
    [[nodiscard]] RTCRtpSynchronizationSource clone() const noexcept;
};

/// The RTCRtpReceiver class.
/// [`RTCRtpReceiver`](https://developer.mozilla.org/en-US/docs/Web/API/RTCRtpReceiver)
class RTCRtpReceiver : public emlite::Val {
    explicit RTCRtpReceiver(Handle h) noexcept;

public:
    explicit RTCRtpReceiver(const emlite::Val &val) noexcept;
    static RTCRtpReceiver take_ownership(Handle h) noexcept;

    [[nodiscard]] RTCRtpReceiver clone() const noexcept;
    /// Getter of the `track` attribute.
    /// [`RTCRtpReceiver.track`](https://developer.mozilla.org/en-US/docs/Web/API/RTCRtpReceiver/track)
    [[nodiscard]] MediaStreamTrack track() const;
    /// Getter of the `transport` attribute.
    /// [`RTCRtpReceiver.transport`](https://developer.mozilla.org/en-US/docs/Web/API/RTCRtpReceiver/transport)
    [[nodiscard]] RTCDtlsTransport transport() const;
    /// The getCapabilities method.
    /// [`RTCRtpReceiver.getCapabilities`](https://developer.mozilla.org/en-US/docs/Web/API/RTCRtpReceiver/getCapabilities)
    static RTCRtpCapabilities getCapabilities(const jsbind::String& kind);
    /// The getParameters method.
    /// [`RTCRtpReceiver.getParameters`](https://developer.mozilla.org/en-US/docs/Web/API/RTCRtpReceiver/getParameters)
    RTCRtpReceiveParameters getParameters();
    /// The getContributingSources method.
    /// [`RTCRtpReceiver.getContributingSources`](https://developer.mozilla.org/en-US/docs/Web/API/RTCRtpReceiver/getContributingSources)
    jsbind::TypedArray<RTCRtpContributingSource> getContributingSources();
    /// The getSynchronizationSources method.
    /// [`RTCRtpReceiver.getSynchronizationSources`](https://developer.mozilla.org/en-US/docs/Web/API/RTCRtpReceiver/getSynchronizationSources)
    jsbind::TypedArray<RTCRtpSynchronizationSource> getSynchronizationSources();
    /// The getStats method.
    /// [`RTCRtpReceiver.getStats`](https://developer.mozilla.org/en-US/docs/Web/API/RTCRtpReceiver/getStats)
    jsbind::Promise<RTCStatsReport> getStats();
    /// Getter of the `jitterBufferTarget` attribute.
    /// [`RTCRtpReceiver.jitterBufferTarget`](https://developer.mozilla.org/en-US/docs/Web/API/RTCRtpReceiver/jitterBufferTarget)
    [[nodiscard]] jsbind::Any jitterBufferTarget() const;
    /// Setter of the `jitterBufferTarget` attribute.
    /// [`RTCRtpReceiver.jitterBufferTarget`](https://developer.mozilla.org/en-US/docs/Web/API/RTCRtpReceiver/jitterBufferTarget)
    void jitterBufferTarget(const jsbind::Any& value);
    /// Getter of the `transform` attribute.
    /// [`RTCRtpReceiver.transform`](https://developer.mozilla.org/en-US/docs/Web/API/RTCRtpReceiver/transform)
    [[nodiscard]] jsbind::Any transform() const;
    /// Setter of the `transform` attribute.
    /// [`RTCRtpReceiver.transform`](https://developer.mozilla.org/en-US/docs/Web/API/RTCRtpReceiver/transform)
    void transform(const jsbind::Any& value);
};

