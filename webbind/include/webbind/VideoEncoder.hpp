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
    [[nodiscard]] VideoEncoderConfig clone() const noexcept;
    [[nodiscard]] jsbind::String codec() const;
    void codec(const jsbind::String& value);
    [[nodiscard]] unsigned long width() const;
    void width(unsigned long value);
    [[nodiscard]] unsigned long height() const;
    void height(unsigned long value);
    [[nodiscard]] unsigned long displayWidth() const;
    void displayWidth(unsigned long value);
    [[nodiscard]] unsigned long displayHeight() const;
    void displayHeight(unsigned long value);
    [[nodiscard]] long long bitrate() const;
    void bitrate(long long value);
    [[nodiscard]] double framerate() const;
    void framerate(double value);
    [[nodiscard]] HardwareAcceleration hardwareAcceleration() const;
    void hardwareAcceleration(const HardwareAcceleration& value);
    [[nodiscard]] AlphaOption alpha() const;
    void alpha(const AlphaOption& value);
    [[nodiscard]] jsbind::String scalabilityMode() const;
    void scalabilityMode(const jsbind::String& value);
    [[nodiscard]] VideoEncoderBitrateMode bitrateMode() const;
    void bitrateMode(const VideoEncoderBitrateMode& value);
    [[nodiscard]] LatencyMode latencyMode() const;
    void latencyMode(const LatencyMode& value);
    [[nodiscard]] jsbind::String contentHint() const;
    void contentHint(const jsbind::String& value);
};

class VideoEncoderEncodeOptions : public emlite::Val {
  explicit VideoEncoderEncodeOptions(Handle h) noexcept;
public:
    static VideoEncoderEncodeOptions take_ownership(Handle h) noexcept;
    explicit VideoEncoderEncodeOptions(const emlite::Val &val) noexcept;
    VideoEncoderEncodeOptions() noexcept;
    [[nodiscard]] VideoEncoderEncodeOptions clone() const noexcept;
    [[nodiscard]] bool keyFrame() const;
    void keyFrame(bool value);
};

class VideoEncoderSupport : public emlite::Val {
  explicit VideoEncoderSupport(Handle h) noexcept;
public:
    static VideoEncoderSupport take_ownership(Handle h) noexcept;
    explicit VideoEncoderSupport(const emlite::Val &val) noexcept;
    VideoEncoderSupport() noexcept;
    [[nodiscard]] VideoEncoderSupport clone() const noexcept;
    [[nodiscard]] bool supported() const;
    void supported(bool value);
    [[nodiscard]] VideoEncoderConfig config() const;
    void config(const VideoEncoderConfig& value);
};

/// The VideoEncoder class.
/// [`VideoEncoder`](https://developer.mozilla.org/en-US/docs/Web/API/VideoEncoder)
class VideoEncoder : public EventTarget {
    explicit VideoEncoder(Handle h) noexcept;

public:
    explicit VideoEncoder(const emlite::Val &val) noexcept;
    static VideoEncoder take_ownership(Handle h) noexcept;

    [[nodiscard]] VideoEncoder clone() const noexcept;
    /// The `new VideoEncoder(..)` constructor, creating a new VideoEncoder instance
    VideoEncoder(const jsbind::Any& init);
    /// Getter of the `state` attribute.
    /// [`VideoEncoder.state`](https://developer.mozilla.org/en-US/docs/Web/API/VideoEncoder/state)
    [[nodiscard]] CodecState state() const;
    /// Getter of the `encodeQueueSize` attribute.
    /// [`VideoEncoder.encodeQueueSize`](https://developer.mozilla.org/en-US/docs/Web/API/VideoEncoder/encodeQueueSize)
    [[nodiscard]] unsigned long encodeQueueSize() const;
    /// Getter of the `ondequeue` attribute.
    /// [`VideoEncoder.ondequeue`](https://developer.mozilla.org/en-US/docs/Web/API/VideoEncoder/ondequeue)
    [[nodiscard]] jsbind::Any ondequeue() const;
    /// Setter of the `ondequeue` attribute.
    /// [`VideoEncoder.ondequeue`](https://developer.mozilla.org/en-US/docs/Web/API/VideoEncoder/ondequeue)
    void ondequeue(const jsbind::Any& value);
    /// The configure method.
    /// [`VideoEncoder.configure`](https://developer.mozilla.org/en-US/docs/Web/API/VideoEncoder/configure)
    jsbind::Undefined configure(const VideoEncoderConfig& config);
    /// The encode method.
    /// [`VideoEncoder.encode`](https://developer.mozilla.org/en-US/docs/Web/API/VideoEncoder/encode)
    jsbind::Undefined encode(const VideoFrame& frame);
    /// The encode method.
    /// [`VideoEncoder.encode`](https://developer.mozilla.org/en-US/docs/Web/API/VideoEncoder/encode)
    jsbind::Undefined encode(const VideoFrame& frame, const VideoEncoderEncodeOptions& options);
    /// The flush method.
    /// [`VideoEncoder.flush`](https://developer.mozilla.org/en-US/docs/Web/API/VideoEncoder/flush)
    jsbind::Promise<jsbind::Undefined> flush();
    /// The reset method.
    /// [`VideoEncoder.reset`](https://developer.mozilla.org/en-US/docs/Web/API/VideoEncoder/reset)
    jsbind::Undefined reset();
    /// The close method.
    /// [`VideoEncoder.close`](https://developer.mozilla.org/en-US/docs/Web/API/VideoEncoder/close)
    jsbind::Undefined close();
    /// The isConfigSupported method.
    /// [`VideoEncoder.isConfigSupported`](https://developer.mozilla.org/en-US/docs/Web/API/VideoEncoder/isConfigSupported)
    static jsbind::Promise<VideoEncoderSupport> isConfigSupported(const VideoEncoderConfig& config);
};

