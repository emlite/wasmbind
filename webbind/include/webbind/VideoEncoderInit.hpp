#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type VideoEncoderInit
class VideoEncoderInit : public emlite::Val {
  explicit VideoEncoderInit(Handle h) noexcept;
public:
    static VideoEncoderInit take_ownership(Handle h) noexcept;
    explicit VideoEncoderInit(const emlite::Val &val) noexcept;
    VideoEncoderInit() noexcept;
    [[nodiscard]] VideoEncoderInit clone() const noexcept;
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