#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "enums.hpp"

namespace webbind {

class VideoFrameBufferInit;
class DOMRectReadOnly;
class VideoColorSpace;
class VideoFrameMetadata;
class VideoFrameCopyToOptions;
class PlaneLayout;
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
    /// [`VideoFrame.format`](https://developer.mozilla.org/en-US/docs/Web/API/VideoFrame/format)
    /// [`VideoFrame.format`](https://developer.mozilla.org/en-US/docs/Web/API/VideoFrame/format)
    [[nodiscard]] VideoPixelFormat format() const;
    /// [`VideoFrame.codedWidth`](https://developer.mozilla.org/en-US/docs/Web/API/VideoFrame/codedWidth)
    /// [`VideoFrame.codedWidth`](https://developer.mozilla.org/en-US/docs/Web/API/VideoFrame/codedWidth)
    [[nodiscard]] unsigned long codedWidth() const;
    /// [`VideoFrame.codedHeight`](https://developer.mozilla.org/en-US/docs/Web/API/VideoFrame/codedHeight)
    /// [`VideoFrame.codedHeight`](https://developer.mozilla.org/en-US/docs/Web/API/VideoFrame/codedHeight)
    [[nodiscard]] unsigned long codedHeight() const;
    /// [`VideoFrame.codedRect`](https://developer.mozilla.org/en-US/docs/Web/API/VideoFrame/codedRect)
    /// [`VideoFrame.codedRect`](https://developer.mozilla.org/en-US/docs/Web/API/VideoFrame/codedRect)
    [[nodiscard]] DOMRectReadOnly codedRect() const;
    /// [`VideoFrame.visibleRect`](https://developer.mozilla.org/en-US/docs/Web/API/VideoFrame/visibleRect)
    /// [`VideoFrame.visibleRect`](https://developer.mozilla.org/en-US/docs/Web/API/VideoFrame/visibleRect)
    [[nodiscard]] DOMRectReadOnly visibleRect() const;
    /// [`VideoFrame.rotation`](https://developer.mozilla.org/en-US/docs/Web/API/VideoFrame/rotation)
    /// [`VideoFrame.rotation`](https://developer.mozilla.org/en-US/docs/Web/API/VideoFrame/rotation)
    [[nodiscard]] double rotation() const;
    /// [`VideoFrame.flip`](https://developer.mozilla.org/en-US/docs/Web/API/VideoFrame/flip)
    /// [`VideoFrame.flip`](https://developer.mozilla.org/en-US/docs/Web/API/VideoFrame/flip)
    [[nodiscard]] bool flip() const;
    /// [`VideoFrame.displayWidth`](https://developer.mozilla.org/en-US/docs/Web/API/VideoFrame/displayWidth)
    /// [`VideoFrame.displayWidth`](https://developer.mozilla.org/en-US/docs/Web/API/VideoFrame/displayWidth)
    [[nodiscard]] unsigned long displayWidth() const;
    /// [`VideoFrame.displayHeight`](https://developer.mozilla.org/en-US/docs/Web/API/VideoFrame/displayHeight)
    /// [`VideoFrame.displayHeight`](https://developer.mozilla.org/en-US/docs/Web/API/VideoFrame/displayHeight)
    [[nodiscard]] unsigned long displayHeight() const;
    /// [`VideoFrame.duration`](https://developer.mozilla.org/en-US/docs/Web/API/VideoFrame/duration)
    /// [`VideoFrame.duration`](https://developer.mozilla.org/en-US/docs/Web/API/VideoFrame/duration)
    [[nodiscard]] long long duration() const;
    /// [`VideoFrame.timestamp`](https://developer.mozilla.org/en-US/docs/Web/API/VideoFrame/timestamp)
    /// [`VideoFrame.timestamp`](https://developer.mozilla.org/en-US/docs/Web/API/VideoFrame/timestamp)
    [[nodiscard]] long long timestamp() const;
    /// [`VideoFrame.colorSpace`](https://developer.mozilla.org/en-US/docs/Web/API/VideoFrame/colorSpace)
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