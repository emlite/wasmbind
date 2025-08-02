#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "SVGComponentTransferFunctionElement.hpp"
#include "enums.hpp"


/// The SVGFEFuncBElement class.
/// [`SVGFEFuncBElement`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFEFuncBElement)
class SVGFEFuncBElement : public SVGComponentTransferFunctionElement {
    explicit SVGFEFuncBElement(Handle h) noexcept;

public:
    explicit SVGFEFuncBElement(const emlite::Val &val) noexcept;
    static SVGFEFuncBElement take_ownership(Handle h) noexcept;

    [[nodiscard]] SVGFEFuncBElement clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
};

