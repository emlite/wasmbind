#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "SVGElement.hpp"
#include "enums.hpp"

class SVGAnimatedNumber;


/// The SVGFEPointLightElement class.
/// [`SVGFEPointLightElement`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFEPointLightElement)
class SVGFEPointLightElement : public SVGElement {
    explicit SVGFEPointLightElement(Handle h) noexcept;

public:
    explicit SVGFEPointLightElement(const emlite::Val &val) noexcept;
    static SVGFEPointLightElement take_ownership(Handle h) noexcept;

    [[nodiscard]] SVGFEPointLightElement clone() const noexcept;
    /// Getter of the `x` attribute.
    /// [`SVGFEPointLightElement.x`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFEPointLightElement/x)
    [[nodiscard]] SVGAnimatedNumber x() const;
    /// Getter of the `y` attribute.
    /// [`SVGFEPointLightElement.y`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFEPointLightElement/y)
    [[nodiscard]] SVGAnimatedNumber y() const;
    /// Getter of the `z` attribute.
    /// [`SVGFEPointLightElement.z`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFEPointLightElement/z)
    [[nodiscard]] SVGAnimatedNumber z() const;
};

