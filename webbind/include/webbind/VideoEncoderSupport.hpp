#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "VideoEncoderConfig.hpp"

namespace webbind {

/// Dictionary type VideoEncoderSupport
/// [`VideoEncoderSupport`](https://developer.mozilla.org/en-US/docs/Web/API/VideoEncoderSupport)
class VideoEncoderSupport : public emlite::Val {
  explicit VideoEncoderSupport(Handle h) noexcept;
public:
    static VideoEncoderSupport take_ownership(Handle h) noexcept;
    explicit VideoEncoderSupport(const emlite::Val &val) noexcept;
    VideoEncoderSupport() noexcept;
    [[nodiscard]] VideoEncoderSupport clone() const noexcept;
    [[nodiscard]] bool supported() const;
    void supported(bool value);
    [[nodiscard]] VideoEncoderConfig config() const;
    void config(const VideoEncoderConfig& value);
};

} // namespace webbind