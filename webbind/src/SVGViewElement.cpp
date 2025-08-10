#include <webbind/SVGViewElement.hpp>
#include <webbind/SVGAnimatedRect.hpp>
#include <webbind/SVGAnimatedPreserveAspectRatio.hpp>

namespace webbind {

SVGViewElement SVGViewElement::take_ownership(Handle h) noexcept {
    return SVGViewElement(h);
}

SVGViewElement SVGViewElement::clone() const noexcept { return *this; }

emlite::Val SVGViewElement::instance() noexcept { return emlite::Val::global("SVGViewElement"); }

SVGViewElement::SVGViewElement(Handle h) noexcept : SVGElement(emlite::Val::take_ownership(h)) {}

SVGViewElement::SVGViewElement(const emlite::Val &val) noexcept: SVGElement(val) {}

SVGAnimatedRect SVGViewElement::viewBox() const {
    return SVGElement::get("viewBox").as<SVGAnimatedRect>();
}

SVGAnimatedPreserveAspectRatio SVGViewElement::preserveAspectRatio() const {
    return SVGElement::get("preserveAspectRatio").as<SVGAnimatedPreserveAspectRatio>();
}


} // namespace webbind