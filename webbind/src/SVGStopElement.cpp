#include <webbind/SVGStopElement.hpp>
#include <webbind/SVGAnimatedNumber.hpp>


SVGStopElement SVGStopElement::take_ownership(Handle h) noexcept {
        return SVGStopElement(h);
    }
SVGStopElement SVGStopElement::clone() const noexcept { return *this; }
SVGStopElement::SVGStopElement(Handle h) noexcept : SVGElement(emlite::Val::take_ownership(h)) {}
SVGStopElement::SVGStopElement(const emlite::Val &val) noexcept: SVGElement(val) {}


SVGAnimatedNumber SVGStopElement::offset() const {
    return SVGElement::get("offset").as<SVGAnimatedNumber>();
}

