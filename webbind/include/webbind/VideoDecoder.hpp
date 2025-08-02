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
    [[nodiscard]] VideoDecoderConfig clone() const noexcept;
    [[nodiscard]] jsbind::String codec() const;
    void codec(const jsbind::String& value);
    [[nodiscard]] jsbind::Any description() const;
    void description(const jsbind::Any& value);
    [[nodiscard]] unsigned long codedWidth() const;
    void codedWidth(unsigned long value);
    [[nodiscard]] unsigned long codedHeight() const;
    void codedHeight(unsigned long value);
    [[nodiscard]] unsigned long displayAspectWidth() const;
    void displayAspectWidth(unsigned long value);
    [[nodiscard]] unsigned long displayAspectHeight() const;
    void displayAspectHeight(unsigned long value);
    [[nodiscard]] VideoColorSpaceInit colorSpace() const;
    void colorSpace(const VideoColorSpaceInit& value);
    [[nodiscard]] HardwareAcceleration hardwareAcceleration() const;
    void hardwareAcceleration(const HardwareAcceleration& value);
    [[nodiscard]] bool optimizeForLatency() const;
    void optimizeForLatency(bool value);
    [[nodiscard]] double rotation() const;
    void rotation(double value);
    [[nodiscard]] bool flip() const;
    void flip(bool value);
};

class VideoDecoderSupport : public emlite::Val {
  explicit VideoDecoderSupport(Handle h) noexcept;
public:
    static VideoDecoderSupport take_ownership(Handle h) noexcept;
    explicit VideoDecoderSupport(const emlite::Val &val) noexcept;
    VideoDecoderSupport() noexcept;
    [[nodiscard]] VideoDecoderSupport clone() const noexcept;
    [[nodiscard]] bool supported() const;
    void supported(bool value);
    [[nodiscard]] VideoDecoderConfig config() const;
    void config(const VideoDecoderConfig& value);
};

/// The VideoDecoder class.
/// [`VideoDecoder`](https://developer.mozilla.org/en-US/docs/Web/API/VideoDecoder)
class VideoDecoder : public EventTarget {
    explicit VideoDecoder(Handle h) noexcept;

public:
    explicit VideoDecoder(const emlite::Val &val) noexcept;
    static VideoDecoder take_ownership(Handle h) noexcept;

    [[nodiscard]] VideoDecoder clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// The `new VideoDecoder(..)` constructor, creating a new VideoDecoder instance
    VideoDecoder(const jsbind::Any& init);
    /// Getter of the `state` attribute.
    /// [`VideoDecoder.state`](https://developer.mozilla.org/en-US/docs/Web/API/VideoDecoder/state)
    [[nodiscard]] CodecState state() const;
    /// Getter of the `decodeQueueSize` attribute.
    /// [`VideoDecoder.decodeQueueSize`](https://developer.mozilla.org/en-US/docs/Web/API/VideoDecoder/decodeQueueSize)
    [[nodiscard]] unsigned long decodeQueueSize() const;
    /// Getter of the `ondequeue` attribute.
    /// [`VideoDecoder.ondequeue`](https://developer.mozilla.org/en-US/docs/Web/API/VideoDecoder/ondequeue)
    [[nodiscard]] jsbind::Any ondequeue() const;
    /// Setter of the `ondequeue` attribute.
    /// [`VideoDecoder.ondequeue`](https://developer.mozilla.org/en-US/docs/Web/API/VideoDecoder/ondequeue)
    void ondequeue(const jsbind::Any& value);
    /// The configure method.
    /// [`VideoDecoder.configure`](https://developer.mozilla.org/en-US/docs/Web/API/VideoDecoder/configure)
    jsbind::Undefined configure(const VideoDecoderConfig& config);
    /// The decode method.
    /// [`VideoDecoder.decode`](https://developer.mozilla.org/en-US/docs/Web/API/VideoDecoder/decode)
    jsbind::Undefined decode(const EncodedVideoChunk& chunk);
    /// The flush method.
    /// [`VideoDecoder.flush`](https://developer.mozilla.org/en-US/docs/Web/API/VideoDecoder/flush)
    jsbind::Promise<jsbind::Undefined> flush();
    /// The reset method.
    /// [`VideoDecoder.reset`](https://developer.mozilla.org/en-US/docs/Web/API/VideoDecoder/reset)
    jsbind::Undefined reset();
    /// The close method.
    /// [`VideoDecoder.close`](https://developer.mozilla.org/en-US/docs/Web/API/VideoDecoder/close)
    jsbind::Undefined close();
    /// The isConfigSupported method.
    /// [`VideoDecoder.isConfigSupported`](https://developer.mozilla.org/en-US/docs/Web/API/VideoDecoder/isConfigSupported)
    static jsbind::Promise<VideoDecoderSupport> isConfigSupported(const VideoDecoderConfig& config);
};

