#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

class VideoFrame;

/// Dictionary type ImageDecodeResult
class ImageDecodeResult : public emlite::Val {
  explicit ImageDecodeResult(Handle h) noexcept;
public:
    static ImageDecodeResult take_ownership(Handle h) noexcept;
    explicit ImageDecodeResult(const emlite::Val &val) noexcept;
    ImageDecodeResult() noexcept;
    [[nodiscard]] ImageDecodeResult clone() const noexcept;
    /// Getter of the `image` attribute.
    [[nodiscard]] VideoFrame image() const;
    /// Setter of the `image` attribute.
    void image(const VideoFrame& value);
    /// Getter of the `complete` attribute.
    [[nodiscard]] bool complete() const;
    /// Setter of the `complete` attribute.
    void complete(bool value);
};

} // namespace webbind