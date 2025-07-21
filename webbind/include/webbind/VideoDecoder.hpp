#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "EventTarget.hpp"
#include "enums.hpp"

class VideoDecoderConfig;
class EncodedVideoChunk;
class VideoDecoderSupport;
class VideoColorSpaceInit;


class VideoDecoderConfig : public emlite::Val {
  explicit VideoDecoderConfig(Handle h) noexcept;
public:
    static VideoDecoderConfig take_ownership(Handle h) noexcept;
    explicit VideoDecoderConfig(const emlite::Val &val) noexcept;
    VideoDecoderConfig() noexcept;
    VideoDecoderConfig clone() const noexcept;
    jsbind::DOMString codec() const;
    void codec(const jsbind::DOMString& value);
    jsbind::Any description() const;
    void description(const jsbind::Any& value);
    unsigned long codedWidth() const;
    void codedWidth(unsigned long value);
    unsigned long codedHeight() const;
    void codedHeight(unsigned long value);
    unsigned long displayAspectWidth() const;
    void displayAspectWidth(unsigned long value);
    unsigned long displayAspectHeight() const;
    void displayAspectHeight(unsigned long value);
    VideoColorSpaceInit colorSpace() const;
    void colorSpace(const VideoColorSpaceInit& value);
    HardwareAcceleration hardwareAcceleration() const;
    void hardwareAcceleration(const HardwareAcceleration& value);
    bool optimizeForLatency() const;
    void optimizeForLatency(bool value);
    double rotation() const;
    void rotation(double value);
    bool flip() const;
    void flip(bool value);
};

class VideoDecoderSupport : public emlite::Val {
  explicit VideoDecoderSupport(Handle h) noexcept;
public:
    static VideoDecoderSupport take_ownership(Handle h) noexcept;
    explicit VideoDecoderSupport(const emlite::Val &val) noexcept;
    VideoDecoderSupport() noexcept;
    VideoDecoderSupport clone() const noexcept;
    bool supported() const;
    void supported(bool value);
    VideoDecoderConfig config() const;
    void config(const VideoDecoderConfig& value);
};

class VideoDecoder : public EventTarget {
    explicit VideoDecoder(Handle h) noexcept;

public:
    explicit VideoDecoder(const emlite::Val &val) noexcept;
    static VideoDecoder take_ownership(Handle h) noexcept;

    VideoDecoder clone() const noexcept;
    VideoDecoder(const jsbind::Any& init);
    CodecState state() const;
    unsigned long decodeQueueSize() const;
    jsbind::Any ondequeue() const;
    void ondequeue(const jsbind::Any& value);
    jsbind::Undefined configure(const VideoDecoderConfig& config);
    jsbind::Undefined decode(const EncodedVideoChunk& chunk);
    jsbind::Promise<jsbind::Undefined> flush();
    jsbind::Undefined reset();
    jsbind::Undefined close();
    static jsbind::Promise<VideoDecoderSupport> isConfigSupported(const VideoDecoderConfig& config);
};

