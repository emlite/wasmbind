#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"


class SVGAnimatedBoolean : public emlite::Val {
    explicit SVGAnimatedBoolean(Handle h) noexcept;

public:
    explicit SVGAnimatedBoolean(const emlite::Val &val) noexcept;
    static SVGAnimatedBoolean take_ownership(Handle h) noexcept;

    SVGAnimatedBoolean clone() const noexcept;
    bool baseVal() const;
    void baseVal(bool value);
    bool animVal() const;
};

