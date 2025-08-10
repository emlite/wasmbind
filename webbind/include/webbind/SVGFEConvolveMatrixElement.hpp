#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "SVGElement.hpp"

namespace webbind {

class SVGAnimatedString;
class SVGAnimatedInteger;
class SVGAnimatedNumberList;
class SVGAnimatedNumber;
class SVGAnimatedEnumeration;
class SVGAnimatedBoolean;
class SVGAnimatedLength;

/// Interface SVGFEConvolveMatrixElement
/// [`SVGFEConvolveMatrixElement`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFEConvolveMatrixElement)
class SVGFEConvolveMatrixElement : public SVGElement {
    explicit SVGFEConvolveMatrixElement(Handle h) noexcept;
public:
    explicit SVGFEConvolveMatrixElement(const emlite::Val &val) noexcept;
    static SVGFEConvolveMatrixElement take_ownership(Handle h) noexcept;
    [[nodiscard]] SVGFEConvolveMatrixElement clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// [`SVGFEConvolveMatrixElement.in1`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFEConvolveMatrixElement/in1)
    /// [`SVGFEConvolveMatrixElement.in1`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFEConvolveMatrixElement/in1)
    [[nodiscard]] SVGAnimatedString in1() const;
    /// [`SVGFEConvolveMatrixElement.orderX`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFEConvolveMatrixElement/orderX)
    /// [`SVGFEConvolveMatrixElement.orderX`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFEConvolveMatrixElement/orderX)
    [[nodiscard]] SVGAnimatedInteger orderX() const;
    /// [`SVGFEConvolveMatrixElement.orderY`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFEConvolveMatrixElement/orderY)
    /// [`SVGFEConvolveMatrixElement.orderY`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFEConvolveMatrixElement/orderY)
    [[nodiscard]] SVGAnimatedInteger orderY() const;
    /// [`SVGFEConvolveMatrixElement.kernelMatrix`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFEConvolveMatrixElement/kernelMatrix)
    /// [`SVGFEConvolveMatrixElement.kernelMatrix`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFEConvolveMatrixElement/kernelMatrix)
    [[nodiscard]] SVGAnimatedNumberList kernelMatrix() const;
    /// [`SVGFEConvolveMatrixElement.divisor`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFEConvolveMatrixElement/divisor)
    /// [`SVGFEConvolveMatrixElement.divisor`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFEConvolveMatrixElement/divisor)
    [[nodiscard]] SVGAnimatedNumber divisor() const;
    /// [`SVGFEConvolveMatrixElement.bias`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFEConvolveMatrixElement/bias)
    /// [`SVGFEConvolveMatrixElement.bias`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFEConvolveMatrixElement/bias)
    [[nodiscard]] SVGAnimatedNumber bias() const;
    /// [`SVGFEConvolveMatrixElement.targetX`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFEConvolveMatrixElement/targetX)
    /// [`SVGFEConvolveMatrixElement.targetX`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFEConvolveMatrixElement/targetX)
    [[nodiscard]] SVGAnimatedInteger targetX() const;
    /// [`SVGFEConvolveMatrixElement.targetY`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFEConvolveMatrixElement/targetY)
    /// [`SVGFEConvolveMatrixElement.targetY`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFEConvolveMatrixElement/targetY)
    [[nodiscard]] SVGAnimatedInteger targetY() const;
    /// [`SVGFEConvolveMatrixElement.edgeMode`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFEConvolveMatrixElement/edgeMode)
    /// [`SVGFEConvolveMatrixElement.edgeMode`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFEConvolveMatrixElement/edgeMode)
    [[nodiscard]] SVGAnimatedEnumeration edgeMode() const;
    /// [`SVGFEConvolveMatrixElement.kernelUnitLengthX`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFEConvolveMatrixElement/kernelUnitLengthX)
    /// [`SVGFEConvolveMatrixElement.kernelUnitLengthX`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFEConvolveMatrixElement/kernelUnitLengthX)
    [[nodiscard]] SVGAnimatedNumber kernelUnitLengthX() const;
    /// [`SVGFEConvolveMatrixElement.kernelUnitLengthY`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFEConvolveMatrixElement/kernelUnitLengthY)
    /// [`SVGFEConvolveMatrixElement.kernelUnitLengthY`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFEConvolveMatrixElement/kernelUnitLengthY)
    [[nodiscard]] SVGAnimatedNumber kernelUnitLengthY() const;
    /// [`SVGFEConvolveMatrixElement.preserveAlpha`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFEConvolveMatrixElement/preserveAlpha)
    /// [`SVGFEConvolveMatrixElement.preserveAlpha`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFEConvolveMatrixElement/preserveAlpha)
    [[nodiscard]] SVGAnimatedBoolean preserveAlpha() const;
    /// [`SVGFEConvolveMatrixElement.x`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFEConvolveMatrixElement/x)
    /// [`SVGFEConvolveMatrixElement.x`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFEConvolveMatrixElement/x)
    [[nodiscard]] SVGAnimatedLength x() const;
    /// [`SVGFEConvolveMatrixElement.y`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFEConvolveMatrixElement/y)
    /// [`SVGFEConvolveMatrixElement.y`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFEConvolveMatrixElement/y)
    [[nodiscard]] SVGAnimatedLength y() const;
    /// [`SVGFEConvolveMatrixElement.width`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFEConvolveMatrixElement/width)
    /// [`SVGFEConvolveMatrixElement.width`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFEConvolveMatrixElement/width)
    [[nodiscard]] SVGAnimatedLength width() const;
    /// [`SVGFEConvolveMatrixElement.height`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFEConvolveMatrixElement/height)
    /// [`SVGFEConvolveMatrixElement.height`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFEConvolveMatrixElement/height)
    [[nodiscard]] SVGAnimatedLength height() const;
    /// [`SVGFEConvolveMatrixElement.result`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFEConvolveMatrixElement/result)
    /// [`SVGFEConvolveMatrixElement.result`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFEConvolveMatrixElement/result)
    [[nodiscard]] SVGAnimatedString result() const;
};

} // namespace webbind