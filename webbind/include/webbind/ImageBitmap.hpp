#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"


class ImageBitmap : public emlite::Val {
    explicit ImageBitmap(Handle h) noexcept;

public:
    explicit ImageBitmap(const emlite::Val &val) noexcept;
    static ImageBitmap take_ownership(Handle h) noexcept;

    ImageBitmap clone() const noexcept;
    unsigned long width() const;
    unsigned long height() const;
    jsbind::Undefined close();
};

