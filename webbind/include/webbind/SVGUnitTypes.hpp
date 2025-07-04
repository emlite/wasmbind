#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"


class SVGUnitTypes : public emlite::Val {
    explicit SVGUnitTypes(Handle h) noexcept;

public:
    explicit SVGUnitTypes(const emlite::Val &val) noexcept;
    static SVGUnitTypes take_ownership(Handle h) noexcept;

    SVGUnitTypes clone() const noexcept;
};

