#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "SVGElement.hpp"

namespace webbind {

class SVGAnimatedString;
class SVGAnimatedNumber;
class SVGAnimatedLength;

/// Interface SVGFESpecularLightingElement
/// [`SVGFESpecularLightingElement`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFESpecularLightingElement)
class SVGFESpecularLightingElement : public SVGElement {
    explicit SVGFESpecularLightingElement(Handle h) noexcept;
public:
    explicit SVGFESpecularLightingElement(const emlite::Val &val) noexcept;
    static SVGFESpecularLightingElement take_ownership(Handle h) noexcept;
    [[nodiscard]] SVGFESpecularLightingElement clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// [`SVGFESpecularLightingElement.in1`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFESpecularLightingElement/in1)
    /// [`SVGFESpecularLightingElement.in1`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFESpecularLightingElement/in1)
    [[nodiscard]] SVGAnimatedString in1() const;
    /// [`SVGFESpecularLightingElement.surfaceScale`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFESpecularLightingElement/surfaceScale)
    /// [`SVGFESpecularLightingElement.surfaceScale`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFESpecularLightingElement/surfaceScale)
    [[nodiscard]] SVGAnimatedNumber surfaceScale() const;
    /// [`SVGFESpecularLightingElement.specularConstant`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFESpecularLightingElement/specularConstant)
    /// [`SVGFESpecularLightingElement.specularConstant`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFESpecularLightingElement/specularConstant)
    [[nodiscard]] SVGAnimatedNumber specularConstant() const;
    /// [`SVGFESpecularLightingElement.specularExponent`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFESpecularLightingElement/specularExponent)
    /// [`SVGFESpecularLightingElement.specularExponent`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFESpecularLightingElement/specularExponent)
    [[nodiscard]] SVGAnimatedNumber specularExponent() const;
    /// [`SVGFESpecularLightingElement.kernelUnitLengthX`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFESpecularLightingElement/kernelUnitLengthX)
    /// [`SVGFESpecularLightingElement.kernelUnitLengthX`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFESpecularLightingElement/kernelUnitLengthX)
    [[nodiscard]] SVGAnimatedNumber kernelUnitLengthX() const;
    /// [`SVGFESpecularLightingElement.kernelUnitLengthY`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFESpecularLightingElement/kernelUnitLengthY)
    /// [`SVGFESpecularLightingElement.kernelUnitLengthY`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFESpecularLightingElement/kernelUnitLengthY)
    [[nodiscard]] SVGAnimatedNumber kernelUnitLengthY() const;
    /// [`SVGFESpecularLightingElement.x`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFESpecularLightingElement/x)
    /// [`SVGFESpecularLightingElement.x`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFESpecularLightingElement/x)
    [[nodiscard]] SVGAnimatedLength x() const;
    /// [`SVGFESpecularLightingElement.y`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFESpecularLightingElement/y)
    /// [`SVGFESpecularLightingElement.y`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFESpecularLightingElement/y)
    [[nodiscard]] SVGAnimatedLength y() const;
    /// [`SVGFESpecularLightingElement.width`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFESpecularLightingElement/width)
    /// [`SVGFESpecularLightingElement.width`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFESpecularLightingElement/width)
    [[nodiscard]] SVGAnimatedLength width() const;
    /// [`SVGFESpecularLightingElement.height`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFESpecularLightingElement/height)
    /// [`SVGFESpecularLightingElement.height`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFESpecularLightingElement/height)
    [[nodiscard]] SVGAnimatedLength height() const;
    /// [`SVGFESpecularLightingElement.result`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFESpecularLightingElement/result)
    /// [`SVGFESpecularLightingElement.result`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFESpecularLightingElement/result)
    [[nodiscard]] SVGAnimatedString result() const;
};

} // namespace webbind