#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "SVGElement.hpp"

namespace webbind {

class SVGAnimatedNumber;

/// Interface SVGFESpotLightElement
/// [`SVGFESpotLightElement`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFESpotLightElement)
class SVGFESpotLightElement : public SVGElement {
    explicit SVGFESpotLightElement(Handle h) noexcept;
public:
    explicit SVGFESpotLightElement(const emlite::Val &val) noexcept;
    static SVGFESpotLightElement take_ownership(Handle h) noexcept;
    [[nodiscard]] SVGFESpotLightElement clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// [`SVGFESpotLightElement.x`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFESpotLightElement/x)
    /// [`SVGFESpotLightElement.x`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFESpotLightElement/x)
    [[nodiscard]] SVGAnimatedNumber x() const;
    /// [`SVGFESpotLightElement.y`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFESpotLightElement/y)
    /// [`SVGFESpotLightElement.y`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFESpotLightElement/y)
    [[nodiscard]] SVGAnimatedNumber y() const;
    /// [`SVGFESpotLightElement.z`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFESpotLightElement/z)
    /// [`SVGFESpotLightElement.z`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFESpotLightElement/z)
    [[nodiscard]] SVGAnimatedNumber z() const;
    /// [`SVGFESpotLightElement.pointsAtX`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFESpotLightElement/pointsAtX)
    /// [`SVGFESpotLightElement.pointsAtX`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFESpotLightElement/pointsAtX)
    [[nodiscard]] SVGAnimatedNumber pointsAtX() const;
    /// [`SVGFESpotLightElement.pointsAtY`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFESpotLightElement/pointsAtY)
    /// [`SVGFESpotLightElement.pointsAtY`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFESpotLightElement/pointsAtY)
    [[nodiscard]] SVGAnimatedNumber pointsAtY() const;
    /// [`SVGFESpotLightElement.pointsAtZ`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFESpotLightElement/pointsAtZ)
    /// [`SVGFESpotLightElement.pointsAtZ`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFESpotLightElement/pointsAtZ)
    [[nodiscard]] SVGAnimatedNumber pointsAtZ() const;
    /// [`SVGFESpotLightElement.specularExponent`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFESpotLightElement/specularExponent)
    /// [`SVGFESpotLightElement.specularExponent`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFESpotLightElement/specularExponent)
    [[nodiscard]] SVGAnimatedNumber specularExponent() const;
    /// [`SVGFESpotLightElement.limitingConeAngle`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFESpotLightElement/limitingConeAngle)
    /// [`SVGFESpotLightElement.limitingConeAngle`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFESpotLightElement/limitingConeAngle)
    [[nodiscard]] SVGAnimatedNumber limitingConeAngle() const;
};

} // namespace webbind