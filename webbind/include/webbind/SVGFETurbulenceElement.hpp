#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "SVGElement.hpp"
#include "enums.hpp"

class SVGAnimatedNumber;
class SVGAnimatedInteger;
class SVGAnimatedEnumeration;
class SVGAnimatedLength;
class SVGAnimatedString;


/// The SVGFETurbulenceElement class.
/// [`SVGFETurbulenceElement`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFETurbulenceElement)
class SVGFETurbulenceElement : public SVGElement {
    explicit SVGFETurbulenceElement(Handle h) noexcept;

public:
    explicit SVGFETurbulenceElement(const emlite::Val &val) noexcept;
    static SVGFETurbulenceElement take_ownership(Handle h) noexcept;

    [[nodiscard]] SVGFETurbulenceElement clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// Getter of the `baseFrequencyX` attribute.
    /// [`SVGFETurbulenceElement.baseFrequencyX`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFETurbulenceElement/baseFrequencyX)
    [[nodiscard]] SVGAnimatedNumber baseFrequencyX() const;
    /// Getter of the `baseFrequencyY` attribute.
    /// [`SVGFETurbulenceElement.baseFrequencyY`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFETurbulenceElement/baseFrequencyY)
    [[nodiscard]] SVGAnimatedNumber baseFrequencyY() const;
    /// Getter of the `numOctaves` attribute.
    /// [`SVGFETurbulenceElement.numOctaves`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFETurbulenceElement/numOctaves)
    [[nodiscard]] SVGAnimatedInteger numOctaves() const;
    /// Getter of the `seed` attribute.
    /// [`SVGFETurbulenceElement.seed`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFETurbulenceElement/seed)
    [[nodiscard]] SVGAnimatedNumber seed() const;
    /// Getter of the `stitchTiles` attribute.
    /// [`SVGFETurbulenceElement.stitchTiles`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFETurbulenceElement/stitchTiles)
    [[nodiscard]] SVGAnimatedEnumeration stitchTiles() const;
    /// Getter of the `type` attribute.
    /// [`SVGFETurbulenceElement.type`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFETurbulenceElement/type)
    [[nodiscard]] SVGAnimatedEnumeration type() const;
    /// Getter of the `x` attribute.
    /// [`SVGFETurbulenceElement.x`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFETurbulenceElement/x)
    [[nodiscard]] SVGAnimatedLength x() const;
    /// Getter of the `y` attribute.
    /// [`SVGFETurbulenceElement.y`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFETurbulenceElement/y)
    [[nodiscard]] SVGAnimatedLength y() const;
    /// Getter of the `width` attribute.
    /// [`SVGFETurbulenceElement.width`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFETurbulenceElement/width)
    [[nodiscard]] SVGAnimatedLength width() const;
    /// Getter of the `height` attribute.
    /// [`SVGFETurbulenceElement.height`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFETurbulenceElement/height)
    [[nodiscard]] SVGAnimatedLength height() const;
    /// Getter of the `result` attribute.
    /// [`SVGFETurbulenceElement.result`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFETurbulenceElement/result)
    [[nodiscard]] SVGAnimatedString result() const;
};

