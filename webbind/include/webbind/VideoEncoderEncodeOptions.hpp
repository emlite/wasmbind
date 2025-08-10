#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type VideoEncoderEncodeOptions
class VideoEncoderEncodeOptions : public emlite::Val {
  explicit VideoEncoderEncodeOptions(Handle h) noexcept;
public:
    static VideoEncoderEncodeOptions take_ownership(Handle h) noexcept;
    explicit VideoEncoderEncodeOptions(const emlite::Val &val) noexcept;
    VideoEncoderEncodeOptions() noexcept;
    [[nodiscard]] VideoEncoderEncodeOptions clone() const noexcept;
    /// Getter of the `keyFrame` attribute.
    [[nodiscard]] bool keyFrame() const;
    /// Setter of the `keyFrame` attribute.
    void keyFrame(bool value);
};

} // namespace webbind