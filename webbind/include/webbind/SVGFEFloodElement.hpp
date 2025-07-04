#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "SVGElement.hpp"
#include "enums.hpp"

class SVGAnimatedLength;
class SVGAnimatedString;


class SVGFEFloodElement : public SVGElement {
    explicit SVGFEFloodElement(Handle h) noexcept;

public:
    explicit SVGFEFloodElement(const emlite::Val &val) noexcept;
    static SVGFEFloodElement take_ownership(Handle h) noexcept;

    SVGFEFloodElement clone() const noexcept;
    SVGAnimatedLength x() const;
    SVGAnimatedLength y() const;
    SVGAnimatedLength width() const;
    SVGAnimatedLength height() const;
    SVGAnimatedString result() const;
};

