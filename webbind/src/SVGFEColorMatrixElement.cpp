#include "webbind/SVGFEColorMatrixElement.hpp"
#include "webbind/SVGAnimatedString.hpp"
#include "webbind/SVGAnimatedEnumeration.hpp"
#include "webbind/SVGAnimatedNumberList.hpp"
#include "webbind/SVGAnimatedLength.hpp"

namespace webbind {

SVGFEColorMatrixElement SVGFEColorMatrixElement::take_ownership(Handle h) noexcept {
        return SVGFEColorMatrixElement(h);
    }
SVGFEColorMatrixElement SVGFEColorMatrixElement::clone() const noexcept { return *this; }
emlite::Val SVGFEColorMatrixElement::instance() noexcept { return emlite::Val::global("SVGFEColorMatrixElement"); }
SVGFEColorMatrixElement::SVGFEColorMatrixElement(Handle h) noexcept : SVGElement(emlite::Val::take_ownership(h)) {}
SVGFEColorMatrixElement::SVGFEColorMatrixElement(const emlite::Val &val) noexcept: SVGElement(val) {}

SVGAnimatedString SVGFEColorMatrixElement::in1() const {
    return SVGElement::get("in1").as<SVGAnimatedString>();
}

SVGAnimatedEnumeration SVGFEColorMatrixElement::type() const {
    return SVGElement::get("type").as<SVGAnimatedEnumeration>();
}

SVGAnimatedNumberList SVGFEColorMatrixElement::values() const {
    return SVGElement::get("values").as<SVGAnimatedNumberList>();
}

SVGAnimatedLength SVGFEColorMatrixElement::x() const {
    return SVGElement::get("x").as<SVGAnimatedLength>();
}

SVGAnimatedLength SVGFEColorMatrixElement::y() const {
    return SVGElement::get("y").as<SVGAnimatedLength>();
}

SVGAnimatedLength SVGFEColorMatrixElement::width() const {
    return SVGElement::get("width").as<SVGAnimatedLength>();
}

SVGAnimatedLength SVGFEColorMatrixElement::height() const {
    return SVGElement::get("height").as<SVGAnimatedLength>();
}

SVGAnimatedString SVGFEColorMatrixElement::result() const {
    return SVGElement::get("result").as<SVGAnimatedString>();
}


} // namespace webbind