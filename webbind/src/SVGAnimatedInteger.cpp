#include <webbind/SVGAnimatedInteger.hpp>

namespace webbind {

SVGAnimatedInteger SVGAnimatedInteger::take_ownership(Handle h) noexcept {
        return SVGAnimatedInteger(h);
    }
SVGAnimatedInteger SVGAnimatedInteger::clone() const noexcept { return *this; }
emlite::Val SVGAnimatedInteger::instance() noexcept { return emlite::Val::global("SVGAnimatedInteger"); }
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


} // namespace webbind