#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"


/// The SVGUnitTypes class.
/// [`SVGUnitTypes`](https://developer.mozilla.org/en-US/docs/Web/API/SVGUnitTypes)
class SVGUnitTypes : public emlite::Val {
    explicit SVGUnitTypes(Handle h) noexcept;

public:
    explicit SVGUnitTypes(const emlite::Val &val) noexcept;
    static SVGUnitTypes take_ownership(Handle h) noexcept;

    [[nodiscard]] SVGUnitTypes clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
};

