#include <webbind/SVGFETileElement.hpp>
#include <webbind/SVGAnimatedString.hpp>
#include <webbind/SVGAnimatedLength.hpp>

namespace webbind {

SVGFETileElement SVGFETileElement::take_ownership(Handle h) noexcept {
    return SVGFETileElement(h);
}

SVGFETileElement SVGFETileElement::clone() const noexcept { return *this; }

emlite::Val SVGFETileElement::instance() noexcept { return emlite::Val::global("SVGFETileElement"); }

SVGFETileElement::SVGFETileElement(Handle h) noexcept : SVGElement(emlite::Val::take_ownership(h)) {}

SVGFETileElement::SVGFETileElement(const emlite::Val &val) noexcept: SVGElement(val) {}

SVGAnimatedString SVGFETileElement::in1() const {
    return SVGElement::get("in1").as<SVGAnimatedString>();
}

SVGAnimatedLength SVGFETileElement::x() const {
    return SVGElement::get("x").as<SVGAnimatedLength>();
}

SVGAnimatedLength SVGFETileElement::y() const {
    return SVGElement::get("y").as<SVGAnimatedLength>();
}

SVGAnimatedLength SVGFETileElement::width() const {
    return SVGElement::get("width").as<SVGAnimatedLength>();
}

SVGAnimatedLength SVGFETileElement::height() const {
    return SVGElement::get("height").as<SVGAnimatedLength>();
}

SVGAnimatedString SVGFETileElement::result() const {
    return SVGElement::get("result").as<SVGAnimatedString>();
}


} // namespace webbind