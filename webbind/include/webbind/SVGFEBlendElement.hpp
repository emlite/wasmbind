#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "SVGElement.hpp"
#include "enums.hpp"

class SVGAnimatedString;
class SVGAnimatedEnumeration;
class SVGAnimatedLength;


class SVGFEBlendElement : public SVGElement {
    explicit SVGFEBlendElement(Handle h) noexcept;

public:
    explicit SVGFEBlendElement(const emlite::Val &val) noexcept;
    static SVGFEBlendElement take_ownership(Handle h) noexcept;

    SVGFEBlendElement clone() const noexcept;
    SVGAnimatedString in1() const;
    SVGAnimatedString in2() const;
    SVGAnimatedEnumeration mode() const;
    SVGAnimatedLength x() const;
    SVGAnimatedLength y() const;
    SVGAnimatedLength width() const;
    SVGAnimatedLength height() const;
    SVGAnimatedString result() const;
};

