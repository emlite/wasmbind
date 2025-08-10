#include <webbind/SVGFEGaussianBlurElement.hpp>
#include <webbind/SVGAnimatedString.hpp>
#include <webbind/SVGAnimatedNumber.hpp>
#include <webbind/SVGAnimatedEnumeration.hpp>
#include <webbind/SVGAnimatedLength.hpp>

namespace webbind {

SVGFEGaussianBlurElement SVGFEGaussianBlurElement::take_ownership(Handle h) noexcept {
        return SVGFEGaussianBlurElement(h);
    }
SVGFEGaussianBlurElement SVGFEGaussianBlurElement::clone() const noexcept { return *this; }
emlite::Val SVGFEGaussianBlurElement::instance() noexcept { return emlite::Val::global("SVGFEGaussianBlurElement"); }
SVGFEGaussianBlurElement::SVGFEGaussianBlurElement(Handle h) noexcept : SVGElement(emlite::Val::take_ownership(h)) {}
SVGFEGaussianBlurElement::SVGFEGaussianBlurElement(const emlite::Val &val) noexcept: SVGElement(val) {}

SVGAnimatedString SVGFEGaussianBlurElement::in1() const {
    return SVGElement::get("in1").as<SVGAnimatedString>();
}

SVGAnimatedNumber SVGFEGaussianBlurElement::stdDeviationX() const {
    return SVGElement::get("stdDeviationX").as<SVGAnimatedNumber>();
}

SVGAnimatedNumber SVGFEGaussianBlurElement::stdDeviationY() const {
    return SVGElement::get("stdDeviationY").as<SVGAnimatedNumber>();
}

SVGAnimatedEnumeration SVGFEGaussianBlurElement::edgeMode() const {
    return SVGElement::get("edgeMode").as<SVGAnimatedEnumeration>();
}

jsbind::Undefined SVGFEGaussianBlurElement::setStdDeviation(float stdDeviationX, float stdDeviationY) {
    return SVGElement::call("setStdDeviation", stdDeviationX, stdDeviationY).as<jsbind::Undefined>();
}

SVGAnimatedLength SVGFEGaussianBlurElement::x() const {
    return SVGElement::get("x").as<SVGAnimatedLength>();
}

SVGAnimatedLength SVGFEGaussianBlurElement::y() const {
    return SVGElement::get("y").as<SVGAnimatedLength>();
}

SVGAnimatedLength SVGFEGaussianBlurElement::width() const {
    return SVGElement::get("width").as<SVGAnimatedLength>();
}

SVGAnimatedLength SVGFEGaussianBlurElement::height() const {
    return SVGElement::get("height").as<SVGAnimatedLength>();
}

SVGAnimatedString SVGFEGaussianBlurElement::result() const {
    return SVGElement::get("result").as<SVGAnimatedString>();
}


} // namespace webbind