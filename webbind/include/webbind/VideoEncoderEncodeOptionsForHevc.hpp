#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type VideoEncoderEncodeOptionsForHevc
class VideoEncoderEncodeOptionsForHevc : public emlite::Val {
  explicit VideoEncoderEncodeOptionsForHevc(Handle h) noexcept;
public:
    static VideoEncoderEncodeOptionsForHevc take_ownership(Handle h) noexcept;
    explicit VideoEncoderEncodeOptionsForHevc(const emlite::Val &val) noexcept;
    VideoEncoderEncodeOptionsForHevc() noexcept;
    [[nodiscard]] VideoEncoderEncodeOptionsForHevc clone() const noexcept;
    /// Getter of the `quantizer` attribute.
    [[nodiscard]] unsigned short quantizer() const;
    /// Setter of the `quantizer` attribute.
    void quantizer(unsigned short value);
};

} // namespace webbind