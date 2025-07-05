#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

class ImageDataSettings;


class ImageData : public emlite::Val {
    explicit ImageData(Handle h) noexcept;

public:
    explicit ImageData(const emlite::Val &val) noexcept;
    static ImageData take_ownership(Handle h) noexcept;

    ImageData clone() const noexcept;
    ImageData(const jsbind::Any& data, unsigned long sw);
    ImageData(const jsbind::Any& data, unsigned long sw, unsigned long sh);
    ImageData(const jsbind::Any& data, unsigned long sw, unsigned long sh, const ImageDataSettings& settings);
    unsigned long width() const;
    unsigned long height() const;
    jsbind::Any data() const;
    ImageDataPixelFormat pixelFormat() const;
    PredefinedColorSpace colorSpace() const;
};

