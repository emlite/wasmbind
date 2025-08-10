#include <webbind/SVGAnimatedAngle.hpp>
#include <webbind/SVGAngle.hpp>

namespace webbind {

SVGAnimatedAngle SVGAnimatedAngle::take_ownership(Handle h) noexcept {
    return SVGAnimatedAngle(h);
}

SVGAnimatedAngle SVGAnimatedAngle::clone() const noexcept { return *this; }

emlite::Val SVGAnimatedAngle::instance() noexcept { return emlite::Val::global("SVGAnimatedAngle"); }

SVGAnimatedAngle::SVGAnimatedAngle(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}

SVGAnimatedAngle::SVGAnimatedAngle(const emlite::Val &val) noexcept: emlite::Val(val) {}

SVGAngle SVGAnimatedAngle::baseVal() const {
    return emlite::Val::get("baseVal").as<SVGAngle>();
}

SVGAngle SVGAnimatedAngle::animVal() const {
    return emlite::Val::get("animVal").as<SVGAngle>();
}


} // namespace webbind