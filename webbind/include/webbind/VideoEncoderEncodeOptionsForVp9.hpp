#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type VideoEncoderEncodeOptionsForVp9
class VideoEncoderEncodeOptionsForVp9 : public emlite::Val {
  explicit VideoEncoderEncodeOptionsForVp9(Handle h) noexcept;
public:
    static VideoEncoderEncodeOptionsForVp9 take_ownership(Handle h) noexcept;
    explicit VideoEncoderEncodeOptionsForVp9(const emlite::Val &val) noexcept;
    VideoEncoderEncodeOptionsForVp9() noexcept;
    [[nodiscard]] VideoEncoderEncodeOptionsForVp9 clone() const noexcept;
    /// Getter of the `quantizer` attribute.
    [[nodiscard]] unsigned short quantizer() const;
    /// Setter of the `quantizer` attribute.
    void quantizer(unsigned short value);
};

} // namespace webbind