#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "SVGElement.hpp"

namespace webbind {

class SVGAnimatedNumber;

/// Interface SVGFEPointLightElement
/// [`SVGFEPointLightElement`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFEPointLightElement)
class SVGFEPointLightElement : public SVGElement {
    explicit SVGFEPointLightElement(Handle h) noexcept;
public:
    explicit SVGFEPointLightElement(const emlite::Val &val) noexcept;
    static SVGFEPointLightElement take_ownership(Handle h) noexcept;
    [[nodiscard]] SVGFEPointLightElement clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// [`SVGFEPointLightElement.x`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFEPointLightElement/x)
    /// [`SVGFEPointLightElement.x`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFEPointLightElement/x)
    [[nodiscard]] SVGAnimatedNumber x() const;
    /// [`SVGFEPointLightElement.y`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFEPointLightElement/y)
    /// [`SVGFEPointLightElement.y`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFEPointLightElement/y)
    [[nodiscard]] SVGAnimatedNumber y() const;
    /// [`SVGFEPointLightElement.z`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFEPointLightElement/z)
    /// [`SVGFEPointLightElement.z`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFEPointLightElement/z)
    [[nodiscard]] SVGAnimatedNumber z() const;
};

} // namespace webbind