#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type VideoEncoderEncodeOptionsForAvc
class VideoEncoderEncodeOptionsForAvc : public emlite::Val {
  explicit VideoEncoderEncodeOptionsForAvc(Handle h) noexcept;
public:
    static VideoEncoderEncodeOptionsForAvc take_ownership(Handle h) noexcept;
    explicit VideoEncoderEncodeOptionsForAvc(const emlite::Val &val) noexcept;
    VideoEncoderEncodeOptionsForAvc() noexcept;
    [[nodiscard]] VideoEncoderEncodeOptionsForAvc clone() const noexcept;
    /// Getter of the `quantizer` attribute.
    [[nodiscard]] unsigned short quantizer() const;
    /// Setter of the `quantizer` attribute.
    void quantizer(unsigned short value);
};

} // namespace webbind