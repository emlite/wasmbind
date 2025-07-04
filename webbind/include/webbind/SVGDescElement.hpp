#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "SVGElement.hpp"
#include "enums.hpp"


class SVGDescElement : public SVGElement {
    explicit SVGDescElement(Handle h) noexcept;

public:
    explicit SVGDescElement(const emlite::Val &val) noexcept;
    static SVGDescElement take_ownership(Handle h) noexcept;

    SVGDescElement clone() const noexcept;
};

