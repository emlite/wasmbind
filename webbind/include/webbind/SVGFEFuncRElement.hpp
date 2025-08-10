#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "SVGComponentTransferFunctionElement.hpp"

namespace webbind {

/// Interface SVGFEFuncRElement
/// [`SVGFEFuncRElement`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFEFuncRElement)
class SVGFEFuncRElement : public SVGComponentTransferFunctionElement {
    explicit SVGFEFuncRElement(Handle h) noexcept;
public:
    explicit SVGFEFuncRElement(const emlite::Val &val) noexcept;
    static SVGFEFuncRElement take_ownership(Handle h) noexcept;
    [[nodiscard]] SVGFEFuncRElement clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
};

} // namespace webbind