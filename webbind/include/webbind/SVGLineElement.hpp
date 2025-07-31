#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "SVGGeometryElement.hpp"
#include "enums.hpp"

class SVGAnimatedLength;


/// The SVGLineElement class.
/// [`SVGLineElement`](https://developer.mozilla.org/en-US/docs/Web/API/SVGLineElement)
class SVGLineElement : public SVGGeometryElement {
    explicit SVGLineElement(Handle h) noexcept;

public:
    explicit SVGLineElement(const emlite::Val &val) noexcept;
    static SVGLineElement take_ownership(Handle h) noexcept;

    [[nodiscard]] SVGLineElement clone() const noexcept;
    /// Getter of the `x1` attribute.
    /// [`SVGLineElement.x1`](https://developer.mozilla.org/en-US/docs/Web/API/SVGLineElement/x1)
    [[nodiscard]] SVGAnimatedLength x1() const;
    /// Getter of the `y1` attribute.
    /// [`SVGLineElement.y1`](https://developer.mozilla.org/en-US/docs/Web/API/SVGLineElement/y1)
    [[nodiscard]] SVGAnimatedLength y1() const;
    /// Getter of the `x2` attribute.
    /// [`SVGLineElement.x2`](https://developer.mozilla.org/en-US/docs/Web/API/SVGLineElement/x2)
    [[nodiscard]] SVGAnimatedLength x2() const;
    /// Getter of the `y2` attribute.
    /// [`SVGLineElement.y2`](https://developer.mozilla.org/en-US/docs/Web/API/SVGLineElement/y2)
    [[nodiscard]] SVGAnimatedLength y2() const;
};

