#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

class ImageBitmap;


class ImageBitmapRenderingContext : public emlite::Val {
    explicit ImageBitmapRenderingContext(Handle h) noexcept;

public:
    explicit ImageBitmapRenderingContext(const emlite::Val &val) noexcept;
    static ImageBitmapRenderingContext take_ownership(Handle h) noexcept;

    ImageBitmapRenderingContext clone() const noexcept;
    jsbind::Any canvas() const;
    jsbind::Undefined transferFromImageBitmap(const ImageBitmap& bitmap);
};

