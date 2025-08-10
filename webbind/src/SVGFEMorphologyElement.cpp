#include <webbind/SVGFEMorphologyElement.hpp>
#include <webbind/SVGAnimatedString.hpp>
#include <webbind/SVGAnimatedEnumeration.hpp>
#include <webbind/SVGAnimatedNumber.hpp>
#include <webbind/SVGAnimatedLength.hpp>

namespace webbind {

SVGFEMorphologyElement SVGFEMorphologyElement::take_ownership(Handle h) noexcept {
        return SVGFEMorphologyElement(h);
    }
SVGFEMorphologyElement SVGFEMorphologyElement::clone() const noexcept { return *this; }
emlite::Val SVGFEMorphologyElement::instance() noexcept { return emlite::Val::global("SVGFEMorphologyElement"); }
SVGFEMorphologyElement::SVGFEMorphologyElement(Handle h) noexcept : SVGElement(emlite::Val::take_ownership(h)) {}
SVGFEMorphologyElement::SVGFEMorphologyElement(const emlite::Val &val) noexcept: SVGElement(val) {}

SVGAnimatedString SVGFEMorphologyElement::in1() const {
    return SVGElement::get("in1").as<SVGAnimatedString>();
}

SVGAnimatedEnumeration SVGFEMorphologyElement::operator_() const {
    return SVGElement::get("operator").as<SVGAnimatedEnumeration>();
}

SVGAnimatedNumber SVGFEMorphologyElement::radiusX() const {
    return SVGElement::get("radiusX").as<SVGAnimatedNumber>();
}

SVGAnimatedNumber SVGFEMorphologyElement::radiusY() const {
    return SVGElement::get("radiusY").as<SVGAnimatedNumber>();
}

SVGAnimatedLength SVGFEMorphologyElement::x() const {
    return SVGElement::get("x").as<SVGAnimatedLength>();
}

SVGAnimatedLength SVGFEMorphologyElement::y() const {
    return SVGElement::get("y").as<SVGAnimatedLength>();
}

SVGAnimatedLength SVGFEMorphologyElement::width() const {
    return SVGElement::get("width").as<SVGAnimatedLength>();
}

SVGAnimatedLength SVGFEMorphologyElement::height() const {
    return SVGElement::get("height").as<SVGAnimatedLength>();
}

SVGAnimatedString SVGFEMorphologyElement::result() const {
    return SVGElement::get("result").as<SVGAnimatedString>();
}


} // namespace webbind