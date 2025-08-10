#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "EventTarget.hpp"
#include "enums.hpp"

namespace webbind {

class VideoEncoderInit;
class VideoEncoderConfig;
class VideoFrame;
class VideoEncoderEncodeOptions;
class VideoEncoderSupport;

/// Interface VideoEncoder
/// [`VideoEncoder`](https://developer.mozilla.org/en-US/docs/Web/API/VideoEncoder)
class VideoEncoder : public EventTarget {
    explicit VideoEncoder(Handle h) noexcept;
public:
    explicit VideoEncoder(const emlite::Val &val) noexcept;
    static VideoEncoder take_ownership(Handle h) noexcept;
    [[nodiscard]] VideoEncoder clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// The `new VideoEncoder(..)` constructor, creating a new VideoEncoder instance
    VideoEncoder(const VideoEncoderInit& init);
    /// [`VideoEncoder.state`](https://developer.mozilla.org/en-US/docs/Web/API/VideoEncoder/state)
    /// [`VideoEncoder.state`](https://developer.mozilla.org/en-US/docs/Web/API/VideoEncoder/state)
    [[nodiscard]] CodecState state() const;
    /// [`VideoEncoder.encodeQueueSize`](https://developer.mozilla.org/en-US/docs/Web/API/VideoEncoder/encodeQueueSize)
    /// [`VideoEncoder.encodeQueueSize`](https://developer.mozilla.org/en-US/docs/Web/API/VideoEncoder/encodeQueueSize)
    [[nodiscard]] unsigned long encodeQueueSize() const;
    /// [`VideoEncoder.ondequeue`](https://developer.mozilla.org/en-US/docs/Web/API/VideoEncoder/ondequeue)
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

} // namespace webbind