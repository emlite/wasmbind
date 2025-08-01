#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "SVGElement.hpp"
#include "enums.hpp"

class SVGAnimatedNumber;


/// The SVGFEDistantLightElement class.
/// [`SVGFEDistantLightElement`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFEDistantLightElement)
class SVGFEDistantLightElement : public SVGElement {
    explicit SVGFEDistantLightElement(Handle h) noexcept;

public:
    explicit SVGFEDistantLightElement(const emlite::Val &val) noexcept;
    static SVGFEDistantLightElement take_ownership(Handle h) noexcept;

    [[nodiscard]] SVGFEDistantLightElement clone() const noexcept;
    /// Getter of the `azimuth` attribute.
    /// [`SVGFEDistantLightElement.azimuth`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFEDistantLightElement/azimuth)
    [[nodiscard]] SVGAnimatedNumber azimuth() const;
    /// Getter of the `elevation` attribute.
    /// [`SVGFEDistantLightElement.elevation`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFEDistantLightElement/elevation)
    [[nodiscard]] SVGAnimatedNumber elevation() const;
};

