#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "SVGElement.hpp"
#include "enums.hpp"

class SVGAnimatedString;
class SVGAnimatedNumber;
class SVGAnimatedLength;


/// The SVGFEDiffuseLightingElement class.
/// [`SVGFEDiffuseLightingElement`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFEDiffuseLightingElement)
class SVGFEDiffuseLightingElement : public SVGElement {
    explicit SVGFEDiffuseLightingElement(Handle h) noexcept;

public:
    explicit SVGFEDiffuseLightingElement(const emlite::Val &val) noexcept;
    static SVGFEDiffuseLightingElement take_ownership(Handle h) noexcept;

    [[nodiscard]] SVGFEDiffuseLightingElement clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// Getter of the `in1` attribute.
    /// [`SVGFEDiffuseLightingElement.in1`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFEDiffuseLightingElement/in1)
    [[nodiscard]] SVGAnimatedString in1() const;
    /// Getter of the `surfaceScale` attribute.
    /// [`SVGFEDiffuseLightingElement.surfaceScale`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFEDiffuseLightingElement/surfaceScale)
    [[nodiscard]] SVGAnimatedNumber surfaceScale() const;
    /// Getter of the `diffuseConstant` attribute.
    /// [`SVGFEDiffuseLightingElement.diffuseConstant`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFEDiffuseLightingElement/diffuseConstant)
    [[nodiscard]] SVGAnimatedNumber diffuseConstant() const;
    /// Getter of the `kernelUnitLengthX` attribute.
    /// [`SVGFEDiffuseLightingElement.kernelUnitLengthX`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFEDiffuseLightingElement/kernelUnitLengthX)
    [[nodiscard]] SVGAnimatedNumber kernelUnitLengthX() const;
    /// Getter of the `kernelUnitLengthY` attribute.
    /// [`SVGFEDiffuseLightingElement.kernelUnitLengthY`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFEDiffuseLightingElement/kernelUnitLengthY)
    [[nodiscard]] SVGAnimatedNumber kernelUnitLengthY() const;
    /// Getter of the `x` attribute.
    /// [`SVGFEDiffuseLightingElement.x`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFEDiffuseLightingElement/x)
    [[nodiscard]] SVGAnimatedLength x() const;
    /// Getter of the `y` attribute.
    /// [`SVGFEDiffuseLightingElement.y`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFEDiffuseLightingElement/y)
    [[nodiscard]] SVGAnimatedLength y() const;
    /// Getter of the `width` attribute.
    /// [`SVGFEDiffuseLightingElement.width`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFEDiffuseLightingElement/width)
    [[nodiscard]] SVGAnimatedLength width() const;
    /// Getter of the `height` attribute.
    /// [`SVGFEDiffuseLightingElement.height`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFEDiffuseLightingElement/height)
    [[nodiscard]] SVGAnimatedLength height() const;
    /// Getter of the `result` attribute.
    /// [`SVGFEDiffuseLightingElement.result`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFEDiffuseLightingElement/result)
    [[nodiscard]] SVGAnimatedString result() const;
};

