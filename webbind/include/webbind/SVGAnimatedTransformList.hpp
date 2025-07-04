#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

class SVGTransformList;


class SVGAnimatedTransformList : public emlite::Val {
    explicit SVGAnimatedTransformList(Handle h) noexcept;

public:
    explicit SVGAnimatedTransformList(const emlite::Val &val) noexcept;
    static SVGAnimatedTransformList take_ownership(Handle h) noexcept;

    SVGAnimatedTransformList clone() const noexcept;
    SVGTransformList baseVal() const;
    SVGTransformList animVal() const;
};

