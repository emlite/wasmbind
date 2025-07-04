#include <webbind/SVGUnitTypes.hpp>


SVGUnitTypes SVGUnitTypes::take_ownership(Handle h) noexcept {
        return SVGUnitTypes(h);
    }
SVGUnitTypes SVGUnitTypes::clone() const noexcept { return *this; }
SVGUnitTypes::SVGUnitTypes(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
SVGUnitTypes::SVGUnitTypes(const emlite::Val &val) noexcept: emlite::Val(val) {}


