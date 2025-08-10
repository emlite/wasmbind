#include <webbind/SVGAnimatedBoolean.hpp>

namespace webbind {

SVGAnimatedBoolean SVGAnimatedBoolean::take_ownership(Handle h) noexcept {
        return SVGAnimatedBoolean(h);
    }
SVGAnimatedBoolean SVGAnimatedBoolean::clone() const noexcept { return *this; }
emlite::Val SVGAnimatedBoolean::instance() noexcept { return emlite::Val::global("SVGAnimatedBoolean"); }
SVGAnimatedBoolean::SVGAnimatedBoolean(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
SVGAnimatedBoolean::SVGAnimatedBoolean(const emlite::Val &val) noexcept: emlite::Val(val) {}

bool SVGAnimatedBoolean::baseVal() const {
    return emlite::Val::get("baseVal").as<bool>();
}

void SVGAnimatedBoolean::baseVal(bool value) {
    emlite::Val::set("baseVal", value);
}

bool SVGAnimatedBoolean::animVal() const {
    return emlite::Val::get("animVal").as<bool>();
}


} // namespace webbind