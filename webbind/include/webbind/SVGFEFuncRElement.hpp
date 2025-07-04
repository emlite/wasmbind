#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "SVGComponentTransferFunctionElement.hpp"
#include "enums.hpp"


class SVGFEFuncRElement : public SVGComponentTransferFunctionElement {
    explicit SVGFEFuncRElement(Handle h) noexcept;

public:
    explicit SVGFEFuncRElement(const emlite::Val &val) noexcept;
    static SVGFEFuncRElement take_ownership(Handle h) noexcept;

    SVGFEFuncRElement clone() const noexcept;
};

