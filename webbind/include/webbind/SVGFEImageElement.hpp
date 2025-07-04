#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "SVGElement.hpp"
#include "enums.hpp"

class SVGAnimatedPreserveAspectRatio;
class SVGAnimatedString;
class SVGAnimatedLength;


class SVGFEImageElement : public SVGElement {
    explicit SVGFEImageElement(Handle h) noexcept;

public:
    explicit SVGFEImageElement(const emlite::Val &val) noexcept;
    static SVGFEImageElement take_ownership(Handle h) noexcept;

    SVGFEImageElement clone() const noexcept;
    SVGAnimatedPreserveAspectRatio preserveAspectRatio() const;
    SVGAnimatedString crossOrigin() const;
    SVGAnimatedLength x() const;
    SVGAnimatedLength y() const;
    SVGAnimatedLength width() const;
    SVGAnimatedLength height() const;
    SVGAnimatedString result() const;
    SVGAnimatedString href() const;
};

