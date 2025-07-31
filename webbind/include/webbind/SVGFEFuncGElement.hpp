#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "SVGComponentTransferFunctionElement.hpp"
#include "enums.hpp"


/// The SVGFEFuncGElement class.
/// [`SVGFEFuncGElement`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFEFuncGElement)
class SVGFEFuncGElement : public SVGComponentTransferFunctionElement {
    explicit SVGFEFuncGElement(Handle h) noexcept;

public:
    explicit SVGFEFuncGElement(const emlite::Val &val) noexcept;
    static SVGFEFuncGElement take_ownership(Handle h) noexcept;

    [[nodiscard]] SVGFEFuncGElement clone() const noexcept;
};

