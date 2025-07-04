#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "SVGElement.hpp"
#include "enums.hpp"

class SVGAnimatedString;
class SVGAnimatedLength;


class SVGFETileElement : public SVGElement {
    explicit SVGFETileElement(Handle h) noexcept;

public:
    explicit SVGFETileElement(const emlite::Val &val) noexcept;
    static SVGFETileElement take_ownership(Handle h) noexcept;

    SVGFETileElement clone() const noexcept;
    SVGAnimatedString in1() const;
    SVGAnimatedLength x() const;
    SVGAnimatedLength y() const;
    SVGAnimatedLength width() const;
    SVGAnimatedLength height() const;
    SVGAnimatedString result() const;
};

