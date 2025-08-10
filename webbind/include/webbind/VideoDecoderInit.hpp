#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type VideoDecoderInit
class VideoDecoderInit : public emlite::Val {
  explicit VideoDecoderInit(Handle h) noexcept;
public:
    static VideoDecoderInit take_ownership(Handle h) noexcept;
    explicit VideoDecoderInit(const emlite::Val &val) noexcept;
    VideoDecoderInit() noexcept;
    [[nodiscard]] VideoDecoderInit clone() const noexcept;
    /// Getter of the `output` attribute.
    [[nodiscard]] jsbind::Function output() const;
    /// Setter of the `output` attribute.
    void output(const jsbind::Function& value);
    /// Getter of the `error` attribute.
    [[nodiscard]] jsbind::Function error() const;
    /// Setter of the `error` attribute.
    void error(const jsbind::Function& value);
};

} // namespace webbind