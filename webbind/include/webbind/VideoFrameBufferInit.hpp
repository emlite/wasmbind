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
class VideoFrameBufferInit : public emlite::Val {
  explicit VideoFrameBufferInit(Handle h) noexcept;
public:
    static VideoFrameBufferInit take_ownership(Handle h) noexcept;
    explicit VideoFrameBufferInit(const emlite::Val &val) noexcept;
    VideoFrameBufferInit() noexcept;
    [[nodiscard]] VideoFrameBufferInit clone() const noexcept;
    /// Getter of the `format` attribute.
    [[nodiscard]] VideoPixelFormat format() const;
    /// Setter of the `format` attribute.
    void format(const VideoPixelFormat& value);
    /// Getter of the `codedWidth` attribute.
    [[nodiscard]] unsigned long codedWidth() const;
    /// Setter of the `codedWidth` attribute.
    void codedWidth(unsigned long value);
    /// Getter of the `codedHeight` attribute.
    [[nodiscard]] unsigned long codedHeight() const;
    /// Setter of the `codedHeight` attribute.
    void codedHeight(unsigned long value);
    /// Getter of the `timestamp` attribute.
    [[nodiscard]] long long timestamp() const;
    /// Setter of the `timestamp` attribute.
    void timestamp(long long value);
    /// Getter of the `duration` attribute.
    [[nodiscard]] long long duration() const;
    /// Setter of the `duration` attribute.
    void duration(long long value);
    /// Getter of the `layout` attribute.
    [[nodiscard]] jsbind::TypedArray<PlaneLayout> layout() const;
    /// Setter of the `layout` attribute.
    void layout(const jsbind::TypedArray<PlaneLayout>& value);
    /// Getter of the `visibleRect` attribute.
    [[nodiscard]] DOMRectInit visibleRect() const;
    /// Setter of the `visibleRect` attribute.
    void visibleRect(const DOMRectInit& value);
    /// Getter of the `rotation` attribute.
    [[nodiscard]] double rotation() const;
    /// Setter of the `rotation` attribute.
    void rotation(double value);
    /// Getter of the `flip` attribute.
    [[nodiscard]] bool flip() const;
    /// Setter of the `flip` attribute.
    void flip(bool value);
    /// Getter of the `displayWidth` attribute.
    [[nodiscard]] unsigned long displayWidth() const;
    /// Setter of the `displayWidth` attribute.
    void displayWidth(unsigned long value);
    /// Getter of the `displayHeight` attribute.
    [[nodiscard]] unsigned long displayHeight() const;
    /// Setter of the `displayHeight` attribute.
    void displayHeight(unsigned long value);
    /// Getter of the `colorSpace` attribute.
    [[nodiscard]] VideoColorSpaceInit colorSpace() const;
    /// Setter of the `colorSpace` attribute.
    void colorSpace(const VideoColorSpaceInit& value);
    /// Getter of the `transfer` attribute.
    [[nodiscard]] jsbind::TypedArray<jsbind::ArrayBuffer> transfer() const;
    /// Setter of the `transfer` attribute.
    void transfer(const jsbind::TypedArray<jsbind::ArrayBuffer>& value);
    /// Getter of the `metadata` attribute.
    [[nodiscard]] VideoFrameMetadata metadata() const;
    /// Setter of the `metadata` attribute.
    void metadata(const VideoFrameMetadata& value);
};

} // namespace webbind