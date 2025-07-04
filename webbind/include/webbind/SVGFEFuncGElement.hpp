#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "SVGComponentTransferFunctionElement.hpp"
#include "enums.hpp"


class SVGFEFuncGElement : public SVGComponentTransferFunctionElement {
    explicit SVGFEFuncGElement(Handle h) noexcept;

public:
    explicit SVGFEFuncGElement(const emlite::Val &val) noexcept;
    static SVGFEFuncGElement take_ownership(Handle h) noexcept;

    SVGFEFuncGElement clone() const noexcept;
};

