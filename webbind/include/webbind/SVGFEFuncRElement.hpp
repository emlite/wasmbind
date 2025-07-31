#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "SVGComponentTransferFunctionElement.hpp"
#include "enums.hpp"


/// The SVGFEFuncRElement class.
/// [`SVGFEFuncRElement`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFEFuncRElement)
class SVGFEFuncRElement : public SVGComponentTransferFunctionElement {
    explicit SVGFEFuncRElement(Handle h) noexcept;

public:
    explicit SVGFEFuncRElement(const emlite::Val &val) noexcept;
    static SVGFEFuncRElement take_ownership(Handle h) noexcept;

    [[nodiscard]] SVGFEFuncRElement clone() const noexcept;
};

