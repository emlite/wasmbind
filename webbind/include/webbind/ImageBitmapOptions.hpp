#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type ImageBitmapOptions
class ImageBitmapOptions : public emlite::Val {
  explicit ImageBitmapOptions(Handle h) noexcept;
public:
    static ImageBitmapOptions take_ownership(Handle h) noexcept;
    explicit ImageBitmapOptions(const emlite::Val &val) noexcept;
    ImageBitmapOptions() noexcept;
    [[nodiscard]] ImageBitmapOptions clone() const noexcept;
    /// Getter of the `imageOrientation` attribute.
    [[nodiscard]] ImageOrientation imageOrientation() const;
    /// Setter of the `imageOrientation` attribute.
    void imageOrientation(const ImageOrientation& value);
    /// Getter of the `premultiplyAlpha` attribute.
    [[nodiscard]] PremultiplyAlpha premultiplyAlpha() const;
    /// Setter of the `premultiplyAlpha` attribute.
    void premultiplyAlpha(const PremultiplyAlpha& value);
    /// Getter of the `colorSpaceConversion` attribute.
    [[nodiscard]] ColorSpaceConversion colorSpaceConversion() const;
    /// Setter of the `colorSpaceConversion` attribute.
    void colorSpaceConversion(const ColorSpaceConversion& value);
    /// Getter of the `resizeWidth` attribute.
    [[nodiscard]] unsigned long resizeWidth() const;
    /// Setter of the `resizeWidth` attribute.
    void resizeWidth(unsigned long value);
    /// Getter of the `resizeHeight` attribute.
    [[nodiscard]] unsigned long resizeHeight() const;
    /// Setter of the `resizeHeight` attribute.
    void resizeHeight(unsigned long value);
    /// Getter of the `resizeQuality` attribute.
    [[nodiscard]] ResizeQuality resizeQuality() const;
    /// Setter of the `resizeQuality` attribute.
    void resizeQuality(const ResizeQuality& value);
};

} // namespace webbind