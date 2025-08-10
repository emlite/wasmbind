#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "SVGGradientElement.hpp"

namespace webbind {

class SVGAnimatedLength;

/// Interface SVGRadialGradientElement
/// [`SVGRadialGradientElement`](https://developer.mozilla.org/en-US/docs/Web/API/SVGRadialGradientElement)
class SVGRadialGradientElement : public SVGGradientElement {
    explicit SVGRadialGradientElement(Handle h) noexcept;
public:
    explicit SVGRadialGradientElement(const emlite::Val &val) noexcept;
    static SVGRadialGradientElement take_ownership(Handle h) noexcept;
    [[nodiscard]] SVGRadialGradientElement clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// [`SVGRadialGradientElement.cx`](https://developer.mozilla.org/en-US/docs/Web/API/SVGRadialGradientElement/cx)
    /// [`SVGRadialGradientElement.cx`](https://developer.mozilla.org/en-US/docs/Web/API/SVGRadialGradientElement/cx)
    [[nodiscard]] SVGAnimatedLength cx() const;
    /// [`SVGRadialGradientElement.cy`](https://developer.mozilla.org/en-US/docs/Web/API/SVGRadialGradientElement/cy)
    /// [`SVGRadialGradientElement.cy`](https://developer.mozilla.org/en-US/docs/Web/API/SVGRadialGradientElement/cy)
    [[nodiscard]] SVGAnimatedLength cy() const;
    /// [`SVGRadialGradientElement.r`](https://developer.mozilla.org/en-US/docs/Web/API/SVGRadialGradientElement/r)
    /// [`SVGRadialGradientElement.r`](https://developer.mozilla.org/en-US/docs/Web/API/SVGRadialGradientElement/r)
    [[nodiscard]] SVGAnimatedLength r() const;
    /// [`SVGRadialGradientElement.fx`](https://developer.mozilla.org/en-US/docs/Web/API/SVGRadialGradientElement/fx)
    /// [`SVGRadialGradientElement.fx`](https://developer.mozilla.org/en-US/docs/Web/API/SVGRadialGradientElement/fx)
    [[nodiscard]] SVGAnimatedLength fx() const;
    /// [`SVGRadialGradientElement.fy`](https://developer.mozilla.org/en-US/docs/Web/API/SVGRadialGradientElement/fy)
    /// [`SVGRadialGradientElement.fy`](https://developer.mozilla.org/en-US/docs/Web/API/SVGRadialGradientElement/fy)
    [[nodiscard]] SVGAnimatedLength fy() const;
    /// [`SVGRadialGradientElement.fr`](https://developer.mozilla.org/en-US/docs/Web/API/SVGRadialGradientElement/fr)
    /// [`SVGRadialGradientElement.fr`](https://developer.mozilla.org/en-US/docs/Web/API/SVGRadialGradientElement/fr)
    [[nodiscard]] SVGAnimatedLength fr() const;
};

} // namespace webbind