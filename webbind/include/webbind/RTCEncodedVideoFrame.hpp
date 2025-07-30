#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

class RTCEncodedVideoFrameMetadata;


class RTCEncodedVideoFrameMetadata : public emlite::Val {
  explicit RTCEncodedVideoFrameMetadata(Handle h) noexcept;
public:
    static RTCEncodedVideoFrameMetadata take_ownership(Handle h) noexcept;
    explicit RTCEncodedVideoFrameMetadata(const emlite::Val &val) noexcept;
    RTCEncodedVideoFrameMetadata() noexcept;
    RTCEncodedVideoFrameMetadata clone() const noexcept;
    long long frameId() const;
    void frameId(long long value);
    jsbind::TypedArray<long long> dependencies() const;
    void dependencies(jsbind::TypedArray<long long> value);
    unsigned short width() const;
    void width(unsigned short value);
    unsigned short height() const;
    void height(unsigned short value);
    unsigned long spatialIndex() const;
    void spatialIndex(unsigned long value);
    unsigned long temporalIndex() const;
    void temporalIndex(unsigned long value);
    long long timestamp() const;
    void timestamp(long long value);
};

class RTCEncodedVideoFrame : public emlite::Val {
    explicit RTCEncodedVideoFrame(Handle h) noexcept;

public:
    explicit RTCEncodedVideoFrame(const emlite::Val &val) noexcept;
    static RTCEncodedVideoFrame take_ownership(Handle h) noexcept;

    RTCEncodedVideoFrame clone() const noexcept;
    RTCEncodedVideoFrame(const RTCEncodedVideoFrame& originalFrame);
    RTCEncodedVideoFrame(const RTCEncodedVideoFrame& originalFrame, const jsbind::Any& options);
    RTCEncodedVideoFrameType type() const;
    jsbind::ArrayBuffer data() const;
    void data(const jsbind::ArrayBuffer& value);
    RTCEncodedVideoFrameMetadata getMetadata();
};

