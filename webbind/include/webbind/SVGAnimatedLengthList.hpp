#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

class SVGLengthList;


class SVGAnimatedLengthList : public emlite::Val {
    explicit SVGAnimatedLengthList(Handle h) noexcept;

public:
    explicit SVGAnimatedLengthList(const emlite::Val &val) noexcept;
    static SVGAnimatedLengthList take_ownership(Handle h) noexcept;

    SVGAnimatedLengthList clone() const noexcept;
    SVGLengthList baseVal() const;
    SVGLengthList animVal() const;
};

