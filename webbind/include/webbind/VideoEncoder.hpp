#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "EventTarget.hpp"
#include "enums.hpp"

class VideoEncoderConfig;
class VideoFrame;
class VideoEncoderEncodeOptions;
class VideoEncoderSupport;


class VideoEncoderConfig : public emlite::Val {
  explicit VideoEncoderConfig(Handle h) noexcept;
public:
    static VideoEncoderConfig take_ownership(Handle h) noexcept;
    explicit VideoEncoderConfig(const emlite::Val &val) noexcept;
    VideoEncoderConfig() noexcept;
    VideoEncoderConfig clone() const noexcept;
    jsbind::DOMString codec() const;
    void codec(const jsbind::DOMString& value);
    unsigned long width() const;
    void width(unsigned long value);
    unsigned long height() const;
    void height(unsigned long value);
    unsigned long displayWidth() const;
    void displayWidth(unsigned long value);
    unsigned long displayHeight() const;
    void displayHeight(unsigned long value);
    long long bitrate() const;
    void bitrate(long long value);
    double framerate() const;
    void framerate(double value);
    HardwareAcceleration hardwareAcceleration() const;
    void hardwareAcceleration(const HardwareAcceleration& value);
    AlphaOption alpha() const;
    void alpha(const AlphaOption& value);
    jsbind::DOMString scalabilityMode() const;
    void scalabilityMode(const jsbind::DOMString& value);
    VideoEncoderBitrateMode bitrateMode() const;
    void bitrateMode(const VideoEncoderBitrateMode& value);
    LatencyMode latencyMode() const;
    void latencyMode(const LatencyMode& value);
    jsbind::DOMString contentHint() const;
    void contentHint(const jsbind::DOMString& value);
};

class VideoEncoderEncodeOptions : public emlite::Val {
  explicit VideoEncoderEncodeOptions(Handle h) noexcept;
public:
    static VideoEncoderEncodeOptions take_ownership(Handle h) noexcept;
    explicit VideoEncoderEncodeOptions(const emlite::Val &val) noexcept;
    VideoEncoderEncodeOptions() noexcept;
    VideoEncoderEncodeOptions clone() const noexcept;
    bool keyFrame() const;
    void keyFrame(bool value);
};

class VideoEncoderSupport : public emlite::Val {
  explicit VideoEncoderSupport(Handle h) noexcept;
public:
    static VideoEncoderSupport take_ownership(Handle h) noexcept;
    explicit VideoEncoderSupport(const emlite::Val &val) noexcept;
    VideoEncoderSupport() noexcept;
    VideoEncoderSupport clone() const noexcept;
    bool supported() const;
    void supported(bool value);
    VideoEncoderConfig config() const;
    void config(const VideoEncoderConfig& value);
};

class VideoEncoder : public EventTarget {
    explicit VideoEncoder(Handle h) noexcept;

public:
    explicit VideoEncoder(const emlite::Val &val) noexcept;
    static VideoEncoder take_ownership(Handle h) noexcept;

    VideoEncoder clone() const noexcept;
    VideoEncoder(const jsbind::Any& init);
    CodecState state() const;
    unsigned long encodeQueueSize() const;
    jsbind::Any ondequeue() const;
    void ondequeue(const jsbind::Any& value);
    jsbind::Undefined configure(const VideoEncoderConfig& config);
    jsbind::Undefined encode(const VideoFrame& frame, const VideoEncoderEncodeOptions& options);
    jsbind::Promise flush();
    jsbind::Undefined reset();
    jsbind::Undefined close();
    static jsbind::Promise isConfigSupported(const VideoEncoderConfig& config);
};

