#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "SVGGeometryElement.hpp"
#include "enums.hpp"

class SVGAnimatedLength;


/// The SVGRectElement class.
/// [`SVGRectElement`](https://developer.mozilla.org/en-US/docs/Web/API/SVGRectElement)
class SVGRectElement : public SVGGeometryElement {
    explicit SVGRectElement(Handle h) noexcept;

public:
    explicit SVGRectElement(const emlite::Val &val) noexcept;
    static SVGRectElement take_ownership(Handle h) noexcept;

    [[nodiscard]] SVGRectElement clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// Getter of the `x` attribute.
    /// [`SVGRectElement.x`](https://developer.mozilla.org/en-US/docs/Web/API/SVGRectElement/x)
    [[nodiscard]] SVGAnimatedLength x() const;
    /// Getter of the `y` attribute.
    /// [`SVGRectElement.y`](https://developer.mozilla.org/en-US/docs/Web/API/SVGRectElement/y)
    [[nodiscard]] SVGAnimatedLength y() const;
    /// Getter of the `width` attribute.
    /// [`SVGRectElement.width`](https://developer.mozilla.org/en-US/docs/Web/API/SVGRectElement/width)
    [[nodiscard]] SVGAnimatedLength width() const;
    /// Getter of the `height` attribute.
    /// [`SVGRectElement.height`](https://developer.mozilla.org/en-US/docs/Web/API/SVGRectElement/height)
    [[nodiscard]] SVGAnimatedLength height() const;
    /// Getter of the `rx` attribute.
    /// [`SVGRectElement.rx`](https://developer.mozilla.org/en-US/docs/Web/API/SVGRectElement/rx)
    [[nodiscard]] SVGAnimatedLength rx() const;
    /// Getter of the `ry` attribute.
    /// [`SVGRectElement.ry`](https://developer.mozilla.org/en-US/docs/Web/API/SVGRectElement/ry)
    [[nodiscard]] SVGAnimatedLength ry() const;
};

