#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type ImageDecodeOptions
/// [`ImageDecodeOptions`](https://developer.mozilla.org/en-US/docs/Web/API/ImageDecodeOptions)
class ImageDecodeOptions : public emlite::Val {
  explicit ImageDecodeOptions(Handle h) noexcept;
public:
    static ImageDecodeOptions take_ownership(Handle h) noexcept;
    explicit ImageDecodeOptions(const emlite::Val &val) noexcept;
    ImageDecodeOptions() noexcept;
    [[nodiscard]] ImageDecodeOptions clone() const noexcept;
    [[nodiscard]] unsigned long frameIndex() const;
    void frameIndex(unsigned long value);
    [[nodiscard]] bool completeFramesOnly() const;
    void completeFramesOnly(bool value);
};

} // namespace webbind