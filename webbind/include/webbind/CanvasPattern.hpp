#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "SVGSVGElement.hpp"
#include "enums.hpp"


/// The CanvasPattern class.
/// [`CanvasPattern`](https://developer.mozilla.org/en-US/docs/Web/API/CanvasPattern)
class CanvasPattern : public emlite::Val {
    explicit CanvasPattern(Handle h) noexcept;

public:
    explicit CanvasPattern(const emlite::Val &val) noexcept;
    static CanvasPattern take_ownership(Handle h) noexcept;

    [[nodiscard]] CanvasPattern clone() const noexcept;
    /// The setTransform method.
    /// [`CanvasPattern.setTransform`](https://developer.mozilla.org/en-US/docs/Web/API/CanvasPattern/setTransform)
    jsbind::Undefined setTransform();
    /// The setTransform method.
    /// [`CanvasPattern.setTransform`](https://developer.mozilla.org/en-US/docs/Web/API/CanvasPattern/setTransform)
    jsbind::Undefined setTransform(const DOMMatrix2DInit& transform);
};

