#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "SVGElement.hpp"

namespace webbind {

class SVGAnimatedString;
class SVGAnimatedNumber;
class SVGAnimatedEnumeration;
class SVGAnimatedLength;

/// Interface SVGFEGaussianBlurElement
/// [`SVGFEGaussianBlurElement`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFEGaussianBlurElement)
class SVGFEGaussianBlurElement : public SVGElement {
    explicit SVGFEGaussianBlurElement(Handle h) noexcept;
public:
    explicit SVGFEGaussianBlurElement(const emlite::Val &val) noexcept;
    static SVGFEGaussianBlurElement take_ownership(Handle h) noexcept;
    [[nodiscard]] SVGFEGaussianBlurElement clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// [`SVGFEGaussianBlurElement.in1`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFEGaussianBlurElement/in1)
    /// [`SVGFEGaussianBlurElement.in1`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFEGaussianBlurElement/in1)
    [[nodiscard]] SVGAnimatedString in1() const;
    /// [`SVGFEGaussianBlurElement.stdDeviationX`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFEGaussianBlurElement/stdDeviationX)
    /// [`SVGFEGaussianBlurElement.stdDeviationX`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFEGaussianBlurElement/stdDeviationX)
    [[nodiscard]] SVGAnimatedNumber stdDeviationX() const;
    /// [`SVGFEGaussianBlurElement.stdDeviationY`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFEGaussianBlurElement/stdDeviationY)
    /// [`SVGFEGaussianBlurElement.stdDeviationY`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFEGaussianBlurElement/stdDeviationY)
    [[nodiscard]] SVGAnimatedNumber stdDeviationY() const;
    /// [`SVGFEGaussianBlurElement.edgeMode`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFEGaussianBlurElement/edgeMode)
    /// [`SVGFEGaussianBlurElement.edgeMode`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFEGaussianBlurElement/edgeMode)
    [[nodiscard]] SVGAnimatedEnumeration edgeMode() const;
    /// The setStdDeviation method.
    /// [`SVGFEGaussianBlurElement.setStdDeviation`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFEGaussianBlurElement/setStdDeviation)
    jsbind::Undefined setStdDeviation(float stdDeviationX, float stdDeviationY);
    /// [`SVGFEGaussianBlurElement.x`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFEGaussianBlurElement/x)
    /// [`SVGFEGaussianBlurElement.x`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFEGaussianBlurElement/x)
    [[nodiscard]] SVGAnimatedLength x() const;
    /// [`SVGFEGaussianBlurElement.y`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFEGaussianBlurElement/y)
    /// [`SVGFEGaussianBlurElement.y`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFEGaussianBlurElement/y)
    [[nodiscard]] SVGAnimatedLength y() const;
    /// [`SVGFEGaussianBlurElement.width`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFEGaussianBlurElement/width)
    /// [`SVGFEGaussianBlurElement.width`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFEGaussianBlurElement/width)
    [[nodiscard]] SVGAnimatedLength width() const;
    /// [`SVGFEGaussianBlurElement.height`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFEGaussianBlurElement/height)
    /// [`SVGFEGaussianBlurElement.height`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFEGaussianBlurElement/height)
    [[nodiscard]] SVGAnimatedLength height() const;
    /// [`SVGFEGaussianBlurElement.result`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFEGaussianBlurElement/result)
    /// [`SVGFEGaussianBlurElement.result`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFEGaussianBlurElement/result)
    [[nodiscard]] SVGAnimatedString result() const;
};

} // namespace webbind