#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "PlaneLayout.hpp"
#include "DOMRectInit.hpp"
#include "VideoColorSpaceInit.hpp"
#include "VideoFrameMetadata.hpp"

namespace webbind {

/// Dictionary type VideoFrameBufferInit
/// [`VideoFrameBufferInit`](https://developer.mozilla.org/en-US/docs/Web/API/VideoFrameBufferInit)
class VideoFrameBufferInit : public emlite::Val {
  explicit VideoFrameBufferInit(Handle h) noexcept;
public:
    static VideoFrameBufferInit take_ownership(Handle h) noexcept;
    explicit VideoFrameBufferInit(const emlite::Val &val) noexcept;
    VideoFrameBufferInit() noexcept;
    [[nodiscard]] VideoFrameBufferInit clone() const noexcept;
    [[nodiscard]] VideoPixelFormat format() const;
    void format(const VideoPixelFormat& value);
    [[nodiscard]] unsigned long codedWidth() const;
    void codedWidth(unsigned long value);
    [[nodiscard]] unsigned long codedHeight() const;
    void codedHeight(unsigned long value);
    [[nodiscard]] long long timestamp() const;
    void timestamp(long long value);
    [[nodiscard]] long long duration() const;
    void duration(long long value);
    [[nodiscard]] jsbind::TypedArray<PlaneLayout> layout() const;
    void layout(const jsbind::TypedArray<PlaneLayout>& value);
    [[nodiscard]] DOMRectInit visibleRect() const;
    void visibleRect(const DOMRectInit& value);
    [[nodiscard]] double rotation() const;
    void rotation(double value);
    [[nodiscard]] bool flip() const;
    void flip(bool value);
    [[nodiscard]] unsigned long displayWidth() const;
    void displayWidth(unsigned long value);
    [[nodiscard]] unsigned long displayHeight() const;
    void displayHeight(unsigned long value);
    [[nodiscard]] VideoColorSpaceInit colorSpace() const;
    void colorSpace(const VideoColorSpaceInit& value);
    [[nodiscard]] jsbind::TypedArray<jsbind::ArrayBuffer> transfer() const;
    void transfer(const jsbind::TypedArray<jsbind::ArrayBuffer>& value);
    [[nodiscard]] VideoFrameMetadata metadata() const;
    void metadata(const VideoFrameMetadata& value);
};

} // namespace webbind