#include <webbind/SVGLinearGradientElement.hpp>
#include <webbind/SVGAnimatedLength.hpp>


SVGLinearGradientElement SVGLinearGradientElement::take_ownership(Handle h) noexcept {
        return SVGLinearGradientElement(h);
    }
SVGLinearGradientElement SVGLinearGradientElement::clone() const noexcept { return *this; }
emlite::Val SVGLinearGradientElement::instance() noexcept { return emlite::Val::global("SVGLinearGradientElement"); }
SVGLinearGradientElement::SVGLinearGradientElement(Handle h) noexcept : SVGGradientElement(emlite::Val::take_ownership(h)) {}
SVGLinearGradientElement::SVGLinearGradientElement(const emlite::Val &val) noexcept: SVGGradientElement(val) {}


SVGAnimatedLength SVGLinearGradientElement::x1() const {
    return SVGGradientElement::get("x1").as<SVGAnimatedLength>();
}

SVGAnimatedLength SVGLinearGradientElement::y1() const {
    return SVGGradientElement::get("y1").as<SVGAnimatedLength>();
}

SVGAnimatedLength SVGLinearGradientElement::x2() const {
    return SVGGradientElement::get("x2").as<SVGAnimatedLength>();
}

SVGAnimatedLength SVGLinearGradientElement::y2() const {
    return SVGGradientElement::get("y2").as<SVGAnimatedLength>();
}

