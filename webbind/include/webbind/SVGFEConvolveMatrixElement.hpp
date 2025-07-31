#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "SVGElement.hpp"
#include "enums.hpp"

class SVGAnimatedString;
class SVGAnimatedInteger;
class SVGAnimatedNumberList;
class SVGAnimatedNumber;
class SVGAnimatedEnumeration;
class SVGAnimatedBoolean;
class SVGAnimatedLength;


/// The SVGFEConvolveMatrixElement class.
/// [`SVGFEConvolveMatrixElement`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFEConvolveMatrixElement)
class SVGFEConvolveMatrixElement : public SVGElement {
    explicit SVGFEConvolveMatrixElement(Handle h) noexcept;

public:
    explicit SVGFEConvolveMatrixElement(const emlite::Val &val) noexcept;
    static SVGFEConvolveMatrixElement take_ownership(Handle h) noexcept;

    [[nodiscard]] SVGFEConvolveMatrixElement clone() const noexcept;
    /// Getter of the `in1` attribute.
    /// [`SVGFEConvolveMatrixElement.in1`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFEConvolveMatrixElement/in1)
    [[nodiscard]] SVGAnimatedString in1() const;
    /// Getter of the `orderX` attribute.
    /// [`SVGFEConvolveMatrixElement.orderX`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFEConvolveMatrixElement/orderX)
    [[nodiscard]] SVGAnimatedInteger orderX() const;
    /// Getter of the `orderY` attribute.
    /// [`SVGFEConvolveMatrixElement.orderY`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFEConvolveMatrixElement/orderY)
    [[nodiscard]] SVGAnimatedInteger orderY() const;
    /// Getter of the `kernelMatrix` attribute.
    /// [`SVGFEConvolveMatrixElement.kernelMatrix`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFEConvolveMatrixElement/kernelMatrix)
    [[nodiscard]] SVGAnimatedNumberList kernelMatrix() const;
    /// Getter of the `divisor` attribute.
    /// [`SVGFEConvolveMatrixElement.divisor`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFEConvolveMatrixElement/divisor)
    [[nodiscard]] SVGAnimatedNumber divisor() const;
    /// Getter of the `bias` attribute.
    /// [`SVGFEConvolveMatrixElement.bias`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFEConvolveMatrixElement/bias)
    [[nodiscard]] SVGAnimatedNumber bias() const;
    /// Getter of the `targetX` attribute.
    /// [`SVGFEConvolveMatrixElement.targetX`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFEConvolveMatrixElement/targetX)
    [[nodiscard]] SVGAnimatedInteger targetX() const;
    /// Getter of the `targetY` attribute.
    /// [`SVGFEConvolveMatrixElement.targetY`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFEConvolveMatrixElement/targetY)
    [[nodiscard]] SVGAnimatedInteger targetY() const;
    /// Getter of the `edgeMode` attribute.
    /// [`SVGFEConvolveMatrixElement.edgeMode`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFEConvolveMatrixElement/edgeMode)
    [[nodiscard]] SVGAnimatedEnumeration edgeMode() const;
    /// Getter of the `kernelUnitLengthX` attribute.
    /// [`SVGFEConvolveMatrixElement.kernelUnitLengthX`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFEConvolveMatrixElement/kernelUnitLengthX)
    [[nodiscard]] SVGAnimatedNumber kernelUnitLengthX() const;
    /// Getter of the `kernelUnitLengthY` attribute.
    /// [`SVGFEConvolveMatrixElement.kernelUnitLengthY`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFEConvolveMatrixElement/kernelUnitLengthY)
    [[nodiscard]] SVGAnimatedNumber kernelUnitLengthY() const;
    /// Getter of the `preserveAlpha` attribute.
    /// [`SVGFEConvolveMatrixElement.preserveAlpha`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFEConvolveMatrixElement/preserveAlpha)
    [[nodiscard]] SVGAnimatedBoolean preserveAlpha() const;
    /// Getter of the `x` attribute.
    /// [`SVGFEConvolveMatrixElement.x`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFEConvolveMatrixElement/x)
    [[nodiscard]] SVGAnimatedLength x() const;
    /// Getter of the `y` attribute.
    /// [`SVGFEConvolveMatrixElement.y`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFEConvolveMatrixElement/y)
    [[nodiscard]] SVGAnimatedLength y() const;
    /// Getter of the `width` attribute.
    /// [`SVGFEConvolveMatrixElement.width`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFEConvolveMatrixElement/width)
    [[nodiscard]] SVGAnimatedLength width() const;
    /// Getter of the `height` attribute.
    /// [`SVGFEConvolveMatrixElement.height`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFEConvolveMatrixElement/height)
    [[nodiscard]] SVGAnimatedLength height() const;
    /// Getter of the `result` attribute.
    /// [`SVGFEConvolveMatrixElement.result`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFEConvolveMatrixElement/result)
    [[nodiscard]] SVGAnimatedString result() const;
};

