#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type VideoEncoderEncodeOptionsForAv1
class VideoEncoderEncodeOptionsForAv1 : public emlite::Val {
  explicit VideoEncoderEncodeOptionsForAv1(Handle h) noexcept;
public:
    static VideoEncoderEncodeOptionsForAv1 take_ownership(Handle h) noexcept;
    explicit VideoEncoderEncodeOptionsForAv1(const emlite::Val &val) noexcept;
    VideoEncoderEncodeOptionsForAv1() noexcept;
    [[nodiscard]] VideoEncoderEncodeOptionsForAv1 clone() const noexcept;
    /// Getter of the `quantizer` attribute.
    [[nodiscard]] unsigned short quantizer() const;
    /// Setter of the `quantizer` attribute.
    void quantizer(unsigned short value);
};

} // namespace webbind