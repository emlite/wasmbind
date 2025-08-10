#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "ImageDataSettings.hpp"
#include "enums.hpp"

namespace webbind {

/// Interface ImageData
/// [`ImageData`](https://developer.mozilla.org/en-US/docs/Web/API/ImageData)
class ImageData : public emlite::Val {
    explicit ImageData(Handle h) noexcept;
public:
    explicit ImageData(const emlite::Val &val) noexcept;
    static ImageData take_ownership(Handle h) noexcept;
    [[nodiscard]] ImageData clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// The `new ImageData(..)` constructor, creating a new ImageData instance
    ImageData(const jsbind::Any& data, unsigned long sw);
    /// The `new ImageData(..)` constructor, creating a new ImageData instance
    ImageData(const jsbind::Any& data, unsigned long sw, unsigned long sh);
    /// The `new ImageData(..)` constructor, creating a new ImageData instance
    ImageData(const jsbind::Any& data, unsigned long sw, unsigned long sh, const ImageDataSettings& settings);
    /// [`ImageData.width`](https://developer.mozilla.org/en-US/docs/Web/API/ImageData/width)
    /// [`ImageData.width`](https://developer.mozilla.org/en-US/docs/Web/API/ImageData/width)
    [[nodiscard]] unsigned long width() const;
    /// [`ImageData.height`](https://developer.mozilla.org/en-US/docs/Web/API/ImageData/height)
    /// [`ImageData.height`](https://developer.mozilla.org/en-US/docs/Web/API/ImageData/height)
    [[nodiscard]] unsigned long height() const;
    /// [`ImageData.data`](https://developer.mozilla.org/en-US/docs/Web/API/ImageData/data)
    /// [`ImageData.data`](https://developer.mozilla.org/en-US/docs/Web/API/ImageData/data)
    [[nodiscard]] jsbind::Any data() const;
    /// [`ImageData.pixelFormat`](https://developer.mozilla.org/en-US/docs/Web/API/ImageData/pixelFormat)
    /// [`ImageData.pixelFormat`](https://developer.mozilla.org/en-US/docs/Web/API/ImageData/pixelFormat)
    [[nodiscard]] ImageDataPixelFormat pixelFormat() const;
    /// [`ImageData.colorSpace`](https://developer.mozilla.org/en-US/docs/Web/API/ImageData/colorSpace)
    /// [`ImageData.colorSpace`](https://developer.mozilla.org/en-US/docs/Web/API/ImageData/colorSpace)
    [[nodiscard]] PredefinedColorSpace colorSpace() const;
};

} // namespace webbind