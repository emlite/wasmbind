#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type ImageDecodeOptions
class ImageDecodeOptions : public emlite::Val {
  explicit ImageDecodeOptions(Handle h) noexcept;
public:
    static ImageDecodeOptions take_ownership(Handle h) noexcept;
    explicit ImageDecodeOptions(const emlite::Val &val) noexcept;
    ImageDecodeOptions() noexcept;
    [[nodiscard]] ImageDecodeOptions clone() const noexcept;
    /// Getter of the `frameIndex` attribute.
    [[nodiscard]] unsigned long frameIndex() const;
    /// Setter of the `frameIndex` attribute.
    void frameIndex(unsigned long value);
    /// Getter of the `completeFramesOnly` attribute.
    [[nodiscard]] bool completeFramesOnly() const;
    /// Setter of the `completeFramesOnly` attribute.
    void completeFramesOnly(bool value);
};

} // namespace webbind