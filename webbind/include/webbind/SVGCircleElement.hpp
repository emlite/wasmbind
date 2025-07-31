#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "SVGGeometryElement.hpp"
#include "enums.hpp"

class SVGAnimatedLength;


/// The SVGCircleElement class.
/// [`SVGCircleElement`](https://developer.mozilla.org/en-US/docs/Web/API/SVGCircleElement)
class SVGCircleElement : public SVGGeometryElement {
    explicit SVGCircleElement(Handle h) noexcept;

public:
    explicit SVGCircleElement(const emlite::Val &val) noexcept;
    static SVGCircleElement take_ownership(Handle h) noexcept;

    [[nodiscard]] SVGCircleElement clone() const noexcept;
    /// Getter of the `cx` attribute.
    /// [`SVGCircleElement.cx`](https://developer.mozilla.org/en-US/docs/Web/API/SVGCircleElement/cx)
    [[nodiscard]] SVGAnimatedLength cx() const;
    /// Getter of the `cy` attribute.
    /// [`SVGCircleElement.cy`](https://developer.mozilla.org/en-US/docs/Web/API/SVGCircleElement/cy)
    [[nodiscard]] SVGAnimatedLength cy() const;
    /// Getter of the `r` attribute.
    /// [`SVGCircleElement.r`](https://developer.mozilla.org/en-US/docs/Web/API/SVGCircleElement/r)
    [[nodiscard]] SVGAnimatedLength r() const;
};

