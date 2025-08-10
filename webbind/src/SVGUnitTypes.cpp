#include "webbind/SVGUnitTypes.hpp"

namespace webbind {

SVGUnitTypes SVGUnitTypes::take_ownership(Handle h) noexcept {
        return SVGUnitTypes(h);
    }
SVGUnitTypes SVGUnitTypes::clone() const noexcept { return *this; }
emlite::Val SVGUnitTypes::instance() noexcept { return emlite::Val::global("SVGUnitTypes"); }
SVGUnitTypes::SVGUnitTypes(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
SVGUnitTypes::SVGUnitTypes(const emlite::Val &val) noexcept: emlite::Val(val) {}


} // namespace webbind