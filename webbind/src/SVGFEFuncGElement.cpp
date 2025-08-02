#include <webbind/SVGFEFuncGElement.hpp>


SVGFEFuncGElement SVGFEFuncGElement::take_ownership(Handle h) noexcept {
        return SVGFEFuncGElement(h);
    }
SVGFEFuncGElement SVGFEFuncGElement::clone() const noexcept { return *this; }
emlite::Val SVGFEFuncGElement::instance() noexcept { return emlite::Val::global("SVGFEFuncGElement"); }
SVGFEFuncGElement::SVGFEFuncGElement(Handle h) noexcept : SVGComponentTransferFunctionElement(emlite::Val::take_ownership(h)) {}
SVGFEFuncGElement::SVGFEFuncGElement(const emlite::Val &val) noexcept: SVGComponentTransferFunctionElement(val) {}


