#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "SVGElement.hpp"

namespace webbind {

class SVGAnimatedString;
class SVGAnimatedNumber;
class SVGAnimatedLength;

/// Interface SVGFEDropShadowElement
/// [`SVGFEDropShadowElement`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFEDropShadowElement)
class SVGFEDropShadowElement : public SVGElement {
    explicit SVGFEDropShadowElement(Handle h) noexcept;
public:
    explicit SVGFEDropShadowElement(const emlite::Val &val) noexcept;
    static SVGFEDropShadowElement take_ownership(Handle h) noexcept;
    [[nodiscard]] SVGFEDropShadowElement clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// [`SVGFEDropShadowElement.in1`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFEDropShadowElement/in1)
    /// [`SVGFEDropShadowElement.in1`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFEDropShadowElement/in1)
    [[nodiscard]] SVGAnimatedString in1() const;
    /// [`SVGFEDropShadowElement.dx`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFEDropShadowElement/dx)
    /// [`SVGFEDropShadowElement.dx`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFEDropShadowElement/dx)
    [[nodiscard]] SVGAnimatedNumber dx() const;
    /// [`SVGFEDropShadowElement.dy`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFEDropShadowElement/dy)
    /// [`SVGFEDropShadowElement.dy`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFEDropShadowElement/dy)
    [[nodiscard]] SVGAnimatedNumber dy() const;
    /// [`SVGFEDropShadowElement.stdDeviationX`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFEDropShadowElement/stdDeviationX)
    /// [`SVGFEDropShadowElement.stdDeviationX`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFEDropShadowElement/stdDeviationX)
    [[nodiscard]] SVGAnimatedNumber stdDeviationX() const;
    /// [`SVGFEDropShadowElement.stdDeviationY`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFEDropShadowElement/stdDeviationY)
    /// [`SVGFEDropShadowElement.stdDeviationY`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFEDropShadowElement/stdDeviationY)
    [[nodiscard]] SVGAnimatedNumber stdDeviationY() const;
    /// The setStdDeviation method.
    /// [`SVGFEDropShadowElement.setStdDeviation`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFEDropShadowElement/setStdDeviation)
    jsbind::Undefined setStdDeviation(float stdDeviationX, float stdDeviationY);
    /// [`SVGFEDropShadowElement.x`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFEDropShadowElement/x)
    /// [`SVGFEDropShadowElement.x`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFEDropShadowElement/x)
    [[nodiscard]] SVGAnimatedLength x() const;
    /// [`SVGFEDropShadowElement.y`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFEDropShadowElement/y)
    /// [`SVGFEDropShadowElement.y`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFEDropShadowElement/y)
    [[nodiscard]] SVGAnimatedLength y() const;
    /// [`SVGFEDropShadowElement.width`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFEDropShadowElement/width)
    /// [`SVGFEDropShadowElement.width`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFEDropShadowElement/width)
    [[nodiscard]] SVGAnimatedLength width() const;
    /// [`SVGFEDropShadowElement.height`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFEDropShadowElement/height)
    /// [`SVGFEDropShadowElement.height`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFEDropShadowElement/height)
    [[nodiscard]] SVGAnimatedLength height() const;
    /// [`SVGFEDropShadowElement.result`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFEDropShadowElement/result)
    /// [`SVGFEDropShadowElement.result`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFEDropShadowElement/result)
    [[nodiscard]] SVGAnimatedString result() const;
};

} // namespace webbind