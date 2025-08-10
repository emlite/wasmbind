#include <webbind/SVGFEConvolveMatrixElement.hpp>
#include <webbind/SVGAnimatedString.hpp>
#include <webbind/SVGAnimatedInteger.hpp>
#include <webbind/SVGAnimatedNumberList.hpp>
#include <webbind/SVGAnimatedNumber.hpp>
#include <webbind/SVGAnimatedEnumeration.hpp>
#include <webbind/SVGAnimatedBoolean.hpp>
#include <webbind/SVGAnimatedLength.hpp>

namespace webbind {

SVGFEConvolveMatrixElement SVGFEConvolveMatrixElement::take_ownership(Handle h) noexcept {
        return SVGFEConvolveMatrixElement(h);
    }
SVGFEConvolveMatrixElement SVGFEConvolveMatrixElement::clone() const noexcept { return *this; }
emlite::Val SVGFEConvolveMatrixElement::instance() noexcept { return emlite::Val::global("SVGFEConvolveMatrixElement"); }
SVGFEConvolveMatrixElement::SVGFEConvolveMatrixElement(Handle h) noexcept : SVGElement(emlite::Val::take_ownership(h)) {}
SVGFEConvolveMatrixElement::SVGFEConvolveMatrixElement(const emlite::Val &val) noexcept: SVGElement(val) {}

SVGAnimatedString SVGFEConvolveMatrixElement::in1() const {
    return SVGElement::get("in1").as<SVGAnimatedString>();
}

SVGAnimatedInteger SVGFEConvolveMatrixElement::orderX() const {
    return SVGElement::get("orderX").as<SVGAnimatedInteger>();
}

SVGAnimatedInteger SVGFEConvolveMatrixElement::orderY() const {
    return SVGElement::get("orderY").as<SVGAnimatedInteger>();
}

SVGAnimatedNumberList SVGFEConvolveMatrixElement::kernelMatrix() const {
    return SVGElement::get("kernelMatrix").as<SVGAnimatedNumberList>();
}

SVGAnimatedNumber SVGFEConvolveMatrixElement::divisor() const {
    return SVGElement::get("divisor").as<SVGAnimatedNumber>();
}

SVGAnimatedNumber SVGFEConvolveMatrixElement::bias() const {
    return SVGElement::get("bias").as<SVGAnimatedNumber>();
}

SVGAnimatedInteger SVGFEConvolveMatrixElement::targetX() const {
    return SVGElement::get("targetX").as<SVGAnimatedInteger>();
}

SVGAnimatedInteger SVGFEConvolveMatrixElement::targetY() const {
    return SVGElement::get("targetY").as<SVGAnimatedInteger>();
}

SVGAnimatedEnumeration SVGFEConvolveMatrixElement::edgeMode() const {
    return SVGElement::get("edgeMode").as<SVGAnimatedEnumeration>();
}

SVGAnimatedNumber SVGFEConvolveMatrixElement::kernelUnitLengthX() const {
    return SVGElement::get("kernelUnitLengthX").as<SVGAnimatedNumber>();
}

SVGAnimatedNumber SVGFEConvolveMatrixElement::kernelUnitLengthY() const {
    return SVGElement::get("kernelUnitLengthY").as<SVGAnimatedNumber>();
}

SVGAnimatedBoolean SVGFEConvolveMatrixElement::preserveAlpha() const {
    return SVGElement::get("preserveAlpha").as<SVGAnimatedBoolean>();
}

SVGAnimatedLength SVGFEConvolveMatrixElement::x() const {
    return SVGElement::get("x").as<SVGAnimatedLength>();
}

SVGAnimatedLength SVGFEConvolveMatrixElement::y() const {
    return SVGElement::get("y").as<SVGAnimatedLength>();
}

SVGAnimatedLength SVGFEConvolveMatrixElement::width() const {
    return SVGElement::get("width").as<SVGAnimatedLength>();
}

SVGAnimatedLength SVGFEConvolveMatrixElement::height() const {
    return SVGElement::get("height").as<SVGAnimatedLength>();
}

SVGAnimatedString SVGFEConvolveMatrixElement::result() const {
    return SVGElement::get("result").as<SVGAnimatedString>();
}


} // namespace webbind