#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "SVGGraphicsElement.hpp"
#include "enums.hpp"

class SVGAnimatedLength;


class SVGForeignObjectElement : public SVGGraphicsElement {
    explicit SVGForeignObjectElement(Handle h) noexcept;

public:
    explicit SVGForeignObjectElement(const emlite::Val &val) noexcept;
    static SVGForeignObjectElement take_ownership(Handle h) noexcept;

    SVGForeignObjectElement clone() const noexcept;
    SVGAnimatedLength x() const;
    SVGAnimatedLength y() const;
    SVGAnimatedLength width() const;
    SVGAnimatedLength height() const;
};

