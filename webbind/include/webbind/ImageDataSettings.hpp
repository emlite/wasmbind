#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type ImageDataSettings
/// [`ImageDataSettings`](https://developer.mozilla.org/en-US/docs/Web/API/ImageDataSettings)
class ImageDataSettings : public emlite::Val {
  explicit ImageDataSettings(Handle h) noexcept;
public:
    static ImageDataSettings take_ownership(Handle h) noexcept;
    explicit ImageDataSettings(const emlite::Val &val) noexcept;
    ImageDataSettings() noexcept;
    [[nodiscard]] ImageDataSettings clone() const noexcept;
    [[nodiscard]] PredefinedColorSpace colorSpace() const;
    void colorSpace(const PredefinedColorSpace& value);
    [[nodiscard]] ImageDataPixelFormat pixelFormat() const;
    void pixelFormat(const ImageDataPixelFormat& value);
};

} // namespace webbind