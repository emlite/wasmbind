#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "SVGAnimationElement.hpp"
#include "enums.hpp"


class SVGAnimateElement : public SVGAnimationElement {
    explicit SVGAnimateElement(Handle h) noexcept;

public:
    explicit SVGAnimateElement(const emlite::Val &val) noexcept;
    static SVGAnimateElement take_ownership(Handle h) noexcept;

    SVGAnimateElement clone() const noexcept;
};

