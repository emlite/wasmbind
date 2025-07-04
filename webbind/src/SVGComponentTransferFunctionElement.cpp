#include <webbind/SVGComponentTransferFunctionElement.hpp>
#include <webbind/SVGAnimatedEnumeration.hpp>
#include <webbind/SVGAnimatedNumberList.hpp>
#include <webbind/SVGAnimatedNumber.hpp>


SVGComponentTransferFunctionElement SVGComponentTransferFunctionElement::take_ownership(Handle h) noexcept {
        return SVGComponentTransferFunctionElement(h);
    }
SVGComponentTransferFunctionElement SVGComponentTransferFunctionElement::clone() const noexcept { return *this; }
SVGComponentTransferFunctionElement::SVGComponentTransferFunctionElement(Handle h) noexcept : SVGElement(emlite::Val::take_ownership(h)) {}
SVGComponentTransferFunctionElement::SVGComponentTransferFunctionElement(const emlite::Val &val) noexcept: SVGElement(val) {}


SVGAnimatedEnumeration SVGComponentTransferFunctionElement::type() const {
    return SVGElement::get("type").as<SVGAnimatedEnumeration>();
}

SVGAnimatedNumberList SVGComponentTransferFunctionElement::tableValues() const {
    return SVGElement::get("tableValues").as<SVGAnimatedNumberList>();
}

SVGAnimatedNumber SVGComponentTransferFunctionElement::slope() const {
    return SVGElement::get("slope").as<SVGAnimatedNumber>();
}

SVGAnimatedNumber SVGComponentTransferFunctionElement::intercept() const {
    return SVGElement::get("intercept").as<SVGAnimatedNumber>();
}

SVGAnimatedNumber SVGComponentTransferFunctionElement::amplitude() const {
    return SVGElement::get("amplitude").as<SVGAnimatedNumber>();
}

SVGAnimatedNumber SVGComponentTransferFunctionElement::exponent() const {
    return SVGElement::get("exponent").as<SVGAnimatedNumber>();
}

SVGAnimatedNumber SVGComponentTransferFunctionElement::offset() const {
    return SVGElement::get("offset").as<SVGAnimatedNumber>();
}

