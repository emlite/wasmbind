#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

class SVGPreserveAspectRatio;


class SVGAnimatedPreserveAspectRatio : public emlite::Val {
    explicit SVGAnimatedPreserveAspectRatio(Handle h) noexcept;

public:
    explicit SVGAnimatedPreserveAspectRatio(const emlite::Val &val) noexcept;
    static SVGAnimatedPreserveAspectRatio take_ownership(Handle h) noexcept;

    SVGAnimatedPreserveAspectRatio clone() const noexcept;
    SVGPreserveAspectRatio baseVal() const;
    SVGPreserveAspectRatio animVal() const;
};

