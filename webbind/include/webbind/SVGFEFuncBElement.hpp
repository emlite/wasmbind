#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "SVGComponentTransferFunctionElement.hpp"
#include "enums.hpp"


class SVGFEFuncBElement : public SVGComponentTransferFunctionElement {
    explicit SVGFEFuncBElement(Handle h) noexcept;

public:
    explicit SVGFEFuncBElement(const emlite::Val &val) noexcept;
    static SVGFEFuncBElement take_ownership(Handle h) noexcept;

    SVGFEFuncBElement clone() const noexcept;
};

