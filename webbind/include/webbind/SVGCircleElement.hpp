#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "SVGGeometryElement.hpp"

namespace webbind {

class SVGAnimatedLength;

/// Interface SVGCircleElement
/// [`SVGCircleElement`](https://developer.mozilla.org/en-US/docs/Web/API/SVGCircleElement)
class SVGCircleElement : public SVGGeometryElement {
    explicit SVGCircleElement(Handle h) noexcept;
public:
    explicit SVGCircleElement(const emlite::Val &val) noexcept;
    static SVGCircleElement take_ownership(Handle h) noexcept;
    [[nodiscard]] SVGCircleElement clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// [`SVGCircleElement.cx`](https://developer.mozilla.org/en-US/docs/Web/API/SVGCircleElement/cx)
    /// [`SVGCircleElement.cx`](https://developer.mozilla.org/en-US/docs/Web/API/SVGCircleElement/cx)
    [[nodiscard]] SVGAnimatedLength cx() const;
    /// [`SVGCircleElement.cy`](https://developer.mozilla.org/en-US/docs/Web/API/SVGCircleElement/cy)
    /// [`SVGCircleElement.cy`](https://developer.mozilla.org/en-US/docs/Web/API/SVGCircleElement/cy)
    [[nodiscard]] SVGAnimatedLength cy() const;
    /// [`SVGCircleElement.r`](https://developer.mozilla.org/en-US/docs/Web/API/SVGCircleElement/r)
    /// [`SVGCircleElement.r`](https://developer.mozilla.org/en-US/docs/Web/API/SVGCircleElement/r)
    [[nodiscard]] SVGAnimatedLength r() const;
};

} // namespace webbind