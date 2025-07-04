#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "SVGAnimationElement.hpp"
#include "enums.hpp"


class SVGAnimateTransformElement : public SVGAnimationElement {
    explicit SVGAnimateTransformElement(Handle h) noexcept;

public:
    explicit SVGAnimateTransformElement(const emlite::Val &val) noexcept;
    static SVGAnimateTransformElement take_ownership(Handle h) noexcept;

    SVGAnimateTransformElement clone() const noexcept;
};

