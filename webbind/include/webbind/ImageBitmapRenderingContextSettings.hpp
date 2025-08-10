#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type ImageBitmapRenderingContextSettings
/// [`ImageBitmapRenderingContextSettings`](https://developer.mozilla.org/en-US/docs/Web/API/ImageBitmapRenderingContextSettings)
class ImageBitmapRenderingContextSettings : public emlite::Val {
  explicit ImageBitmapRenderingContextSettings(Handle h) noexcept;
public:
    static ImageBitmapRenderingContextSettings take_ownership(Handle h) noexcept;
    explicit ImageBitmapRenderingContextSettings(const emlite::Val &val) noexcept;
    ImageBitmapRenderingContextSettings() noexcept;
    [[nodiscard]] ImageBitmapRenderingContextSettings clone() const noexcept;
    [[nodiscard]] bool alpha() const;
    void alpha(bool value);
};

} // namespace webbind