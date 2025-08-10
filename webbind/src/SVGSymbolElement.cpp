#include <webbind/SVGSymbolElement.hpp>
#include <webbind/SVGAnimatedRect.hpp>
#include <webbind/SVGAnimatedPreserveAspectRatio.hpp>

namespace webbind {

SVGSymbolElement SVGSymbolElement::take_ownership(Handle h) noexcept {
    return SVGSymbolElement(h);
}

SVGSymbolElement SVGSymbolElement::clone() const noexcept { return *this; }

emlite::Val SVGSymbolElement::instance() noexcept { return emlite::Val::global("SVGSymbolElement"); }

SVGSymbolElement::SVGSymbolElement(Handle h) noexcept : SVGGraphicsElement(emlite::Val::take_ownership(h)) {}

SVGSymbolElement::SVGSymbolElement(const emlite::Val &val) noexcept: SVGGraphicsElement(val) {}

SVGAnimatedRect SVGSymbolElement::viewBox() const {
    return SVGGraphicsElement::get("viewBox").as<SVGAnimatedRect>();
}

SVGAnimatedPreserveAspectRatio SVGSymbolElement::preserveAspectRatio() const {
    return SVGGraphicsElement::get("preserveAspectRatio").as<SVGAnimatedPreserveAspectRatio>();
}


} // namespace webbind