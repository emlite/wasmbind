#include <webbind/SVGAnimatedNumber.hpp>

namespace webbind {

SVGAnimatedNumber SVGAnimatedNumber::take_ownership(Handle h) noexcept {
        return SVGAnimatedNumber(h);
    }
SVGAnimatedNumber SVGAnimatedNumber::clone() const noexcept { return *this; }
emlite::Val SVGAnimatedNumber::instance() noexcept { return emlite::Val::global("SVGAnimatedNumber"); }
SVGAnimatedNumber::SVGAnimatedNumber(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
SVGAnimatedNumber::SVGAnimatedNumber(const emlite::Val &val) noexcept: emlite::Val(val) {}

float SVGAnimatedNumber::baseVal() const {
    return emlite::Val::get("baseVal").as<float>();
}

void SVGAnimatedNumber::baseVal(float value) {
    emlite::Val::set("baseVal", value);
}

float SVGAnimatedNumber::animVal() const {
    return emlite::Val::get("animVal").as<float>();
}


} // namespace webbind