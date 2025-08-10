#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "DOMRectInit.hpp"
#include "VideoFrameMetadata.hpp"

namespace webbind {

/// Dictionary type VideoFrameInit
/// [`VideoFrameInit`](https://developer.mozilla.org/en-US/docs/Web/API/VideoFrameInit)
class VideoFrameInit : public emlite::Val {
  explicit VideoFrameInit(Handle h) noexcept;
public:
    static VideoFrameInit take_ownership(Handle h) noexcept;
    explicit VideoFrameInit(const emlite::Val &val) noexcept;
    VideoFrameInit() noexcept;
    [[nodiscard]] VideoFrameInit clone() const noexcept;
    [[nodiscard]] long long duration() const;
    void duration(long long value);
    [[nodiscard]] long long timestamp() const;
    void timestamp(long long value);
    [[nodiscard]] AlphaOption alpha() const;
    void alpha(const AlphaOption& value);
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
    [[nodiscard]] VideoFrameMetadata metadata() const;
    void metadata(const VideoFrameMetadata& value);
};

} // namespace webbind