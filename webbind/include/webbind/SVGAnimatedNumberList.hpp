#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

class SVGNumberList;


class SVGAnimatedNumberList : public emlite::Val {
    explicit SVGAnimatedNumberList(Handle h) noexcept;

public:
    explicit SVGAnimatedNumberList(const emlite::Val &val) noexcept;
    static SVGAnimatedNumberList take_ownership(Handle h) noexcept;

    SVGAnimatedNumberList clone() const noexcept;
    SVGNumberList baseVal() const;
    SVGNumberList animVal() const;
};

