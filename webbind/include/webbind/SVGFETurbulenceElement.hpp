#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "SVGElement.hpp"

namespace webbind {

class SVGAnimatedNumber;
class SVGAnimatedInteger;
class SVGAnimatedEnumeration;
class SVGAnimatedLength;
class SVGAnimatedString;

/// Interface SVGFETurbulenceElement
/// [`SVGFETurbulenceElement`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFETurbulenceElement)
class SVGFETurbulenceElement : public SVGElement {
    explicit SVGFETurbulenceElement(Handle h) noexcept;
public:
    explicit SVGFETurbulenceElement(const emlite::Val &val) noexcept;
    static SVGFETurbulenceElement take_ownership(Handle h) noexcept;
    [[nodiscard]] SVGFETurbulenceElement clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// [`SVGFETurbulenceElement.baseFrequencyX`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFETurbulenceElement/baseFrequencyX)
    /// [`SVGFETurbulenceElement.baseFrequencyX`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFETurbulenceElement/baseFrequencyX)
    [[nodiscard]] SVGAnimatedNumber baseFrequencyX() const;
    /// [`SVGFETurbulenceElement.baseFrequencyY`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFETurbulenceElement/baseFrequencyY)
    /// [`SVGFETurbulenceElement.baseFrequencyY`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFETurbulenceElement/baseFrequencyY)
    [[nodiscard]] SVGAnimatedNumber baseFrequencyY() const;
    /// [`SVGFETurbulenceElement.numOctaves`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFETurbulenceElement/numOctaves)
    /// [`SVGFETurbulenceElement.numOctaves`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFETurbulenceElement/numOctaves)
    [[nodiscard]] SVGAnimatedInteger numOctaves() const;
    /// [`SVGFETurbulenceElement.seed`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFETurbulenceElement/seed)
    /// [`SVGFETurbulenceElement.seed`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFETurbulenceElement/seed)
    [[nodiscard]] SVGAnimatedNumber seed() const;
    /// [`SVGFETurbulenceElement.stitchTiles`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFETurbulenceElement/stitchTiles)
    /// [`SVGFETurbulenceElement.stitchTiles`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFETurbulenceElement/stitchTiles)
    [[nodiscard]] SVGAnimatedEnumeration stitchTiles() const;
    /// [`SVGFETurbulenceElement.type`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFETurbulenceElement/type)
    /// [`SVGFETurbulenceElement.type`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFETurbulenceElement/type)
    [[nodiscard]] SVGAnimatedEnumeration type() const;
    /// [`SVGFETurbulenceElement.x`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFETurbulenceElement/x)
    /// [`SVGFETurbulenceElement.x`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFETurbulenceElement/x)
    [[nodiscard]] SVGAnimatedLength x() const;
    /// [`SVGFETurbulenceElement.y`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFETurbulenceElement/y)
    /// [`SVGFETurbulenceElement.y`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFETurbulenceElement/y)
    [[nodiscard]] SVGAnimatedLength y() const;
    /// [`SVGFETurbulenceElement.width`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFETurbulenceElement/width)
    /// [`SVGFETurbulenceElement.width`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFETurbulenceElement/width)
    [[nodiscard]] SVGAnimatedLength width() const;
    /// [`SVGFETurbulenceElement.height`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFETurbulenceElement/height)
    /// [`SVGFETurbulenceElement.height`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFETurbulenceElement/height)
    [[nodiscard]] SVGAnimatedLength height() const;
    /// [`SVGFETurbulenceElement.result`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFETurbulenceElement/result)
    /// [`SVGFETurbulenceElement.result`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFETurbulenceElement/result)
    [[nodiscard]] SVGAnimatedString result() const;
};

} // namespace webbind