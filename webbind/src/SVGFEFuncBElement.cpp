#include <webbind/SVGFEFuncBElement.hpp>


SVGFEFuncBElement SVGFEFuncBElement::take_ownership(Handle h) noexcept {
        return SVGFEFuncBElement(h);
    }
SVGFEFuncBElement SVGFEFuncBElement::clone() const noexcept { return *this; }
emlite::Val SVGFEFuncBElement::instance() noexcept { return emlite::Val::global("SVGFEFuncBElement"); }
SVGFEFuncBElement::SVGFEFuncBElement(Handle h) noexcept : SVGComponentTransferFunctionElement(emlite::Val::take_ownership(h)) {}
SVGFEFuncBElement::SVGFEFuncBElement(const emlite::Val &val) noexcept: SVGComponentTransferFunctionElement(val) {}


