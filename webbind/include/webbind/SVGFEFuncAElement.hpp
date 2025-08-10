#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "SVGComponentTransferFunctionElement.hpp"

namespace webbind {

/// Interface SVGFEFuncAElement
/// [`SVGFEFuncAElement`](https://developer.mozilla.org/en-US/docs/Web/API/SVGFEFuncAElement)
class SVGFEFuncAElement : public SVGComponentTransferFunctionElement {
    explicit SVGFEFuncAElement(Handle h) noexcept;
public:
    explicit SVGFEFuncAElement(const emlite::Val &val) noexcept;
    static SVGFEFuncAElement take_ownership(Handle h) noexcept;
    [[nodiscard]] SVGFEFuncAElement clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
};

} // namespace webbind