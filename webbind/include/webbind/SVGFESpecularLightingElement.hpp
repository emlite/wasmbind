#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "SVGElement.hpp"
#include "enums.hpp"

class SVGAnimatedString;
class SVGAnimatedNumber;
class SVGAnimatedLength;


/// The SVGFESpecularLightingElement class.
/// [`SVGFESpecularLightingElement`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFESpecularLightingElement)
class SVGFESpecularLightingElement : public SVGElement {
    explicit SVGFESpecularLightingElement(Handle h) noexcept;

public:
    explicit SVGFESpecularLightingElement(const emlite::Val &val) noexcept;
    static SVGFESpecularLightingElement take_ownership(Handle h) noexcept;

    [[nodiscard]] SVGFESpecularLightingElement clone() const noexcept;
    /// Getter of the `in1` attribute.
    /// [`SVGFESpecularLightingElement.in1`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFESpecularLightingElement/in1)
    [[nodiscard]] SVGAnimatedString in1() const;
    /// Getter of the `surfaceScale` attribute.
    /// [`SVGFESpecularLightingElement.surfaceScale`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFESpecularLightingElement/surfaceScale)
    [[nodiscard]] SVGAnimatedNumber surfaceScale() const;
    /// Getter of the `specularConstant` attribute.
    /// [`SVGFESpecularLightingElement.specularConstant`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFESpecularLightingElement/specularConstant)
    [[nodiscard]] SVGAnimatedNumber specularConstant() const;
    /// Getter of the `specularExponent` attribute.
    /// [`SVGFESpecularLightingElement.specularExponent`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFESpecularLightingElement/specularExponent)
    [[nodiscard]] SVGAnimatedNumber specularExponent() const;
    /// Getter of the `kernelUnitLengthX` attribute.
    /// [`SVGFESpecularLightingElement.kernelUnitLengthX`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFESpecularLightingElement/kernelUnitLengthX)
    [[nodiscard]] SVGAnimatedNumber kernelUnitLengthX() const;
    /// Getter of the `kernelUnitLengthY` attribute.
    /// [`SVGFESpecularLightingElement.kernelUnitLengthY`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFESpecularLightingElement/kernelUnitLengthY)
    [[nodiscard]] SVGAnimatedNumber kernelUnitLengthY() const;
    /// Getter of the `x` attribute.
    /// [`SVGFESpecularLightingElement.x`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFESpecularLightingElement/x)
    [[nodiscard]] SVGAnimatedLength x() const;
    /// Getter of the `y` attribute.
    /// [`SVGFESpecularLightingElement.y`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFESpecularLightingElement/y)
    [[nodiscard]] SVGAnimatedLength y() const;
    /// Getter of the `width` attribute.
    /// [`SVGFESpecularLightingElement.width`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFESpecularLightingElement/width)
    [[nodiscard]] SVGAnimatedLength width() const;
    /// Getter of the `height` attribute.
    /// [`SVGFESpecularLightingElement.height`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFESpecularLightingElement/height)
    [[nodiscard]] SVGAnimatedLength height() const;
    /// Getter of the `result` attribute.
    /// [`SVGFESpecularLightingElement.result`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFESpecularLightingElement/result)
    [[nodiscard]] SVGAnimatedString result() const;
};

