#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "VideoEncoderConfig.hpp"

namespace webbind {

/// Dictionary type VideoEncoderSupport
class VideoEncoderSupport : public emlite::Val {
  explicit VideoEncoderSupport(Handle h) noexcept;
public:
    static VideoEncoderSupport take_ownership(Handle h) noexcept;
    explicit VideoEncoderSupport(const emlite::Val &val) noexcept;
    VideoEncoderSupport() noexcept;
    [[nodiscard]] VideoEncoderSupport clone() const noexcept;
    /// Getter of the `supported` attribute.
    [[nodiscard]] bool supported() const;
    /// Setter of the `supported` attribute.
    void supported(bool value);
    /// Getter of the `config` attribute.
    [[nodiscard]] VideoEncoderConfig config() const;
    /// Setter of the `config` attribute.
    void config(const VideoEncoderConfig& value);
};

} // namespace webbind