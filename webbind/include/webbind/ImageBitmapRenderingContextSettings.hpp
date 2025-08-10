#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type ImageBitmapRenderingContextSettings
class ImageBitmapRenderingContextSettings : public emlite::Val {
  explicit ImageBitmapRenderingContextSettings(Handle h) noexcept;
public:
    static ImageBitmapRenderingContextSettings take_ownership(Handle h) noexcept;
    explicit ImageBitmapRenderingContextSettings(const emlite::Val &val) noexcept;
    ImageBitmapRenderingContextSettings() noexcept;
    [[nodiscard]] ImageBitmapRenderingContextSettings clone() const noexcept;
    /// Getter of the `alpha` attribute.
    [[nodiscard]] bool alpha() const;
    /// Setter of the `alpha` attribute.
    void alpha(bool value);
};

} // namespace webbind