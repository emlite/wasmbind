#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type VideoEncoderEncodeOptions
/// [`VideoEncoderEncodeOptions`](https://developer.mozilla.org/en-US/docs/Web/API/VideoEncoderEncodeOptions)
class VideoEncoderEncodeOptions : public emlite::Val {
  explicit VideoEncoderEncodeOptions(Handle h) noexcept;
public:
    static VideoEncoderEncodeOptions take_ownership(Handle h) noexcept;
    explicit VideoEncoderEncodeOptions(const emlite::Val &val) noexcept;
    VideoEncoderEncodeOptions() noexcept;
    [[nodiscard]] VideoEncoderEncodeOptions clone() const noexcept;
    [[nodiscard]] bool keyFrame() const;
    void keyFrame(bool value);
};

} // namespace webbind