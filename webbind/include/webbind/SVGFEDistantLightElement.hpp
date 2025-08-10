#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "SVGElement.hpp"

namespace webbind {

class SVGAnimatedNumber;

/// Interface SVGFEDistantLightElement
/// [`SVGFEDistantLightElement`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFEDistantLightElement)
class SVGFEDistantLightElement : public SVGElement {
    explicit SVGFEDistantLightElement(Handle h) noexcept;
public:
    explicit SVGFEDistantLightElement(const emlite::Val &val) noexcept;
    static SVGFEDistantLightElement take_ownership(Handle h) noexcept;
    [[nodiscard]] SVGFEDistantLightElement clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// [`SVGFEDistantLightElement.azimuth`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFEDistantLightElement/azimuth)
    /// [`SVGFEDistantLightElement.azimuth`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFEDistantLightElement/azimuth)
    [[nodiscard]] SVGAnimatedNumber azimuth() const;
    /// [`SVGFEDistantLightElement.elevation`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFEDistantLightElement/elevation)
    /// [`SVGFEDistantLightElement.elevation`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFEDistantLightElement/elevation)
    [[nodiscard]] SVGAnimatedNumber elevation() const;
};

} // namespace webbind