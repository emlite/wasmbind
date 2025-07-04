#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "SVGElement.hpp"
#include "enums.hpp"

class SVGAnimatedString;
class SVGAnimatedEnumeration;
class SVGAnimatedNumberList;
class SVGAnimatedLength;


class SVGFEColorMatrixElement : public SVGElement {
    explicit SVGFEColorMatrixElement(Handle h) noexcept;

public:
    explicit SVGFEColorMatrixElement(const emlite::Val &val) noexcept;
    static SVGFEColorMatrixElement take_ownership(Handle h) noexcept;

    SVGFEColorMatrixElement clone() const noexcept;
    SVGAnimatedString in1() const;
    SVGAnimatedEnumeration type() const;
    SVGAnimatedNumberList values() const;
    SVGAnimatedLength x() const;
    SVGAnimatedLength y() const;
    SVGAnimatedLength width() const;
    SVGAnimatedLength height() const;
    SVGAnimatedString result() const;
};

