#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

class VideoFrame;

/// Dictionary type ImageDecodeResult
/// [`ImageDecodeResult`](https://developer.mozilla.org/en-US/docs/Web/API/ImageDecodeResult)
class ImageDecodeResult : public emlite::Val {
  explicit ImageDecodeResult(Handle h) noexcept;
public:
    static ImageDecodeResult take_ownership(Handle h) noexcept;
    explicit ImageDecodeResult(const emlite::Val &val) noexcept;
    ImageDecodeResult() noexcept;
    [[nodiscard]] ImageDecodeResult clone() const noexcept;
    [[nodiscard]] VideoFrame image() const;
    void image(const VideoFrame& value);
    [[nodiscard]] bool complete() const;
    void complete(bool value);
};

} // namespace webbind