#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "SVGElement.hpp"

namespace webbind {

class SVGAnimatedString;
class SVGAnimatedEnumeration;
class SVGAnimatedNumber;
class SVGAnimatedLength;

/// Interface SVGFECompositeElement
/// [`SVGFECompositeElement`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFECompositeElement)
class SVGFECompositeElement : public SVGElement {
    explicit SVGFECompositeElement(Handle h) noexcept;
public:
    explicit SVGFECompositeElement(const emlite::Val &val) noexcept;
    static SVGFECompositeElement take_ownership(Handle h) noexcept;
    [[nodiscard]] SVGFECompositeElement clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// [`SVGFECompositeElement.in1`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFECompositeElement/in1)
    /// [`SVGFECompositeElement.in1`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFECompositeElement/in1)
    [[nodiscard]] SVGAnimatedString in1() const;
    /// [`SVGFECompositeElement.in2`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFECompositeElement/in2)
    /// [`SVGFECompositeElement.in2`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFECompositeElement/in2)
    [[nodiscard]] SVGAnimatedString in2() const;
    /// [`SVGFECompositeElement.operator`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFECompositeElement/operator)
    /// [`SVGFECompositeElement.operator`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFECompositeElement/operator)
    [[nodiscard]] SVGAnimatedEnumeration operator_() const;
    /// [`SVGFECompositeElement.k1`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFECompositeElement/k1)
    /// [`SVGFECompositeElement.k1`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFECompositeElement/k1)
    [[nodiscard]] SVGAnimatedNumber k1() const;
    /// [`SVGFECompositeElement.k2`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFECompositeElement/k2)
    /// [`SVGFECompositeElement.k2`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFECompositeElement/k2)
    [[nodiscard]] SVGAnimatedNumber k2() const;
    /// [`SVGFECompositeElement.k3`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFECompositeElement/k3)
    /// [`SVGFECompositeElement.k3`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFECompositeElement/k3)
    [[nodiscard]] SVGAnimatedNumber k3() const;
    /// [`SVGFECompositeElement.k4`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFECompositeElement/k4)
    /// [`SVGFECompositeElement.k4`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFECompositeElement/k4)
    [[nodiscard]] SVGAnimatedNumber k4() const;
    /// [`SVGFECompositeElement.x`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFECompositeElement/x)
    /// [`SVGFECompositeElement.x`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFECompositeElement/x)
    [[nodiscard]] SVGAnimatedLength x() const;
    /// [`SVGFECompositeElement.y`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFECompositeElement/y)
    /// [`SVGFECompositeElement.y`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFECompositeElement/y)
    [[nodiscard]] SVGAnimatedLength y() const;
    /// [`SVGFECompositeElement.width`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFECompositeElement/width)
    /// [`SVGFECompositeElement.width`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFECompositeElement/width)
    [[nodiscard]] SVGAnimatedLength width() const;
    /// [`SVGFECompositeElement.height`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFECompositeElement/height)
    /// [`SVGFECompositeElement.height`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFECompositeElement/height)
    [[nodiscard]] SVGAnimatedLength height() const;
    /// [`SVGFECompositeElement.result`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFECompositeElement/result)
    /// [`SVGFECompositeElement.result`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFECompositeElement/result)
    [[nodiscard]] SVGAnimatedString result() const;
};

} // namespace webbind