#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

class RTCRtpSender;
class RTCRtpReceiver;
class RTCRtpCodec;


class RTCRtpCodec : public emlite::Val {
  explicit RTCRtpCodec(Handle h) noexcept;
public:
    static RTCRtpCodec take_ownership(Handle h) noexcept;
    explicit RTCRtpCodec(const emlite::Val &val) noexcept;
    RTCRtpCodec() noexcept;
    RTCRtpCodec clone() const noexcept;
    jsbind::String mimeType() const;
    void mimeType(const jsbind::String& value);
    unsigned long clockRate() const;
    void clockRate(unsigned long value);
    unsigned short channels() const;
    void channels(unsigned short value);
    jsbind::String sdpFmtpLine() const;
    void sdpFmtpLine(const jsbind::String& value);
};

class RTCRtpTransceiver : public emlite::Val {
    explicit RTCRtpTransceiver(Handle h) noexcept;

public:
    explicit RTCRtpTransceiver(const emlite::Val &val) noexcept;
    static RTCRtpTransceiver take_ownership(Handle h) noexcept;

    RTCRtpTransceiver clone() const noexcept;
    jsbind::String mid() const;
    RTCRtpSender sender() const;
    RTCRtpReceiver receiver() const;
    RTCRtpTransceiverDirection direction() const;
    void direction(const RTCRtpTransceiverDirection& value);
    RTCRtpTransceiverDirection currentDirection() const;
    jsbind::Undefined stop();
    jsbind::Undefined setCodecPreferences(const jsbind::TypedArray<RTCRtpCodec>& codecs);
};

