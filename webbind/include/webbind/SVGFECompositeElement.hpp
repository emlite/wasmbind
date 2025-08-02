#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "SVGElement.hpp"
#include "enums.hpp"

class SVGAnimatedString;
class SVGAnimatedEnumeration;
class SVGAnimatedNumber;
class SVGAnimatedLength;


/// The SVGFECompositeElement class.
/// [`SVGFECompositeElement`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFECompositeElement)
class SVGFECompositeElement : public SVGElement {
    explicit SVGFECompositeElement(Handle h) noexcept;

public:
    explicit SVGFECompositeElement(const emlite::Val &val) noexcept;
    static SVGFECompositeElement take_ownership(Handle h) noexcept;

    [[nodiscard]] SVGFECompositeElement clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// Getter of the `in1` attribute.
    /// [`SVGFECompositeElement.in1`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFECompositeElement/in1)
    [[nodiscard]] SVGAnimatedString in1() const;
    /// Getter of the `in2` attribute.
    /// [`SVGFECompositeElement.in2`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFECompositeElement/in2)
    [[nodiscard]] SVGAnimatedString in2() const;
    /// Getter of the `operator` attribute.
    /// [`SVGFECompositeElement.operator`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFECompositeElement/operator)
    [[nodiscard]] SVGAnimatedEnumeration operator_() const;
    /// Getter of the `k1` attribute.
    /// [`SVGFECompositeElement.k1`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFECompositeElement/k1)
    [[nodiscard]] SVGAnimatedNumber k1() const;
    /// Getter of the `k2` attribute.
    /// [`SVGFECompositeElement.k2`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFECompositeElement/k2)
    [[nodiscard]] SVGAnimatedNumber k2() const;
    /// Getter of the `k3` attribute.
    /// [`SVGFECompositeElement.k3`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFECompositeElement/k3)
    [[nodiscard]] SVGAnimatedNumber k3() const;
    /// Getter of the `k4` attribute.
    /// [`SVGFECompositeElement.k4`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFECompositeElement/k4)
    [[nodiscard]] SVGAnimatedNumber k4() const;
    /// Getter of the `x` attribute.
    /// [`SVGFECompositeElement.x`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFECompositeElement/x)
    [[nodiscard]] SVGAnimatedLength x() const;
    /// Getter of the `y` attribute.
    /// [`SVGFECompositeElement.y`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFECompositeElement/y)
    [[nodiscard]] SVGAnimatedLength y() const;
    /// Getter of the `width` attribute.
    /// [`SVGFECompositeElement.width`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFECompositeElement/width)
    [[nodiscard]] SVGAnimatedLength width() const;
    /// Getter of the `height` attribute.
    /// [`SVGFECompositeElement.height`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFECompositeElement/height)
    [[nodiscard]] SVGAnimatedLength height() const;
    /// Getter of the `result` attribute.
    /// [`SVGFECompositeElement.result`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFECompositeElement/result)
    [[nodiscard]] SVGAnimatedString result() const;
};

