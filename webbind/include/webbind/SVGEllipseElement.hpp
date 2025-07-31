#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "SVGGeometryElement.hpp"
#include "enums.hpp"

class SVGAnimatedLength;


/// The SVGEllipseElement class.
/// [`SVGEllipseElement`](https://developer.mozilla.org/en-US/docs/Web/API/SVGEllipseElement)
class SVGEllipseElement : public SVGGeometryElement {
    explicit SVGEllipseElement(Handle h) noexcept;

public:
    explicit SVGEllipseElement(const emlite::Val &val) noexcept;
    static SVGEllipseElement take_ownership(Handle h) noexcept;

    [[nodiscard]] SVGEllipseElement clone() const noexcept;
    /// Getter of the `cx` attribute.
    /// [`SVGEllipseElement.cx`](https://developer.mozilla.org/en-US/docs/Web/API/SVGEllipseElement/cx)
    [[nodiscard]] SVGAnimatedLength cx() const;
    /// Getter of the `cy` attribute.
    /// [`SVGEllipseElement.cy`](https://developer.mozilla.org/en-US/docs/Web/API/SVGEllipseElement/cy)
    [[nodiscard]] SVGAnimatedLength cy() const;
    /// Getter of the `rx` attribute.
    /// [`SVGEllipseElement.rx`](https://developer.mozilla.org/en-US/docs/Web/API/SVGEllipseElement/rx)
    [[nodiscard]] SVGAnimatedLength rx() const;
    /// Getter of the `ry` attribute.
    /// [`SVGEllipseElement.ry`](https://developer.mozilla.org/en-US/docs/Web/API/SVGEllipseElement/ry)
    [[nodiscard]] SVGAnimatedLength ry() const;
};

