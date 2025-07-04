#include <webbind/SVGAnimatedInteger.hpp>


SVGAnimatedInteger SVGAnimatedInteger::take_ownership(Handle h) noexcept {
        return SVGAnimatedInteger(h);
    }
SVGAnimatedInteger SVGAnimatedInteger::clone() const noexcept { return *this; }
SVGAnimatedInteger::SVGAnimatedInteger(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
SVGAnimatedInteger::SVGAnimatedInteger(const emlite::Val &val) noexcept: emlite::Val(val) {}


long SVGAnimatedInteger::baseVal() const {
    return emlite::Val::get("baseVal").as<long>();
}

void SVGAnimatedInteger::baseVal(long value) {
    emlite::Val::set("baseVal", value);
}

long SVGAnimatedInteger::animVal() const {
    return emlite::Val::get("animVal").as<long>();
}

