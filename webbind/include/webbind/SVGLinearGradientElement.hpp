#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "SVGGradientElement.hpp"

namespace webbind {

class SVGAnimatedLength;

/// Interface SVGLinearGradientElement
/// [`SVGLinearGradientElement`](https://developer.mozilla.org/en-US/docs/Web/API/SVGLinearGradientElement)
class SVGLinearGradientElement : public SVGGradientElement {
    explicit SVGLinearGradientElement(Handle h) noexcept;
public:
    explicit SVGLinearGradientElement(const emlite::Val &val) noexcept;
    static SVGLinearGradientElement take_ownership(Handle h) noexcept;
    [[nodiscard]] SVGLinearGradientElement clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// Getter of the `x1` attribute.
    /// [`SVGLinearGradientElement.x1`](https://developer.mozilla.org/en-US/docs/Web/API/SVGLinearGradientElement/x1)
    [[nodiscard]] SVGAnimatedLength x1() const;
    /// Getter of the `y1` attribute.
    /// [`SVGLinearGradientElement.y1`](https://developer.mozilla.org/en-US/docs/Web/API/SVGLinearGradientElement/y1)
    [[nodiscard]] SVGAnimatedLength y1() const;
    /// Getter of the `x2` attribute.
    /// [`SVGLinearGradientElement.x2`](https://developer.mozilla.org/en-US/docs/Web/API/SVGLinearGradientElement/x2)
    [[nodiscard]] SVGAnimatedLength x2() const;
    /// Getter of the `y2` attribute.
    /// [`SVGLinearGradientElement.y2`](https://developer.mozilla.org/en-US/docs/Web/API/SVGLinearGradientElement/y2)
    [[nodiscard]] SVGAnimatedLength y2() const;
};

} // namespace webbind