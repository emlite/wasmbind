#include <webbind/SVGFEFuncAElement.hpp>


SVGFEFuncAElement SVGFEFuncAElement::take_ownership(Handle h) noexcept {
        return SVGFEFuncAElement(h);
    }
SVGFEFuncAElement SVGFEFuncAElement::clone() const noexcept { return *this; }
SVGFEFuncAElement::SVGFEFuncAElement(Handle h) noexcept : SVGComponentTransferFunctionElement(emlite::Val::take_ownership(h)) {}
SVGFEFuncAElement::SVGFEFuncAElement(const emlite::Val &val) noexcept: SVGComponentTransferFunctionElement(val) {}


