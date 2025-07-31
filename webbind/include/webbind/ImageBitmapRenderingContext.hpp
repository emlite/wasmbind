#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

class ImageBitmap;


/// The ImageBitmapRenderingContext class.
/// [`ImageBitmapRenderingContext`](https://developer.mozilla.org/en-US/docs/Web/API/ImageBitmapRenderingContext)
class ImageBitmapRenderingContext : public emlite::Val {
    explicit ImageBitmapRenderingContext(Handle h) noexcept;

public:
    explicit ImageBitmapRenderingContext(const emlite::Val &val) noexcept;
    static ImageBitmapRenderingContext take_ownership(Handle h) noexcept;

    [[nodiscard]] ImageBitmapRenderingContext clone() const noexcept;
    /// Getter of the `canvas` attribute.
    /// [`ImageBitmapRenderingContext.canvas`](https://developer.mozilla.org/en-US/docs/Web/API/ImageBitmapRenderingContext/canvas)
    [[nodiscard]] jsbind::Any canvas() const;
    /// The transferFromImageBitmap method.
    /// [`ImageBitmapRenderingContext.transferFromImageBitmap`](https://developer.mozilla.org/en-US/docs/Web/API/ImageBitmapRenderingContext/transferFromImageBitmap)
    jsbind::Undefined transferFromImageBitmap(const ImageBitmap& bitmap);
};

