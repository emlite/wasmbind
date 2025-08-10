#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "DOMRectInit.hpp"
#include "PlaneLayout.hpp"

namespace webbind {

/// Dictionary type VideoFrameCopyToOptions
/// [`VideoFrameCopyToOptions`](https://developer.mozilla.org/en-US/docs/Web/API/VideoFrameCopyToOptions)
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

} // namespace webbind