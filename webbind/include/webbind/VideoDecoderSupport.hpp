#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "VideoDecoderConfig.hpp"

namespace webbind {

/// Dictionary type VideoDecoderSupport
/// [`VideoDecoderSupport`](https://developer.mozilla.org/en-US/docs/Web/API/VideoDecoderSupport)
class VideoDecoderSupport : public emlite::Val {
  explicit VideoDecoderSupport(Handle h) noexcept;
public:
    static VideoDecoderSupport take_ownership(Handle h) noexcept;
    explicit VideoDecoderSupport(const emlite::Val &val) noexcept;
    VideoDecoderSupport() noexcept;
    [[nodiscard]] VideoDecoderSupport clone() const noexcept;
    [[nodiscard]] bool supported() const;
    void supported(bool value);
    [[nodiscard]] VideoDecoderConfig config() const;
    void config(const VideoDecoderConfig& value);
};

} // namespace webbind