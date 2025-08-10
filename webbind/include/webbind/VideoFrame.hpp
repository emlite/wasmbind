#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "VideoFrameBufferInit.hpp"
#include "VideoFrameMetadata.hpp"
#include "VideoFrameCopyToOptions.hpp"
#include "PlaneLayout.hpp"
#include "enums.hpp"

namespace webbind {

class DOMRectReadOnly;
class VideoColorSpace;
class VideoFrame;

/// Interface VideoFrame
/// [`VideoFrame`](https://developer.mozilla.org/en-US/docs/Web/API/VideoFrame)
class VideoFrame : public emlite::Val {
    explicit VideoFrame(Handle h) noexcept;
public:
    explicit VideoFrame(const emlite::Val &val) noexcept;
    static VideoFrame take_ownership(Handle h) noexcept;
    [[nodiscard]] VideoFrame clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// The `new VideoFrame(..)` constructor, creating a new VideoFrame instance
    VideoFrame(const jsbind::Any& data, const VideoFrameBufferInit& init);
    /// Getter of the `format` attribute.
    /// [`VideoFrame.format`](https://developer.mozilla.org/en-US/docs/Web/API/VideoFrame/format)
    [[nodiscard]] VideoPixelFormat format() const;
    /// Getter of the `codedWidth` attribute.
    /// [`VideoFrame.codedWidth`](https://developer.mozilla.org/en-US/docs/Web/API/VideoFrame/codedWidth)
    [[nodiscard]] unsigned long codedWidth() const;
    /// Getter of the `codedHeight` attribute.
    /// [`VideoFrame.codedHeight`](https://developer.mozilla.org/en-US/docs/Web/API/VideoFrame/codedHeight)
    [[nodiscard]] unsigned long codedHeight() const;
    /// Getter of the `codedRect` attribute.
    /// [`VideoFrame.codedRect`](https://developer.mozilla.org/en-US/docs/Web/API/VideoFrame/codedRect)
    [[nodiscard]] DOMRectReadOnly codedRect() const;
    /// Getter of the `visibleRect` attribute.
    /// [`VideoFrame.visibleRect`](https://developer.mozilla.org/en-US/docs/Web/API/VideoFrame/visibleRect)
    [[nodiscard]] DOMRectReadOnly visibleRect() const;
    /// Getter of the `rotation` attribute.
    /// [`VideoFrame.rotation`](https://developer.mozilla.org/en-US/docs/Web/API/VideoFrame/rotation)
    [[nodiscard]] double rotation() const;
    /// Getter of the `flip` attribute.
    /// [`VideoFrame.flip`](https://developer.mozilla.org/en-US/docs/Web/API/VideoFrame/flip)
    [[nodiscard]] bool flip() const;
    /// Getter of the `displayWidth` attribute.
    /// [`VideoFrame.displayWidth`](https://developer.mozilla.org/en-US/docs/Web/API/VideoFrame/displayWidth)
    [[nodiscard]] unsigned long displayWidth() const;
    /// Getter of the `displayHeight` attribute.
    /// [`VideoFrame.displayHeight`](https://developer.mozilla.org/en-US/docs/Web/API/VideoFrame/displayHeight)
    [[nodiscard]] unsigned long displayHeight() const;
    /// Getter of the `duration` attribute.
    /// [`VideoFrame.duration`](https://developer.mozilla.org/en-US/docs/Web/API/VideoFrame/duration)
    [[nodiscard]] long long duration() const;
    /// Getter of the `timestamp` attribute.
    /// [`VideoFrame.timestamp`](https://developer.mozilla.org/en-US/docs/Web/API/VideoFrame/timestamp)
    [[nodiscard]] long long timestamp() const;
    /// Getter of the `colorSpace` attribute.
    /// [`VideoFrame.colorSpace`](https://developer.mozilla.org/en-US/docs/Web/API/VideoFrame/colorSpace)
    [[nodiscard]] VideoColorSpace colorSpace() const;
    /// The metadata method.
    /// [`VideoFrame.metadata`](https://developer.mozilla.org/en-US/docs/Web/API/VideoFrame/metadata)
    VideoFrameMetadata metadata();
    /// The allocationSize method.
    /// [`VideoFrame.allocationSize`](https://developer.mozilla.org/en-US/docs/Web/API/VideoFrame/allocationSize)
    unsigned long allocationSize();
    /// The allocationSize method.
    /// [`VideoFrame.allocationSize`](https://developer.mozilla.org/en-US/docs/Web/API/VideoFrame/allocationSize)
    unsigned long allocationSize(const VideoFrameCopyToOptions& options);
    /// The copyTo method.
    /// [`VideoFrame.copyTo`](https://developer.mozilla.org/en-US/docs/Web/API/VideoFrame/copyTo)
    jsbind::Promise<jsbind::TypedArray<PlaneLayout>> copyTo(const jsbind::Any& destination);
    /// The copyTo method.
    /// [`VideoFrame.copyTo`](https://developer.mozilla.org/en-US/docs/Web/API/VideoFrame/copyTo)
    jsbind::Promise<jsbind::TypedArray<PlaneLayout>> copyTo(const jsbind::Any& destination, const VideoFrameCopyToOptions& options);
    /// The clone method.
    /// [`VideoFrame.clone`](https://developer.mozilla.org/en-US/docs/Web/API/VideoFrame/clone)
    VideoFrame clone();
    /// The close method.
    /// [`VideoFrame.close`](https://developer.mozilla.org/en-US/docs/Web/API/VideoFrame/close)
    jsbind::Undefined close();
};

} // namespace webbind