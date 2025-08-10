#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "VideoDecoderConfig.hpp"

namespace webbind {

/// Dictionary type VideoDecoderSupport
class VideoDecoderSupport : public emlite::Val {
  explicit VideoDecoderSupport(Handle h) noexcept;
public:
    static VideoDecoderSupport take_ownership(Handle h) noexcept;
    explicit VideoDecoderSupport(const emlite::Val &val) noexcept;
    VideoDecoderSupport() noexcept;
    [[nodiscard]] VideoDecoderSupport clone() const noexcept;
    /// Getter of the `supported` attribute.
    [[nodiscard]] bool supported() const;
    /// Setter of the `supported` attribute.
    void supported(bool value);
    /// Getter of the `config` attribute.
    [[nodiscard]] VideoDecoderConfig config() const;
    /// Setter of the `config` attribute.
    void config(const VideoDecoderConfig& value);
};

} // namespace webbind