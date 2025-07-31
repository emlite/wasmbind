#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "SVGElement.hpp"
#include "enums.hpp"

class SVGAnimatedNumber;


/// The SVGFESpotLightElement class.
/// [`SVGFESpotLightElement`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFESpotLightElement)
class SVGFESpotLightElement : public SVGElement {
    explicit SVGFESpotLightElement(Handle h) noexcept;

public:
    explicit SVGFESpotLightElement(const emlite::Val &val) noexcept;
    static SVGFESpotLightElement take_ownership(Handle h) noexcept;

    [[nodiscard]] SVGFESpotLightElement clone() const noexcept;
    /// Getter of the `x` attribute.
    /// [`SVGFESpotLightElement.x`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFESpotLightElement/x)
    [[nodiscard]] SVGAnimatedNumber x() const;
    /// Getter of the `y` attribute.
    /// [`SVGFESpotLightElement.y`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFESpotLightElement/y)
    [[nodiscard]] SVGAnimatedNumber y() const;
    /// Getter of the `z` attribute.
    /// [`SVGFESpotLightElement.z`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFESpotLightElement/z)
    [[nodiscard]] SVGAnimatedNumber z() const;
    /// Getter of the `pointsAtX` attribute.
    /// [`SVGFESpotLightElement.pointsAtX`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFESpotLightElement/pointsAtX)
    [[nodiscard]] SVGAnimatedNumber pointsAtX() const;
    /// Getter of the `pointsAtY` attribute.
    /// [`SVGFESpotLightElement.pointsAtY`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFESpotLightElement/pointsAtY)
    [[nodiscard]] SVGAnimatedNumber pointsAtY() const;
    /// Getter of the `pointsAtZ` attribute.
    /// [`SVGFESpotLightElement.pointsAtZ`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFESpotLightElement/pointsAtZ)
    [[nodiscard]] SVGAnimatedNumber pointsAtZ() const;
    /// Getter of the `specularExponent` attribute.
    /// [`SVGFESpotLightElement.specularExponent`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFESpotLightElement/specularExponent)
    [[nodiscard]] SVGAnimatedNumber specularExponent() const;
    /// Getter of the `limitingConeAngle` attribute.
    /// [`SVGFESpotLightElement.limitingConeAngle`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFESpotLightElement/limitingConeAngle)
    [[nodiscard]] SVGAnimatedNumber limitingConeAngle() const;
};

