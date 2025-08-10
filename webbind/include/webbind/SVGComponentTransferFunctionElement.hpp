#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "SVGElement.hpp"

namespace webbind {

class SVGAnimatedEnumeration;
class SVGAnimatedNumberList;
class SVGAnimatedNumber;

/// Interface SVGComponentTransferFunctionElement
/// [`SVGComponentTransferFunctionElement`](https://developer.mozilla.org/en-US/docs/Web/API/SVGComponentTransferFunctionElement)
class SVGComponentTransferFunctionElement : public SVGElement {
    explicit SVGComponentTransferFunctionElement(Handle h) noexcept;
public:
    explicit SVGComponentTransferFunctionElement(const emlite::Val &val) noexcept;
    static SVGComponentTransferFunctionElement take_ownership(Handle h) noexcept;
    [[nodiscard]] SVGComponentTransferFunctionElement clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// [`SVGComponentTransferFunctionElement.type`](https://developer.mozilla.org/en-US/docs/Web/API/SVGComponentTransferFunctionElement/type)
    /// [`SVGComponentTransferFunctionElement.type`](https://developer.mozilla.org/en-US/docs/Web/API/SVGComponentTransferFunctionElement/type)
    [[nodiscard]] SVGAnimatedEnumeration type() const;
    /// [`SVGComponentTransferFunctionElement.tableValues`](https://developer.mozilla.org/en-US/docs/Web/API/SVGComponentTransferFunctionElement/tableValues)
    /// [`SVGComponentTransferFunctionElement.tableValues`](https://developer.mozilla.org/en-US/docs/Web/API/SVGComponentTransferFunctionElement/tableValues)
    [[nodiscard]] SVGAnimatedNumberList tableValues() const;
    /// [`SVGComponentTransferFunctionElement.slope`](https://developer.mozilla.org/en-US/docs/Web/API/SVGComponentTransferFunctionElement/slope)
    /// [`SVGComponentTransferFunctionElement.slope`](https://developer.mozilla.org/en-US/docs/Web/API/SVGComponentTransferFunctionElement/slope)
    [[nodiscard]] SVGAnimatedNumber slope() const;
    /// [`SVGComponentTransferFunctionElement.intercept`](https://developer.mozilla.org/en-US/docs/Web/API/SVGComponentTransferFunctionElement/intercept)
    /// [`SVGComponentTransferFunctionElement.intercept`](https://developer.mozilla.org/en-US/docs/Web/API/SVGComponentTransferFunctionElement/intercept)
    [[nodiscard]] SVGAnimatedNumber intercept() const;
    /// [`SVGComponentTransferFunctionElement.amplitude`](https://developer.mozilla.org/en-US/docs/Web/API/SVGComponentTransferFunctionElement/amplitude)
    /// [`SVGComponentTransferFunctionElement.amplitude`](https://developer.mozilla.org/en-US/docs/Web/API/SVGComponentTransferFunctionElement/amplitude)
    [[nodiscard]] SVGAnimatedNumber amplitude() const;
    /// [`SVGComponentTransferFunctionElement.exponent`](https://developer.mozilla.org/en-US/docs/Web/API/SVGComponentTransferFunctionElement/exponent)
    /// [`SVGComponentTransferFunctionElement.exponent`](https://developer.mozilla.org/en-US/docs/Web/API/SVGComponentTransferFunctionElement/exponent)
    [[nodiscard]] SVGAnimatedNumber exponent() const;
    /// [`SVGComponentTransferFunctionElement.offset`](https://developer.mozilla.org/en-US/docs/Web/API/SVGComponentTransferFunctionElement/offset)
    /// [`SVGComponentTransferFunctionElement.offset`](https://developer.mozilla.org/en-US/docs/Web/API/SVGComponentTransferFunctionElement/offset)
    [[nodiscard]] SVGAnimatedNumber offset() const;
};

} // namespace webbind