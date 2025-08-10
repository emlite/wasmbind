#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "SVGGeometryElement.hpp"

namespace webbind {

class SVGAnimatedLength;

/// Interface SVGLineElement
/// [`SVGLineElement`](https://developer.mozilla.org/en-US/docs/Web/API/SVGLineElement)
class SVGLineElement : public SVGGeometryElement {
    explicit SVGLineElement(Handle h) noexcept;
public:
    explicit SVGLineElement(const emlite::Val &val) noexcept;
    static SVGLineElement take_ownership(Handle h) noexcept;
    [[nodiscard]] SVGLineElement clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// [`SVGLineElement.x1`](https://developer.mozilla.org/en-US/docs/Web/API/SVGLineElement/x1)
    /// [`SVGLineElement.x1`](https://developer.mozilla.org/en-US/docs/Web/API/SVGLineElement/x1)
    [[nodiscard]] SVGAnimatedLength x1() const;
    /// [`SVGLineElement.y1`](https://developer.mozilla.org/en-US/docs/Web/API/SVGLineElement/y1)
    /// [`SVGLineElement.y1`](https://developer.mozilla.org/en-US/docs/Web/API/SVGLineElement/y1)
    [[nodiscard]] SVGAnimatedLength y1() const;
    /// [`SVGLineElement.x2`](https://developer.mozilla.org/en-US/docs/Web/API/SVGLineElement/x2)
    /// [`SVGLineElement.x2`](https://developer.mozilla.org/en-US/docs/Web/API/SVGLineElement/x2)
    [[nodiscard]] SVGAnimatedLength x2() const;
    /// [`SVGLineElement.y2`](https://developer.mozilla.org/en-US/docs/Web/API/SVGLineElement/y2)
    /// [`SVGLineElement.y2`](https://developer.mozilla.org/en-US/docs/Web/API/SVGLineElement/y2)
    [[nodiscard]] SVGAnimatedLength y2() const;
};

} // namespace webbind