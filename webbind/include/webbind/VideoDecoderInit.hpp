#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type VideoDecoderInit
/// [`VideoDecoderInit`](https://developer.mozilla.org/en-US/docs/Web/API/VideoDecoderInit)
class VideoDecoderInit : public emlite::Val {
  explicit VideoDecoderInit(Handle h) noexcept;
public:
    static VideoDecoderInit take_ownership(Handle h) noexcept;
    explicit VideoDecoderInit(const emlite::Val &val) noexcept;
    VideoDecoderInit() noexcept;
    [[nodiscard]] VideoDecoderInit clone() const noexcept;
    [[nodiscard]] jsbind::Function output() const;
    void output(const jsbind::Function& value);
    [[nodiscard]] jsbind::Function error() const;
    void error(const jsbind::Function& value);
};

} // namespace webbind