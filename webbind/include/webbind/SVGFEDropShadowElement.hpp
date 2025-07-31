#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "SVGElement.hpp"
#include "enums.hpp"

class SVGAnimatedString;
class SVGAnimatedNumber;
class SVGAnimatedLength;


/// The SVGFEDropShadowElement class.
/// [`SVGFEDropShadowElement`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFEDropShadowElement)
class SVGFEDropShadowElement : public SVGElement {
    explicit SVGFEDropShadowElement(Handle h) noexcept;

public:
    explicit SVGFEDropShadowElement(const emlite::Val &val) noexcept;
    static SVGFEDropShadowElement take_ownership(Handle h) noexcept;

    [[nodiscard]] SVGFEDropShadowElement clone() const noexcept;
    /// Getter of the `in1` attribute.
    /// [`SVGFEDropShadowElement.in1`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFEDropShadowElement/in1)
    [[nodiscard]] SVGAnimatedString in1() const;
    /// Getter of the `dx` attribute.
    /// [`SVGFEDropShadowElement.dx`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFEDropShadowElement/dx)
    [[nodiscard]] SVGAnimatedNumber dx() const;
    /// Getter of the `dy` attribute.
    /// [`SVGFEDropShadowElement.dy`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFEDropShadowElement/dy)
    [[nodiscard]] SVGAnimatedNumber dy() const;
    /// Getter of the `stdDeviationX` attribute.
    /// [`SVGFEDropShadowElement.stdDeviationX`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFEDropShadowElement/stdDeviationX)
    [[nodiscard]] SVGAnimatedNumber stdDeviationX() const;
    /// Getter of the `stdDeviationY` attribute.
    /// [`SVGFEDropShadowElement.stdDeviationY`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFEDropShadowElement/stdDeviationY)
    [[nodiscard]] SVGAnimatedNumber stdDeviationY() const;
    /// The setStdDeviation method.
    /// [`SVGFEDropShadowElement.setStdDeviation`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFEDropShadowElement/setStdDeviation)
    jsbind::Undefined setStdDeviation(float stdDeviationX, float stdDeviationY);
    /// Getter of the `x` attribute.
    /// [`SVGFEDropShadowElement.x`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFEDropShadowElement/x)
    [[nodiscard]] SVGAnimatedLength x() const;
    /// Getter of the `y` attribute.
    /// [`SVGFEDropShadowElement.y`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFEDropShadowElement/y)
    [[nodiscard]] SVGAnimatedLength y() const;
    /// Getter of the `width` attribute.
    /// [`SVGFEDropShadowElement.width`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFEDropShadowElement/width)
    [[nodiscard]] SVGAnimatedLength width() const;
    /// Getter of the `height` attribute.
    /// [`SVGFEDropShadowElement.height`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFEDropShadowElement/height)
    [[nodiscard]] SVGAnimatedLength height() const;
    /// Getter of the `result` attribute.
    /// [`SVGFEDropShadowElement.result`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFEDropShadowElement/result)
    [[nodiscard]] SVGAnimatedString result() const;
};

