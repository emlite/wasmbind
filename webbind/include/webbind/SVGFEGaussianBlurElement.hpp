#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "SVGElement.hpp"
#include "enums.hpp"

class SVGAnimatedString;
class SVGAnimatedNumber;
class SVGAnimatedEnumeration;
class SVGAnimatedLength;


/// The SVGFEGaussianBlurElement class.
/// [`SVGFEGaussianBlurElement`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFEGaussianBlurElement)
class SVGFEGaussianBlurElement : public SVGElement {
    explicit SVGFEGaussianBlurElement(Handle h) noexcept;

public:
    explicit SVGFEGaussianBlurElement(const emlite::Val &val) noexcept;
    static SVGFEGaussianBlurElement take_ownership(Handle h) noexcept;

    [[nodiscard]] SVGFEGaussianBlurElement clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// Getter of the `in1` attribute.
    /// [`SVGFEGaussianBlurElement.in1`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFEGaussianBlurElement/in1)
    [[nodiscard]] SVGAnimatedString in1() const;
    /// Getter of the `stdDeviationX` attribute.
    /// [`SVGFEGaussianBlurElement.stdDeviationX`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFEGaussianBlurElement/stdDeviationX)
    [[nodiscard]] SVGAnimatedNumber stdDeviationX() const;
    /// Getter of the `stdDeviationY` attribute.
    /// [`SVGFEGaussianBlurElement.stdDeviationY`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFEGaussianBlurElement/stdDeviationY)
    [[nodiscard]] SVGAnimatedNumber stdDeviationY() const;
    /// Getter of the `edgeMode` attribute.
    /// [`SVGFEGaussianBlurElement.edgeMode`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFEGaussianBlurElement/edgeMode)
    [[nodiscard]] SVGAnimatedEnumeration edgeMode() const;
    /// The setStdDeviation method.
    /// [`SVGFEGaussianBlurElement.setStdDeviation`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFEGaussianBlurElement/setStdDeviation)
    jsbind::Undefined setStdDeviation(float stdDeviationX, float stdDeviationY);
    /// Getter of the `x` attribute.
    /// [`SVGFEGaussianBlurElement.x`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFEGaussianBlurElement/x)
    [[nodiscard]] SVGAnimatedLength x() const;
    /// Getter of the `y` attribute.
    /// [`SVGFEGaussianBlurElement.y`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFEGaussianBlurElement/y)
    [[nodiscard]] SVGAnimatedLength y() const;
    /// Getter of the `width` attribute.
    /// [`SVGFEGaussianBlurElement.width`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFEGaussianBlurElement/width)
    [[nodiscard]] SVGAnimatedLength width() const;
    /// Getter of the `height` attribute.
    /// [`SVGFEGaussianBlurElement.height`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFEGaussianBlurElement/height)
    [[nodiscard]] SVGAnimatedLength height() const;
    /// Getter of the `result` attribute.
    /// [`SVGFEGaussianBlurElement.result`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFEGaussianBlurElement/result)
    [[nodiscard]] SVGAnimatedString result() const;
};

