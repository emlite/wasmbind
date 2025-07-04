#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"


class SVGAnimatedEnumeration : public emlite::Val {
    explicit SVGAnimatedEnumeration(Handle h) noexcept;

public:
    explicit SVGAnimatedEnumeration(const emlite::Val &val) noexcept;
    static SVGAnimatedEnumeration take_ownership(Handle h) noexcept;

    SVGAnimatedEnumeration clone() const noexcept;
    unsigned short baseVal() const;
    void baseVal(unsigned short value);
    unsigned short animVal() const;
};

