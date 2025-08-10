#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type PaintRenderingContext2DSettings
/// [`PaintRenderingContext2DSettings`](https://developer.mozilla.org/en-US/docs/Web/API/PaintRenderingContext2DSettings)
class PaintRenderingContext2DSettings : public emlite::Val {
  explicit PaintRenderingContext2DSettings(Handle h) noexcept;
public:
    static PaintRenderingContext2DSettings take_ownership(Handle h) noexcept;
    explicit PaintRenderingContext2DSettings(const emlite::Val &val) noexcept;
    PaintRenderingContext2DSettings() noexcept;
    [[nodiscard]] PaintRenderingContext2DSettings clone() const noexcept;
    [[nodiscard]] bool alpha() const;
    void alpha(bool value);
};

} // namespace webbind