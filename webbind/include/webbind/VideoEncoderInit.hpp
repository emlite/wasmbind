#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type VideoEncoderInit
/// [`VideoEncoderInit`](https://developer.mozilla.org/en-US/docs/Web/API/VideoEncoderInit)
class VideoEncoderInit : public emlite::Val {
  explicit VideoEncoderInit(Handle h) noexcept;
public:
    static VideoEncoderInit take_ownership(Handle h) noexcept;
    explicit VideoEncoderInit(const emlite::Val &val) noexcept;
    VideoEncoderInit() noexcept;
    [[nodiscard]] VideoEncoderInit clone() const noexcept;
    [[nodiscard]] jsbind::Function output() const;
    void output(const jsbind::Function& value);
    [[nodiscard]] jsbind::Function error() const;
    void error(const jsbind::Function& value);
};

} // namespace webbind