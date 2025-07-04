#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "SVGElement.hpp"
#include "enums.hpp"

class SVGAnimatedNumber;


class SVGStopElement : public SVGElement {
    explicit SVGStopElement(Handle h) noexcept;

public:
    explicit SVGStopElement(const emlite::Val &val) noexcept;
    static SVGStopElement take_ownership(Handle h) noexcept;

    SVGStopElement clone() const noexcept;
    SVGAnimatedNumber offset() const;
};

