#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

class RTCEncodedAudioFrameMetadata;


class RTCEncodedAudioFrameMetadata : public emlite::Val {
  explicit RTCEncodedAudioFrameMetadata(Handle h) noexcept;
public:
    static RTCEncodedAudioFrameMetadata take_ownership(Handle h) noexcept;
    explicit RTCEncodedAudioFrameMetadata(const emlite::Val &val) noexcept;
    RTCEncodedAudioFrameMetadata() noexcept;
    RTCEncodedAudioFrameMetadata clone() const noexcept;
    short sequenceNumber() const;
    void sequenceNumber(short value);
    double audioLevel() const;
    void audioLevel(double value);
};

class RTCEncodedAudioFrame : public emlite::Val {
    explicit RTCEncodedAudioFrame(Handle h) noexcept;

public:
    explicit RTCEncodedAudioFrame(const emlite::Val &val) noexcept;
    static RTCEncodedAudioFrame take_ownership(Handle h) noexcept;

    RTCEncodedAudioFrame clone() const noexcept;
    RTCEncodedAudioFrame(const RTCEncodedAudioFrame& originalFrame, const jsbind::Any& options);
    jsbind::ArrayBuffer data() const;
    void data(const jsbind::ArrayBuffer& value);
    RTCEncodedAudioFrameMetadata getMetadata();
};

