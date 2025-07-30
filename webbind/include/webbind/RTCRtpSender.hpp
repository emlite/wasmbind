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
    RTCRtpCapabilities clone() const noexcept;
    jsbind::TypedArray<RTCRtpCodec> codecs() const;
    void codecs(const jsbind::TypedArray<RTCRtpCodec>& value);
    jsbind::TypedArray<jsbind::Any> headerExtensions() const;
    void headerExtensions(const jsbind::TypedArray<jsbind::Any>& value);
};

class RTCRtpSendParameters : public emlite::Val {
  explicit RTCRtpSendParameters(Handle h) noexcept;
public:
    static RTCRtpSendParameters take_ownership(Handle h) noexcept;
    explicit RTCRtpSendParameters(const emlite::Val &val) noexcept;
    RTCRtpSendParameters() noexcept;
    RTCRtpSendParameters clone() const noexcept;
    jsbind::String transactionId() const;
    void transactionId(const jsbind::String& value);
    jsbind::TypedArray<jsbind::Any> encodings() const;
    void encodings(const jsbind::TypedArray<jsbind::Any>& value);
};

class RTCSetParameterOptions : public emlite::Val {
  explicit RTCSetParameterOptions(Handle h) noexcept;
public:
    static RTCSetParameterOptions take_ownership(Handle h) noexcept;
    explicit RTCSetParameterOptions(const emlite::Val &val) noexcept;
    RTCSetParameterOptions() noexcept;
    RTCSetParameterOptions clone() const noexcept;
};

class RTCRtpSender : public emlite::Val {
    explicit RTCRtpSender(Handle h) noexcept;

public:
    explicit RTCRtpSender(const emlite::Val &val) noexcept;
    static RTCRtpSender take_ownership(Handle h) noexcept;

    RTCRtpSender clone() const noexcept;
    MediaStreamTrack track() const;
    RTCDtlsTransport transport() const;
    static RTCRtpCapabilities getCapabilities(const jsbind::String& kind);
    jsbind::Promise<jsbind::Undefined> setParameters(const RTCRtpSendParameters& parameters);
    jsbind::Promise<jsbind::Undefined> setParameters(const RTCRtpSendParameters& parameters, const RTCSetParameterOptions& setParameterOptions);
    RTCRtpSendParameters getParameters();
    jsbind::Promise<jsbind::Undefined> replaceTrack(const MediaStreamTrack& withTrack);
    jsbind::Undefined setStreams(const MediaStream& streams);
    jsbind::Promise<RTCStatsReport> getStats();
    jsbind::Any transform() const;
    void transform(const jsbind::Any& value);
    jsbind::Promise<jsbind::Undefined> generateKeyFrame();
    jsbind::Promise<jsbind::Undefined> generateKeyFrame(const jsbind::TypedArray<jsbind::String>& rids);
    RTCDTMFSender dtmf() const;
};

