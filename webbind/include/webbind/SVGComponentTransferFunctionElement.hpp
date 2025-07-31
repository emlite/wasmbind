#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "SVGElement.hpp"
#include "enums.hpp"

class SVGAnimatedEnumeration;
class SVGAnimatedNumberList;
class SVGAnimatedNumber;


/// The SVGComponentTransferFunctionElement class.
/// [`SVGComponentTransferFunctionElement`](https://developer.mozilla.org/en-US/docs/Web/API/SVGComponentTransferFunctionElement)
class SVGComponentTransferFunctionElement : public SVGElement {
    explicit SVGComponentTransferFunctionElement(Handle h) noexcept;

public:
    explicit SVGComponentTransferFunctionElement(const emlite::Val &val) noexcept;
    static SVGComponentTransferFunctionElement take_ownership(Handle h) noexcept;

    [[nodiscard]] SVGComponentTransferFunctionElement clone() const noexcept;
    /// Getter of the `type` attribute.
    /// [`SVGComponentTransferFunctionElement.type`](https://developer.mozilla.org/en-US/docs/Web/API/SVGComponentTransferFunctionElement/type)
    [[nodiscard]] SVGAnimatedEnumeration type() const;
    /// Getter of the `tableValues` attribute.
    /// [`SVGComponentTransferFunctionElement.tableValues`](https://developer.mozilla.org/en-US/docs/Web/API/SVGComponentTransferFunctionElement/tableValues)
    [[nodiscard]] SVGAnimatedNumberList tableValues() const;
    /// Getter of the `slope` attribute.
    /// [`SVGComponentTransferFunctionElement.slope`](https://developer.mozilla.org/en-US/docs/Web/API/SVGComponentTransferFunctionElement/slope)
    [[nodiscard]] SVGAnimatedNumber slope() const;
    /// Getter of the `intercept` attribute.
    /// [`SVGComponentTransferFunctionElement.intercept`](https://developer.mozilla.org/en-US/docs/Web/API/SVGComponentTransferFunctionElement/intercept)
    [[nodiscard]] SVGAnimatedNumber intercept() const;
    /// Getter of the `amplitude` attribute.
    /// [`SVGComponentTransferFunctionElement.amplitude`](https://developer.mozilla.org/en-US/docs/Web/API/SVGComponentTransferFunctionElement/amplitude)
    [[nodiscard]] SVGAnimatedNumber amplitude() const;
    /// Getter of the `exponent` attribute.
    /// [`SVGComponentTransferFunctionElement.exponent`](https://developer.mozilla.org/en-US/docs/Web/API/SVGComponentTransferFunctionElement/exponent)
    [[nodiscard]] SVGAnimatedNumber exponent() const;
    /// Getter of the `offset` attribute.
    /// [`SVGComponentTransferFunctionElement.offset`](https://developer.mozilla.org/en-US/docs/Web/API/SVGComponentTransferFunctionElement/offset)
    [[nodiscard]] SVGAnimatedNumber offset() const;
};

