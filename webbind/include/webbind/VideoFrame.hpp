#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

class DOMRectReadOnly;
class VideoColorSpace;
class VideoFrameMetadata;
class VideoFrameCopyToOptions;
class PlaneLayout;
class VideoFrame;
class DOMRectInit;


class VideoFrameMetadata : public emlite::Val {
  explicit VideoFrameMetadata(Handle h) noexcept;
public:
    static VideoFrameMetadata take_ownership(Handle h) noexcept;
    explicit VideoFrameMetadata(const emlite::Val &val) noexcept;
    VideoFrameMetadata() noexcept;
    [[nodiscard]] VideoFrameMetadata clone() const noexcept;
};

class VideoFrameCopyToOptions : public emlite::Val {
  explicit VideoFrameCopyToOptions(Handle h) noexcept;
public:
    static VideoFrameCopyToOptions take_ownership(Handle h) noexcept;
    explicit VideoFrameCopyToOptions(const emlite::Val &val) noexcept;
    VideoFrameCopyToOptions() noexcept;
    [[nodiscard]] VideoFrameCopyToOptions clone() const noexcept;
    [[nodiscard]] DOMRectInit rect() const;
    void rect(const DOMRectInit& value);
    [[nodiscard]] jsbind::TypedArray<PlaneLayout> layout() const;
    void layout(const jsbind::TypedArray<PlaneLayout>& value);
    [[nodiscard]] VideoPixelFormat format() const;
    void format(const VideoPixelFormat& value);
    [[nodiscard]] PredefinedColorSpace colorSpace() const;
    void colorSpace(const PredefinedColorSpace& value);
};

class PlaneLayout : public emlite::Val {
  explicit PlaneLayout(Handle h) noexcept;
public:
    static PlaneLayout take_ownership(Handle h) noexcept;
    explicit PlaneLayout(const emlite::Val &val) noexcept;
    PlaneLayout() noexcept;
    [[nodiscard]] PlaneLayout clone() const noexcept;
    [[nodiscard]] unsigned long offset() const;
    void offset(unsigned long value);
    [[nodiscard]] unsigned long stride() const;
    void stride(unsigned long value);
};

/// The VideoFrame class.
/// [`VideoFrame`](https://developer.mozilla.org/en-US/docs/Web/API/VideoFrame)
class VideoFrame : public emlite::Val {
    explicit VideoFrame(Handle h) noexcept;

public:
    explicit VideoFrame(const emlite::Val &val) noexcept;
    static VideoFrame take_ownership(Handle h) noexcept;

    [[nodiscard]] VideoFrame clone() const noexcept;
    /// The `new VideoFrame(..)` constructor, creating a new VideoFrame instance
    VideoFrame(const jsbind::Any& data, const jsbind::Any& init);
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

