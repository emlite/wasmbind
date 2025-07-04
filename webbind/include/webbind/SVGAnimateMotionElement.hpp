#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "SVGAnimationElement.hpp"
#include "enums.hpp"


class SVGAnimateMotionElement : public SVGAnimationElement {
    explicit SVGAnimateMotionElement(Handle h) noexcept;

public:
    explicit SVGAnimateMotionElement(const emlite::Val &val) noexcept;
    static SVGAnimateMotionElement take_ownership(Handle h) noexcept;

    SVGAnimateMotionElement clone() const noexcept;
};

