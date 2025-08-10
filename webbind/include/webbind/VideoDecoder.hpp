#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "EventTarget.hpp"
#include "VideoDecoderInit.hpp"
#include "VideoDecoderConfig.hpp"
#include "VideoDecoderSupport.hpp"
#include "enums.hpp"

namespace webbind {

class EncodedVideoChunk;

/// Interface VideoDecoder
/// [`VideoDecoder`](https://developer.mozilla.org/en-US/docs/Web/API/VideoDecoder)
class VideoDecoder : public EventTarget {
    explicit VideoDecoder(Handle h) noexcept;
public:
    explicit VideoDecoder(const emlite::Val &val) noexcept;
    static VideoDecoder take_ownership(Handle h) noexcept;
    [[nodiscard]] VideoDecoder clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// The `new VideoDecoder(..)` constructor, creating a new VideoDecoder instance
    VideoDecoder(const VideoDecoderInit& init);
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

} // namespace webbind