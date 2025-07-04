#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "SVGComponentTransferFunctionElement.hpp"
#include "enums.hpp"


class SVGFEFuncAElement : public SVGComponentTransferFunctionElement {
    explicit SVGFEFuncAElement(Handle h) noexcept;

public:
    explicit SVGFEFuncAElement(const emlite::Val &val) noexcept;
    static SVGFEFuncAElement take_ownership(Handle h) noexcept;

    SVGFEFuncAElement clone() const noexcept;
};

