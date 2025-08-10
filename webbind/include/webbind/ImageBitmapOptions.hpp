#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type ImageBitmapOptions
/// [`ImageBitmapOptions`](https://developer.mozilla.org/en-US/docs/Web/API/ImageBitmapOptions)
class ImageBitmapOptions : public emlite::Val {
  explicit ImageBitmapOptions(Handle h) noexcept;
public:
    static ImageBitmapOptions take_ownership(Handle h) noexcept;
    explicit ImageBitmapOptions(const emlite::Val &val) noexcept;
    ImageBitmapOptions() noexcept;
    [[nodiscard]] ImageBitmapOptions clone() const noexcept;
    [[nodiscard]] ImageOrientation imageOrientation() const;
    void imageOrientation(const ImageOrientation& value);
    [[nodiscard]] PremultiplyAlpha premultiplyAlpha() const;
    void premultiplyAlpha(const PremultiplyAlpha& value);
    [[nodiscard]] ColorSpaceConversion colorSpaceConversion() const;
    void colorSpaceConversion(const ColorSpaceConversion& value);
    [[nodiscard]] unsigned long resizeWidth() const;
    void resizeWidth(unsigned long value);
    [[nodiscard]] unsigned long resizeHeight() const;
    void resizeHeight(unsigned long value);
    [[nodiscard]] ResizeQuality resizeQuality() const;
    void resizeQuality(const ResizeQuality& value);
};

} // namespace webbind