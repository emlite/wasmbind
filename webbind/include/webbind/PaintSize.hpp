#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Interface PaintSize
/// [`PaintSize`](https://developer.mozilla.org/en-US/docs/Web/API/PaintSize)
class PaintSize : public emlite::Val {
    explicit PaintSize(Handle h) noexcept;
public:
    explicit PaintSize(const emlite::Val &val) noexcept;
    static PaintSize take_ownership(Handle h) noexcept;
    [[nodiscard]] PaintSize clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// [`PaintSize.width`](https://developer.mozilla.org/en-US/docs/Web/API/PaintSize/width)
    /// [`PaintSize.width`](https://developer.mozilla.org/en-US/docs/Web/API/PaintSize/width)
    [[nodiscard]] double width() const;
    /// [`PaintSize.height`](https://developer.mozilla.org/en-US/docs/Web/API/PaintSize/height)
    /// [`PaintSize.height`](https://developer.mozilla.org/en-US/docs/Web/API/PaintSize/height)
    [[nodiscard]] double height() const;
};

} // namespace webbind