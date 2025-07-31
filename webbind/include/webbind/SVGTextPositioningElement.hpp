#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "SVGTextContentElement.hpp"
#include "enums.hpp"

class SVGAnimatedLengthList;
class SVGAnimatedNumberList;


/// The SVGTextPositioningElement class.
/// [`SVGTextPositioningElement`](https://developer.mozilla.org/en-US/docs/Web/API/SVGTextPositioningElement)
class SVGTextPositioningElement : public SVGTextContentElement {
    explicit SVGTextPositioningElement(Handle h) noexcept;

public:
    explicit SVGTextPositioningElement(const emlite::Val &val) noexcept;
    static SVGTextPositioningElement take_ownership(Handle h) noexcept;

    [[nodiscard]] SVGTextPositioningElement clone() const noexcept;
    /// Getter of the `x` attribute.
    /// [`SVGTextPositioningElement.x`](https://developer.mozilla.org/en-US/docs/Web/API/SVGTextPositioningElement/x)
    [[nodiscard]] SVGAnimatedLengthList x() const;
    /// Getter of the `y` attribute.
    /// [`SVGTextPositioningElement.y`](https://developer.mozilla.org/en-US/docs/Web/API/SVGTextPositioningElement/y)
    [[nodiscard]] SVGAnimatedLengthList y() const;
    /// Getter of the `dx` attribute.
    /// [`SVGTextPositioningElement.dx`](https://developer.mozilla.org/en-US/docs/Web/API/SVGTextPositioningElement/dx)
    [[nodiscard]] SVGAnimatedLengthList dx() const;
    /// Getter of the `dy` attribute.
    /// [`SVGTextPositioningElement.dy`](https://developer.mozilla.org/en-US/docs/Web/API/SVGTextPositioningElement/dy)
    [[nodiscard]] SVGAnimatedLengthList dy() const;
    /// Getter of the `rotate` attribute.
    /// [`SVGTextPositioningElement.rotate`](https://developer.mozilla.org/en-US/docs/Web/API/SVGTextPositioningElement/rotate)
    [[nodiscard]] SVGAnimatedNumberList rotate() const;
};

