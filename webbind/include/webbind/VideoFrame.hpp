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
    VideoFrameMetadata clone() const noexcept;
};

class VideoFrameCopyToOptions : public emlite::Val {
  explicit VideoFrameCopyToOptions(Handle h) noexcept;
public:
    static VideoFrameCopyToOptions take_ownership(Handle h) noexcept;
    explicit VideoFrameCopyToOptions(const emlite::Val &val) noexcept;
    VideoFrameCopyToOptions() noexcept;
    VideoFrameCopyToOptions clone() const noexcept;
    DOMRectInit rect() const;
    void rect(const DOMRectInit& value);
    jsbind::Sequence<PlaneLayout> layout() const;
    void layout(const jsbind::Sequence<PlaneLayout>& value);
    VideoPixelFormat format() const;
    void format(const VideoPixelFormat& value);
    PredefinedColorSpace colorSpace() const;
    void colorSpace(const PredefinedColorSpace& value);
};

class PlaneLayout : public emlite::Val {
  explicit PlaneLayout(Handle h) noexcept;
public:
    static PlaneLayout take_ownership(Handle h) noexcept;
    explicit PlaneLayout(const emlite::Val &val) noexcept;
    PlaneLayout() noexcept;
    PlaneLayout clone() const noexcept;
    unsigned long offset() const;
    void offset(unsigned long value);
    unsigned long stride() const;
    void stride(unsigned long value);
};

class VideoFrame : public emlite::Val {
    explicit VideoFrame(Handle h) noexcept;

public:
    explicit VideoFrame(const emlite::Val &val) noexcept;
    static VideoFrame take_ownership(Handle h) noexcept;

    VideoFrame clone() const noexcept;
    VideoFrame(const jsbind::Any& data, const jsbind::Any& init);
    VideoPixelFormat format() const;
    unsigned long codedWidth() const;
    unsigned long codedHeight() const;
    DOMRectReadOnly codedRect() const;
    DOMRectReadOnly visibleRect() const;
    double rotation() const;
    bool flip() const;
    unsigned long displayWidth() const;
    unsigned long displayHeight() const;
    long long duration() const;
    long long timestamp() const;
    VideoColorSpace colorSpace() const;
    VideoFrameMetadata metadata();
    unsigned long allocationSize();
    unsigned long allocationSize(const VideoFrameCopyToOptions& options);
    jsbind::Promise copyTo(const jsbind::Any& destination);
    jsbind::Promise copyTo(const jsbind::Any& destination, const VideoFrameCopyToOptions& options);
    VideoFrame clone();
    jsbind::Undefined close();
};

