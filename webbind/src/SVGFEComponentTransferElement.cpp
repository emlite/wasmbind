#include <webbind/SVGFEComponentTransferElement.hpp>
#include <webbind/SVGAnimatedString.hpp>
#include <webbind/SVGAnimatedLength.hpp>

namespace webbind {

SVGFEComponentTransferElement SVGFEComponentTransferElement::take_ownership(Handle h) noexcept {
        return SVGFEComponentTransferElement(h);
    }
SVGFEComponentTransferElement SVGFEComponentTransferElement::clone() const noexcept { return *this; }
emlite::Val SVGFEComponentTransferElement::instance() noexcept { return emlite::Val::global("SVGFEComponentTransferElement"); }
SVGFEComponentTransferElement::SVGFEComponentTransferElement(Handle h) noexcept : SVGElement(emlite::Val::take_ownership(h)) {}
SVGFEComponentTransferElement::SVGFEComponentTransferElement(const emlite::Val &val) noexcept: SVGElement(val) {}

SVGAnimatedString SVGFEComponentTransferElement::in1() const {
    return SVGElement::get("in1").as<SVGAnimatedString>();
}

SVGAnimatedLength SVGFEComponentTransferElement::x() const {
    return SVGElement::get("x").as<SVGAnimatedLength>();
}

SVGAnimatedLength SVGFEComponentTransferElement::y() const {
    return SVGElement::get("y").as<SVGAnimatedLength>();
}

SVGAnimatedLength SVGFEComponentTransferElement::width() const {
    return SVGElement::get("width").as<SVGAnimatedLength>();
}

SVGAnimatedLength SVGFEComponentTransferElement::height() const {
    return SVGElement::get("height").as<SVGAnimatedLength>();
}

SVGAnimatedString SVGFEComponentTransferElement::result() const {
    return SVGElement::get("result").as<SVGAnimatedString>();
}


} // namespace webbind