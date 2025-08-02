#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"


/// The PaintSize class.
/// [`PaintSize`](https://developer.mozilla.org/en-US/docs/Web/API/PaintSize)
class PaintSize : public emlite::Val {
    explicit PaintSize(Handle h) noexcept;

public:
    explicit PaintSize(const emlite::Val &val) noexcept;
    static PaintSize take_ownership(Handle h) noexcept;

    [[nodiscard]] PaintSize clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// Getter of the `width` attribute.
    /// [`PaintSize.width`](https://developer.mozilla.org/en-US/docs/Web/API/PaintSize/width)
    [[nodiscard]] double width() const;
    /// Getter of the `height` attribute.
    /// [`PaintSize.height`](https://developer.mozilla.org/en-US/docs/Web/API/PaintSize/height)
    [[nodiscard]] double height() const;
};

