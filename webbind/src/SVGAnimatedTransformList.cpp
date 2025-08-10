#include "webbind/SVGAnimatedTransformList.hpp"
#include "webbind/SVGTransformList.hpp"

namespace webbind {

SVGAnimatedTransformList SVGAnimatedTransformList::take_ownership(Handle h) noexcept {
        return SVGAnimatedTransformList(h);
    }
SVGAnimatedTransformList SVGAnimatedTransformList::clone() const noexcept { return *this; }
emlite::Val SVGAnimatedTransformList::instance() noexcept { return emlite::Val::global("SVGAnimatedTransformList"); }
SVGAnimatedTransformList::SVGAnimatedTransformList(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
SVGAnimatedTransformList::SVGAnimatedTransformList(const emlite::Val &val) noexcept: emlite::Val(val) {}

SVGTransformList SVGAnimatedTransformList::baseVal() const {
    return emlite::Val::get("baseVal").as<SVGTransformList>();
}

SVGTransformList SVGAnimatedTransformList::animVal() const {
    return emlite::Val::get("animVal").as<SVGTransformList>();
}


} // namespace webbind