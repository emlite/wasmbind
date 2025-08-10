#include <webbind/SVGStopElement.hpp>
#include <webbind/SVGAnimatedNumber.hpp>

namespace webbind {

SVGStopElement SVGStopElement::take_ownership(Handle h) noexcept {
        return SVGStopElement(h);
    }
SVGStopElement SVGStopElement::clone() const noexcept { return *this; }
emlite::Val SVGStopElement::instance() noexcept { return emlite::Val::global("SVGStopElement"); }
SVGStopElement::SVGStopElement(Handle h) noexcept : SVGElement(emlite::Val::take_ownership(h)) {}
SVGStopElement::SVGStopElement(const emlite::Val &val) noexcept: SVGElement(val) {}

SVGAnimatedNumber SVGStopElement::offset() const {
    return SVGElement::get("offset").as<SVGAnimatedNumber>();
}


} // namespace webbind