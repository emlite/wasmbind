#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type ImageDataSettings
class ImageDataSettings : public emlite::Val {
  explicit ImageDataSettings(Handle h) noexcept;
public:
    static ImageDataSettings take_ownership(Handle h) noexcept;
    explicit ImageDataSettings(const emlite::Val &val) noexcept;
    ImageDataSettings() noexcept;
    [[nodiscard]] ImageDataSettings clone() const noexcept;
    /// Getter of the `colorSpace` attribute.
    [[nodiscard]] PredefinedColorSpace colorSpace() const;
    /// Setter of the `colorSpace` attribute.
    void colorSpace(const PredefinedColorSpace& value);
    /// Getter of the `pixelFormat` attribute.
    [[nodiscard]] ImageDataPixelFormat pixelFormat() const;
    /// Setter of the `pixelFormat` attribute.
    void pixelFormat(const ImageDataPixelFormat& value);
};

} // namespace webbind