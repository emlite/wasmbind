#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "SVGTextContentElement.hpp"

namespace webbind {

class SVGAnimatedLengthList;
class SVGAnimatedNumberList;

/// Interface SVGTextPositioningElement
/// [`SVGTextPositioningElement`](https://developer.mozilla.org/en-US/docs/Web/API/SVGTextPositioningElement)
class SVGTextPositioningElement : public SVGTextContentElement {
    explicit SVGTextPositioningElement(Handle h) noexcept;
public:
    explicit SVGTextPositioningElement(const emlite::Val &val) noexcept;
    static SVGTextPositioningElement take_ownership(Handle h) noexcept;
    [[nodiscard]] SVGTextPositioningElement clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// [`SVGTextPositioningElement.x`](https://developer.mozilla.org/en-US/docs/Web/API/SVGTextPositioningElement/x)
    /// [`SVGTextPositioningElement.x`](https://developer.mozilla.org/en-US/docs/Web/API/SVGTextPositioningElement/x)
    [[nodiscard]] SVGAnimatedLengthList x() const;
    /// [`SVGTextPositioningElement.y`](https://developer.mozilla.org/en-US/docs/Web/API/SVGTextPositioningElement/y)
    /// [`SVGTextPositioningElement.y`](https://developer.mozilla.org/en-US/docs/Web/API/SVGTextPositioningElement/y)
    [[nodiscard]] SVGAnimatedLengthList y() const;
    /// [`SVGTextPositioningElement.dx`](https://developer.mozilla.org/en-US/docs/Web/API/SVGTextPositioningElement/dx)
    /// [`SVGTextPositioningElement.dx`](https://developer.mozilla.org/en-US/docs/Web/API/SVGTextPositioningElement/dx)
    [[nodiscard]] SVGAnimatedLengthList dx() const;
    /// [`SVGTextPositioningElement.dy`](https://developer.mozilla.org/en-US/docs/Web/API/SVGTextPositioningElement/dy)
    /// [`SVGTextPositioningElement.dy`](https://developer.mozilla.org/en-US/docs/Web/API/SVGTextPositioningElement/dy)
    [[nodiscard]] SVGAnimatedLengthList dy() const;
    /// [`SVGTextPositioningElement.rotate`](https://developer.mozilla.org/en-US/docs/Web/API/SVGTextPositioningElement/rotate)
    /// [`SVGTextPositioningElement.rotate`](https://developer.mozilla.org/en-US/docs/Web/API/SVGTextPositioningElement/rotate)
    [[nodiscard]] SVGAnimatedNumberList rotate() const;
};

} // namespace webbind