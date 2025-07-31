#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"


/// The ImageBitmap class.
/// [`ImageBitmap`](https://developer.mozilla.org/en-US/docs/Web/API/ImageBitmap)
class ImageBitmap : public emlite::Val {
    explicit ImageBitmap(Handle h) noexcept;

public:
    explicit ImageBitmap(const emlite::Val &val) noexcept;
    static ImageBitmap take_ownership(Handle h) noexcept;

    [[nodiscard]] ImageBitmap clone() const noexcept;
    /// Getter of the `width` attribute.
    /// [`ImageBitmap.width`](https://developer.mozilla.org/en-US/docs/Web/API/ImageBitmap/width)
    [[nodiscard]] unsigned long width() const;
    /// Getter of the `height` attribute.
    /// [`ImageBitmap.height`](https://developer.mozilla.org/en-US/docs/Web/API/ImageBitmap/height)
    [[nodiscard]] unsigned long height() const;
    /// The close method.
    /// [`ImageBitmap.close`](https://developer.mozilla.org/en-US/docs/Web/API/ImageBitmap/close)
    jsbind::Undefined close();
};

