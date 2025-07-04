#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

class DOMRect;
class DOMRectReadOnly;


class SVGAnimatedRect : public emlite::Val {
    explicit SVGAnimatedRect(Handle h) noexcept;

public:
    explicit SVGAnimatedRect(const emlite::Val &val) noexcept;
    static SVGAnimatedRect take_ownership(Handle h) noexcept;

    SVGAnimatedRect clone() const noexcept;
    DOMRect baseVal() const;
    DOMRectReadOnly animVal() const;
};

