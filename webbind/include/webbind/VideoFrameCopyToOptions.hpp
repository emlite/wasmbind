#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "DOMRectInit.hpp"
#include "PlaneLayout.hpp"

namespace webbind {

/// Dictionary type VideoFrameCopyToOptions
class VideoFrameCopyToOptions : public emlite::Val {
  explicit VideoFrameCopyToOptions(Handle h) noexcept;
public:
    static VideoFrameCopyToOptions take_ownership(Handle h) noexcept;
    explicit VideoFrameCopyToOptions(const emlite::Val &val) noexcept;
    VideoFrameCopyToOptions() noexcept;
    [[nodiscard]] VideoFrameCopyToOptions clone() const noexcept;
    /// Getter of the `rect` attribute.
    [[nodiscard]] DOMRectInit rect() const;
    /// Setter of the `rect` attribute.
    void rect(const DOMRectInit& value);
    /// Getter of the `layout` attribute.
    [[nodiscard]] jsbind::TypedArray<PlaneLayout> layout() const;
    /// Setter of the `layout` attribute.
    void layout(const jsbind::TypedArray<PlaneLayout>& value);
    /// Getter of the `format` attribute.
    [[nodiscard]] VideoPixelFormat format() const;
    /// Setter of the `format` attribute.
    void format(const VideoPixelFormat& value);
    /// Getter of the `colorSpace` attribute.
    [[nodiscard]] PredefinedColorSpace colorSpace() const;
    /// Setter of the `colorSpace` attribute.
    void colorSpace(const PredefinedColorSpace& value);
};

} // namespace webbind