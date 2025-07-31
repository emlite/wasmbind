#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

class MediaStreamTrack;
class RTCDtlsTransport;
class RTCRtpCapabilities;
class RTCRtpSendParameters;
class RTCSetParameterOptions;
class MediaStream;
class RTCStatsReport;
class RTCDTMFSender;
class RTCRtpCodec;


class RTCRtpCapabilities : public emlite::Val {
  explicit RTCRtpCapabilities(Handle h) noexcept;
public:
    static RTCRtpCapabilities take_ownership(Handle h) noexcept;
    explicit RTCRtpCapabilities(const emlite::Val &val) noexcept;
    RTCRtpCapabilities() noexcept;
    [[nodiscard]] RTCRtpCapabilities clone() const noexcept;
    [[nodiscard]] jsbind::TypedArray<RTCRtpCodec> codecs() const;
    void codecs(const jsbind::TypedArray<RTCRtpCodec>& value);
    [[nodiscard]] jsbind::TypedArray<jsbind::Any> headerExtensions() const;
    void headerExtensions(const jsbind::TypedArray<jsbind::Any>& value);
};

class RTCRtpSendParameters : public emlite::Val {
  explicit RTCRtpSendParameters(Handle h) noexcept;
public:
    static RTCRtpSendParameters take_ownership(Handle h) noexcept;
    explicit RTCRtpSendParameters(const emlite::Val &val) noexcept;
    RTCRtpSendParameters() noexcept;
    [[nodiscard]] RTCRtpSendParameters clone() const noexcept;
    [[nodiscard]] jsbind::String transactionId() const;
    void transactionId(const jsbind::String& value);
    [[nodiscard]] jsbind::TypedArray<jsbind::Any> encodings() const;
    void encodings(const jsbind::TypedArray<jsbind::Any>& value);
};

class RTCSetParameterOptions : public emlite::Val {
  explicit RTCSetParameterOptions(Handle h) noexcept;
public:
    static RTCSetParameterOptions take_ownership(Handle h) noexcept;
    explicit RTCSetParameterOptions(const emlite::Val &val) noexcept;
    RTCSetParameterOptions() noexcept;
    [[nodiscard]] RTCSetParameterOptions clone() const noexcept;
};

/// The RTCRtpSender class.
/// [`RTCRtpSender`](https://developer.mozilla.org/en-US/docs/Web/API/RTCRtpSender)
class RTCRtpSender : public emlite::Val {
    explicit RTCRtpSender(Handle h) noexcept;

public:
    explicit RTCRtpSender(const emlite::Val &val) noexcept;
    static RTCRtpSender take_ownership(Handle h) noexcept;

    [[nodiscard]] RTCRtpSender clone() const noexcept;
    /// Getter of the `track` attribute.
    /// [`RTCRtpSender.track`](https://developer.mozilla.org/en-US/docs/Web/API/RTCRtpSender/track)
    [[nodiscard]] MediaStreamTrack track() const;
    /// Getter of the `transport` attribute.
    /// [`RTCRtpSender.transport`](https://developer.mozilla.org/en-US/docs/Web/API/RTCRtpSender/transport)
    [[nodiscard]] RTCDtlsTransport transport() const;
    /// The getCapabilities method.
    /// [`RTCRtpSender.getCapabilities`](https://developer.mozilla.org/en-US/docs/Web/API/RTCRtpSender/getCapabilities)
    static RTCRtpCapabilities getCapabilities(const jsbind::String& kind);
    /// The setParameters method.
    /// [`RTCRtpSender.setParameters`](https://developer.mozilla.org/en-US/docs/Web/API/RTCRtpSender/setParameters)
    jsbind::Promise<jsbind::Undefined> setParameters(const RTCRtpSendParameters& parameters);
    /// The setParameters method.
    /// [`RTCRtpSender.setParameters`](https://developer.mozilla.org/en-US/docs/Web/API/RTCRtpSender/setParameters)
    jsbind::Promise<jsbind::Undefined> setParameters(const RTCRtpSendParameters& parameters, const RTCSetParameterOptions& setParameterOptions);
    /// The getParameters method.
    /// [`RTCRtpSender.getParameters`](https://developer.mozilla.org/en-US/docs/Web/API/RTCRtpSender/getParameters)
    RTCRtpSendParameters getParameters();
    /// The replaceTrack method.
    /// [`RTCRtpSender.replaceTrack`](https://developer.mozilla.org/en-US/docs/Web/API/RTCRtpSender/replaceTrack)
    jsbind::Promise<jsbind::Undefined> replaceTrack(const MediaStreamTrack& withTrack);
    /// The setStreams method.
    /// [`RTCRtpSender.setStreams`](https://developer.mozilla.org/en-US/docs/Web/API/RTCRtpSender/setStreams)
    jsbind::Undefined setStreams(const MediaStream& streams);
    /// The getStats method.
    /// [`RTCRtpSender.getStats`](https://developer.mozilla.org/en-US/docs/Web/API/RTCRtpSender/getStats)
    jsbind::Promise<RTCStatsReport> getStats();
    /// Getter of the `transform` attribute.
    /// [`RTCRtpSender.transform`](https://developer.mozilla.org/en-US/docs/Web/API/RTCRtpSender/transform)
    [[nodiscard]] jsbind::Any transform() const;
    /// Setter of the `transform` attribute.
    /// [`RTCRtpSender.transform`](https://developer.mozilla.org/en-US/docs/Web/API/RTCRtpSender/transform)
    void transform(const jsbind::Any& value);
    /// The generateKeyFrame method.
    /// [`RTCRtpSender.generateKeyFrame`](https://developer.mozilla.org/en-US/docs/Web/API/RTCRtpSender/generateKeyFrame)
    jsbind::Promise<jsbind::Undefined> generateKeyFrame();
    /// The generateKeyFrame method.
    /// [`RTCRtpSender.generateKeyFrame`](https://developer.mozilla.org/en-US/docs/Web/API/RTCRtpSender/generateKeyFrame)
    jsbind::Promise<jsbind::Undefined> generateKeyFrame(const jsbind::TypedArray<jsbind::String>& rids);
    /// Getter of the `dtmf` attribute.
    /// [`RTCRtpSender.dtmf`](https://developer.mozilla.org/en-US/docs/Web/API/RTCRtpSender/dtmf)
    [[nodiscard]] RTCDTMFSender dtmf() const;
};

