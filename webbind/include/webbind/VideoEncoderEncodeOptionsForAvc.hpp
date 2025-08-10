#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type VideoEncoderEncodeOptionsForAvc
/// [`VideoEncoderEncodeOptionsForAvc`](https://developer.mozilla.org/en-US/docs/Web/API/VideoEncoderEncodeOptionsForAvc)
class VideoEncoderEncodeOptionsForAvc : public emlite::Val {
  explicit VideoEncoderEncodeOptionsForAvc(Handle h) noexcept;
public:
    static VideoEncoderEncodeOptionsForAvc take_ownership(Handle h) noexcept;
    explicit VideoEncoderEncodeOptionsForAvc(const emlite::Val &val) noexcept;
    VideoEncoderEncodeOptionsForAvc() noexcept;
    [[nodiscard]] VideoEncoderEncodeOptionsForAvc clone() const noexcept;
    [[nodiscard]] unsigned short quantizer() const;
    void quantizer(unsigned short value);
};

} // namespace webbind