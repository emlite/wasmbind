#include <webbind/SVGViewElement.hpp>
#include <webbind/SVGAnimatedRect.hpp>
#include <webbind/SVGAnimatedPreserveAspectRatio.hpp>


SVGViewElement SVGViewElement::take_ownership(Handle h) noexcept {
        return SVGViewElement(h);
    }
SVGViewElement SVGViewElement::clone() const noexcept { return *this; }
SVGViewElement::SVGViewElement(Handle h) noexcept : SVGElement(emlite::Val::take_ownership(h)) {}
SVGViewElement::SVGViewElement(const emlite::Val &val) noexcept: SVGElement(val) {}


SVGAnimatedRect SVGViewElement::viewBox() const {
    return SVGElement::get("viewBox").as<SVGAnimatedRect>();
}

SVGAnimatedPreserveAspectRatio SVGViewElement::preserveAspectRatio() const {
    return SVGElement::get("preserveAspectRatio").as<SVGAnimatedPreserveAspectRatio>();
}

