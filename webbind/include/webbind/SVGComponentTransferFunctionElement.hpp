#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "SVGElement.hpp"
#include "enums.hpp"

class SVGAnimatedEnumeration;
class SVGAnimatedNumberList;
class SVGAnimatedNumber;


class SVGComponentTransferFunctionElement : public SVGElement {
    explicit SVGComponentTransferFunctionElement(Handle h) noexcept;

public:
    explicit SVGComponentTransferFunctionElement(const emlite::Val &val) noexcept;
    static SVGComponentTransferFunctionElement take_ownership(Handle h) noexcept;

    SVGComponentTransferFunctionElement clone() const noexcept;
    SVGAnimatedEnumeration type() const;
    SVGAnimatedNumberList tableValues() const;
    SVGAnimatedNumber slope() const;
    SVGAnimatedNumber intercept() const;
    SVGAnimatedNumber amplitude() const;
    SVGAnimatedNumber exponent() const;
    SVGAnimatedNumber offset() const;
};

