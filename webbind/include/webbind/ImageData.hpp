#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

class ImageDataSettings;


/// The ImageData class.
/// [`ImageData`](https://developer.mozilla.org/en-US/docs/Web/API/ImageData)
class ImageData : public emlite::Val {
    explicit ImageData(Handle h) noexcept;

public:
    explicit ImageData(const emlite::Val &val) noexcept;
    static ImageData take_ownership(Handle h) noexcept;

    [[nodiscard]] ImageData clone() const noexcept;
    /// The `new ImageData(..)` constructor, creating a new ImageData instance
    ImageData(const jsbind::Any& data, unsigned long sw);
    /// The `new ImageData(..)` constructor, creating a new ImageData instance
    ImageData(const jsbind::Any& data, unsigned long sw, unsigned long sh);
    /// The `new ImageData(..)` constructor, creating a new ImageData instance
    ImageData(const jsbind::Any& data, unsigned long sw, unsigned long sh, const ImageDataSettings& settings);
    /// Getter of the `width` attribute.
    /// [`ImageData.width`](https://developer.mozilla.org/en-US/docs/Web/API/ImageData/width)
    [[nodiscard]] unsigned long width() const;
    /// Getter of the `height` attribute.
    /// [`ImageData.height`](https://developer.mozilla.org/en-US/docs/Web/API/ImageData/height)
    [[nodiscard]] unsigned long height() const;
    /// Getter of the `data` attribute.
    /// [`ImageData.data`](https://developer.mozilla.org/en-US/docs/Web/API/ImageData/data)
    [[nodiscard]] jsbind::Any data() const;
    /// Getter of the `pixelFormat` attribute.
    /// [`ImageData.pixelFormat`](https://developer.mozilla.org/en-US/docs/Web/API/ImageData/pixelFormat)
    [[nodiscard]] ImageDataPixelFormat pixelFormat() const;
    /// Getter of the `colorSpace` attribute.
    /// [`ImageData.colorSpace`](https://developer.mozilla.org/en-US/docs/Web/API/ImageData/colorSpace)
    [[nodiscard]] PredefinedColorSpace colorSpace() const;
};

