#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "SVGGraphicsElement.hpp"
#include "enums.hpp"

class SVGAnimatedLength;
class SVGAnimatedPreserveAspectRatio;
class SVGAnimatedString;


class SVGImageElement : public SVGGraphicsElement {
    explicit SVGImageElement(Handle h) noexcept;

public:
    explicit SVGImageElement(const emlite::Val &val) noexcept;
    static SVGImageElement take_ownership(Handle h) noexcept;

    SVGImageElement clone() const noexcept;
    SVGAnimatedLength x() const;
    SVGAnimatedLength y() const;
    SVGAnimatedLength width() const;
    SVGAnimatedLength height() const;
    SVGAnimatedPreserveAspectRatio preserveAspectRatio() const;
    jsbind::String crossOrigin() const;
    void crossOrigin(const jsbind::String& value);
    SVGAnimatedString href() const;
};

