#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "SVGGeometryElement.hpp"

namespace webbind {

class SVGAnimatedLength;

/// Interface SVGEllipseElement
/// [`SVGEllipseElement`](https://developer.mozilla.org/en-US/docs/Web/API/SVGEllipseElement)
class SVGEllipseElement : public SVGGeometryElement {
    explicit SVGEllipseElement(Handle h) noexcept;
public:
    explicit SVGEllipseElement(const emlite::Val &val) noexcept;
    static SVGEllipseElement take_ownership(Handle h) noexcept;
    [[nodiscard]] SVGEllipseElement clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// [`SVGEllipseElement.cx`](https://developer.mozilla.org/en-US/docs/Web/API/SVGEllipseElement/cx)
    /// [`SVGEllipseElement.cx`](https://developer.mozilla.org/en-US/docs/Web/API/SVGEllipseElement/cx)
    [[nodiscard]] SVGAnimatedLength cx() const;
    /// [`SVGEllipseElement.cy`](https://developer.mozilla.org/en-US/docs/Web/API/SVGEllipseElement/cy)
    /// [`SVGEllipseElement.cy`](https://developer.mozilla.org/en-US/docs/Web/API/SVGEllipseElement/cy)
    [[nodiscard]] SVGAnimatedLength cy() const;
    /// [`SVGEllipseElement.rx`](https://developer.mozilla.org/en-US/docs/Web/API/SVGEllipseElement/rx)
    /// [`SVGEllipseElement.rx`](https://developer.mozilla.org/en-US/docs/Web/API/SVGEllipseElement/rx)
    [[nodiscard]] SVGAnimatedLength rx() const;
    /// [`SVGEllipseElement.ry`](https://developer.mozilla.org/en-US/docs/Web/API/SVGEllipseElement/ry)
    /// [`SVGEllipseElement.ry`](https://developer.mozilla.org/en-US/docs/Web/API/SVGEllipseElement/ry)
    [[nodiscard]] SVGAnimatedLength ry() const;
};

} // namespace webbind