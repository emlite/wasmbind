#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "SVGElement.hpp"

namespace webbind {

class SVGAnimatedString;
class SVGAnimatedNumber;
class SVGAnimatedLength;

/// Interface SVGFEDiffuseLightingElement
/// [`SVGFEDiffuseLightingElement`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFEDiffuseLightingElement)
class SVGFEDiffuseLightingElement : public SVGElement {
    explicit SVGFEDiffuseLightingElement(Handle h) noexcept;
public:
    explicit SVGFEDiffuseLightingElement(const emlite::Val &val) noexcept;
    static SVGFEDiffuseLightingElement take_ownership(Handle h) noexcept;
    [[nodiscard]] SVGFEDiffuseLightingElement clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// [`SVGFEDiffuseLightingElement.in1`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFEDiffuseLightingElement/in1)
    /// [`SVGFEDiffuseLightingElement.in1`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFEDiffuseLightingElement/in1)
    [[nodiscard]] SVGAnimatedString in1() const;
    /// [`SVGFEDiffuseLightingElement.surfaceScale`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFEDiffuseLightingElement/surfaceScale)
    /// [`SVGFEDiffuseLightingElement.surfaceScale`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFEDiffuseLightingElement/surfaceScale)
    [[nodiscard]] SVGAnimatedNumber surfaceScale() const;
    /// [`SVGFEDiffuseLightingElement.diffuseConstant`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFEDiffuseLightingElement/diffuseConstant)
    /// [`SVGFEDiffuseLightingElement.diffuseConstant`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFEDiffuseLightingElement/diffuseConstant)
    [[nodiscard]] SVGAnimatedNumber diffuseConstant() const;
    /// [`SVGFEDiffuseLightingElement.kernelUnitLengthX`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFEDiffuseLightingElement/kernelUnitLengthX)
    /// [`SVGFEDiffuseLightingElement.kernelUnitLengthX`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFEDiffuseLightingElement/kernelUnitLengthX)
    [[nodiscard]] SVGAnimatedNumber kernelUnitLengthX() const;
    /// [`SVGFEDiffuseLightingElement.kernelUnitLengthY`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFEDiffuseLightingElement/kernelUnitLengthY)
    /// [`SVGFEDiffuseLightingElement.kernelUnitLengthY`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFEDiffuseLightingElement/kernelUnitLengthY)
    [[nodiscard]] SVGAnimatedNumber kernelUnitLengthY() const;
    /// [`SVGFEDiffuseLightingElement.x`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFEDiffuseLightingElement/x)
    /// [`SVGFEDiffuseLightingElement.x`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFEDiffuseLightingElement/x)
    [[nodiscard]] SVGAnimatedLength x() const;
    /// [`SVGFEDiffuseLightingElement.y`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFEDiffuseLightingElement/y)
    /// [`SVGFEDiffuseLightingElement.y`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFEDiffuseLightingElement/y)
    [[nodiscard]] SVGAnimatedLength y() const;
    /// [`SVGFEDiffuseLightingElement.width`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFEDiffuseLightingElement/width)
    /// [`SVGFEDiffuseLightingElement.width`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFEDiffuseLightingElement/width)
    [[nodiscard]] SVGAnimatedLength width() const;
    /// [`SVGFEDiffuseLightingElement.height`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFEDiffuseLightingElement/height)
    /// [`SVGFEDiffuseLightingElement.height`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFEDiffuseLightingElement/height)
    [[nodiscard]] SVGAnimatedLength height() const;
    /// [`SVGFEDiffuseLightingElement.result`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFEDiffuseLightingElement/result)
    /// [`SVGFEDiffuseLightingElement.result`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFEDiffuseLightingElement/result)
    [[nodiscard]] SVGAnimatedString result() const;
};

} // namespace webbind