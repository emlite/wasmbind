#include <webbind/SVGAnimatedEnumeration.hpp>

namespace webbind {

SVGAnimatedEnumeration SVGAnimatedEnumeration::take_ownership(Handle h) noexcept {
        return SVGAnimatedEnumeration(h);
    }
SVGAnimatedEnumeration SVGAnimatedEnumeration::clone() const noexcept { return *this; }
emlite::Val SVGAnimatedEnumeration::instance() noexcept { return emlite::Val::global("SVGAnimatedEnumeration"); }
SVGAnimatedEnumeration::SVGAnimatedEnumeration(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
SVGAnimatedEnumeration::SVGAnimatedEnumeration(const emlite::Val &val) noexcept: emlite::Val(val) {}

unsigned short SVGAnimatedEnumeration::baseVal() const {
    return emlite::Val::get("baseVal").as<unsigned short>();
}

void SVGAnimatedEnumeration::baseVal(unsigned short value) {
    emlite::Val::set("baseVal", value);
}

unsigned short SVGAnimatedEnumeration::animVal() const {
    return emlite::Val::get("animVal").as<unsigned short>();
}


} // namespace webbind