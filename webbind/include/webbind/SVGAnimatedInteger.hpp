#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"


class SVGAnimatedInteger : public emlite::Val {
    explicit SVGAnimatedInteger(Handle h) noexcept;

public:
    explicit SVGAnimatedInteger(const emlite::Val &val) noexcept;
    static SVGAnimatedInteger take_ownership(Handle h) noexcept;

    SVGAnimatedInteger clone() const noexcept;
    long baseVal() const;
    void baseVal(long value);
    long animVal() const;
};

