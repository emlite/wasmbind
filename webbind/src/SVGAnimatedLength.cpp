#include <webbind/SVGAnimatedLength.hpp>
#include <webbind/SVGLength.hpp>


SVGAnimatedLength SVGAnimatedLength::take_ownership(Handle h) noexcept {
        return SVGAnimatedLength(h);
    }
SVGAnimatedLength SVGAnimatedLength::clone() const noexcept { return *this; }
SVGAnimatedLength::SVGAnimatedLength(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
SVGAnimatedLength::SVGAnimatedLength(const emlite::Val &val) noexcept: emlite::Val(val) {}


SVGLength SVGAnimatedLength::baseVal() const {
    return emlite::Val::get("baseVal").as<SVGLength>();
}

SVGLength SVGAnimatedLength::animVal() const {
    return emlite::Val::get("animVal").as<SVGLength>();
}

