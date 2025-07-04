#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "SVGGraphicsElement.hpp"
#include "enums.hpp"


class SVGGElement : public SVGGraphicsElement {
    explicit SVGGElement(Handle h) noexcept;

public:
    explicit SVGGElement(const emlite::Val &val) noexcept;
    static SVGGElement take_ownership(Handle h) noexcept;

    SVGGElement clone() const noexcept;
};

