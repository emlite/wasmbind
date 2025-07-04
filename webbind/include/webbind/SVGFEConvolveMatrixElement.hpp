#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "SVGElement.hpp"
#include "enums.hpp"

class SVGAnimatedString;
class SVGAnimatedInteger;
class SVGAnimatedNumberList;
class SVGAnimatedNumber;
class SVGAnimatedEnumeration;
class SVGAnimatedBoolean;
class SVGAnimatedLength;


class SVGFEConvolveMatrixElement : public SVGElement {
    explicit SVGFEConvolveMatrixElement(Handle h) noexcept;

public:
    explicit SVGFEConvolveMatrixElement(const emlite::Val &val) noexcept;
    static SVGFEConvolveMatrixElement take_ownership(Handle h) noexcept;

    SVGFEConvolveMatrixElement clone() const noexcept;
    SVGAnimatedString in1() const;
    SVGAnimatedInteger orderX() const;
    SVGAnimatedInteger orderY() const;
    SVGAnimatedNumberList kernelMatrix() const;
    SVGAnimatedNumber divisor() const;
    SVGAnimatedNumber bias() const;
    SVGAnimatedInteger targetX() const;
    SVGAnimatedInteger targetY() const;
    SVGAnimatedEnumeration edgeMode() const;
    SVGAnimatedNumber kernelUnitLengthX() const;
    SVGAnimatedNumber kernelUnitLengthY() const;
    SVGAnimatedBoolean preserveAlpha() const;
    SVGAnimatedLength x() const;
    SVGAnimatedLength y() const;
    SVGAnimatedLength width() const;
    SVGAnimatedLength height() const;
    SVGAnimatedString result() const;
};

