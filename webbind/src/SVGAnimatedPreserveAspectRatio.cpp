#include <webbind/SVGAnimatedPreserveAspectRatio.hpp>
#include <webbind/SVGPreserveAspectRatio.hpp>

namespace webbind {

SVGAnimatedPreserveAspectRatio SVGAnimatedPreserveAspectRatio::take_ownership(Handle h) noexcept {
        return SVGAnimatedPreserveAspectRatio(h);
    }
SVGAnimatedPreserveAspectRatio SVGAnimatedPreserveAspectRatio::clone() const noexcept { return *this; }
emlite::Val SVGAnimatedPreserveAspectRatio::instance() noexcept { return emlite::Val::global("SVGAnimatedPreserveAspectRatio"); }
SVGAnimatedPreserveAspectRatio::SVGAnimatedPreserveAspectRatio(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
SVGAnimatedPreserveAspectRatio::SVGAnimatedPreserveAspectRatio(const emlite::Val &val) noexcept: emlite::Val(val) {}

SVGPreserveAspectRatio SVGAnimatedPreserveAspectRatio::baseVal() const {
    return emlite::Val::get("baseVal").as<SVGPreserveAspectRatio>();
}

SVGPreserveAspectRatio SVGAnimatedPreserveAspectRatio::animVal() const {
    return emlite::Val::get("animVal").as<SVGPreserveAspectRatio>();
}


} // namespace webbind