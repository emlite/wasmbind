#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "SVGElement.hpp"
#include "enums.hpp"

class SVGAnimatedEnumeration;
class SVGAnimatedLength;


/// The SVGMaskElement class.
/// [`SVGMaskElement`](https://developer.mozilla.org/en-US/docs/Web/API/SVGMaskElement)
class SVGMaskElement : public SVGElement {
    explicit SVGMaskElement(Handle h) noexcept;

public:
    explicit SVGMaskElement(const emlite::Val &val) noexcept;
    static SVGMaskElement take_ownership(Handle h) noexcept;

    [[nodiscard]] SVGMaskElement clone() const noexcept;
    /// Getter of the `maskUnits` attribute.
    /// [`SVGMaskElement.maskUnits`](https://developer.mozilla.org/en-US/docs/Web/API/SVGMaskElement/maskUnits)
    [[nodiscard]] SVGAnimatedEnumeration maskUnits() const;
    /// Getter of the `maskContentUnits` attribute.
    /// [`SVGMaskElement.maskContentUnits`](https://developer.mozilla.org/en-US/docs/Web/API/SVGMaskElement/maskContentUnits)
    [[nodiscard]] SVGAnimatedEnumeration maskContentUnits() const;
    /// Getter of the `x` attribute.
    /// [`SVGMaskElement.x`](https://developer.mozilla.org/en-US/docs/Web/API/SVGMaskElement/x)
    [[nodiscard]] SVGAnimatedLength x() const;
    /// Getter of the `y` attribute.
    /// [`SVGMaskElement.y`](https://developer.mozilla.org/en-US/docs/Web/API/SVGMaskElement/y)
    [[nodiscard]] SVGAnimatedLength y() const;
    /// Getter of the `width` attribute.
    /// [`SVGMaskElement.width`](https://developer.mozilla.org/en-US/docs/Web/API/SVGMaskElement/width)
    [[nodiscard]] SVGAnimatedLength width() const;
    /// Getter of the `height` attribute.
    /// [`SVGMaskElement.height`](https://developer.mozilla.org/en-US/docs/Web/API/SVGMaskElement/height)
    [[nodiscard]] SVGAnimatedLength height() const;
};

