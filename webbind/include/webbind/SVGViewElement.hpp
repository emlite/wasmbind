#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "SVGElement.hpp"
#include "enums.hpp"

class SVGAnimatedRect;
class SVGAnimatedPreserveAspectRatio;


class SVGViewElement : public SVGElement {
    explicit SVGViewElement(Handle h) noexcept;

public:
    explicit SVGViewElement(const emlite::Val &val) noexcept;
    static SVGViewElement take_ownership(Handle h) noexcept;

    SVGViewElement clone() const noexcept;
    SVGAnimatedRect viewBox() const;
    SVGAnimatedPreserveAspectRatio preserveAspectRatio() const;
};

