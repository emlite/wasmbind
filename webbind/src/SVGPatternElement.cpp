#include "webbind/SVGPatternElement.hpp"
#include "webbind/SVGAnimatedEnumeration.hpp"
#include "webbind/SVGAnimatedTransformList.hpp"
#include "webbind/SVGAnimatedLength.hpp"
#include "webbind/SVGAnimatedRect.hpp"
#include "webbind/SVGAnimatedPreserveAspectRatio.hpp"
#include "webbind/SVGAnimatedString.hpp"

namespace webbind {

SVGPatternElement SVGPatternElement::take_ownership(Handle h) noexcept {
        return SVGPatternElement(h);
    }
SVGPatternElement SVGPatternElement::clone() const noexcept { return *this; }
emlite::Val SVGPatternElement::instance() noexcept { return emlite::Val::global("SVGPatternElement"); }
SVGPatternElement::SVGPatternElement(Handle h) noexcept : SVGElement(emlite::Val::take_ownership(h)) {}
SVGPatternElement::SVGPatternElement(const emlite::Val &val) noexcept: SVGElement(val) {}

SVGAnimatedEnumeration SVGPatternElement::patternUnits() const {
    return SVGElement::get("patternUnits").as<SVGAnimatedEnumeration>();
}

SVGAnimatedEnumeration SVGPatternElement::patternContentUnits() const {
    return SVGElement::get("patternContentUnits").as<SVGAnimatedEnumeration>();
}

SVGAnimatedTransformList SVGPatternElement::patternTransform() const {
    return SVGElement::get("patternTransform").as<SVGAnimatedTransformList>();
}

SVGAnimatedLength SVGPatternElement::x() const {
    return SVGElement::get("x").as<SVGAnimatedLength>();
}

SVGAnimatedLength SVGPatternElement::y() const {
    return SVGElement::get("y").as<SVGAnimatedLength>();
}

SVGAnimatedLength SVGPatternElement::width() const {
    return SVGElement::get("width").as<SVGAnimatedLength>();
}

SVGAnimatedLength SVGPatternElement::height() const {
    return SVGElement::get("height").as<SVGAnimatedLength>();
}

SVGAnimatedRect SVGPatternElement::viewBox() const {
    return SVGElement::get("viewBox").as<SVGAnimatedRect>();
}

SVGAnimatedPreserveAspectRatio SVGPatternElement::preserveAspectRatio() const {
    return SVGElement::get("preserveAspectRatio").as<SVGAnimatedPreserveAspectRatio>();
}

SVGAnimatedString SVGPatternElement::href() const {
    return SVGElement::get("href").as<SVGAnimatedString>();
}


} // namespace webbind