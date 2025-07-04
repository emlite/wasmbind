#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "SVGElement.hpp"
#include "enums.hpp"

class SVGAnimatedString;


class SVGMPathElement : public SVGElement {
    explicit SVGMPathElement(Handle h) noexcept;

public:
    explicit SVGMPathElement(const emlite::Val &val) noexcept;
    static SVGMPathElement take_ownership(Handle h) noexcept;

    SVGMPathElement clone() const noexcept;
    SVGAnimatedString href() const;
};

