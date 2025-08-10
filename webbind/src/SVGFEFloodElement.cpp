#include <webbind/SVGFEFloodElement.hpp>
#include <webbind/SVGAnimatedLength.hpp>
#include <webbind/SVGAnimatedString.hpp>

namespace webbind {

SVGFEFloodElement SVGFEFloodElement::take_ownership(Handle h) noexcept {
    return SVGFEFloodElement(h);
}

SVGFEFloodElement SVGFEFloodElement::clone() const noexcept { return *this; }

emlite::Val SVGFEFloodElement::instance() noexcept { return emlite::Val::global("SVGFEFloodElement"); }

SVGFEFloodElement::SVGFEFloodElement(Handle h) noexcept : SVGElement(emlite::Val::take_ownership(h)) {}

SVGFEFloodElement::SVGFEFloodElement(const emlite::Val &val) noexcept: SVGElement(val) {}

SVGAnimatedLength SVGFEFloodElement::x() const {
    return SVGElement::get("x").as<SVGAnimatedLength>();
}

SVGAnimatedLength SVGFEFloodElement::y() const {
    return SVGElement::get("y").as<SVGAnimatedLength>();
}

SVGAnimatedLength SVGFEFloodElement::width() const {
    return SVGElement::get("width").as<SVGAnimatedLength>();
}

SVGAnimatedLength SVGFEFloodElement::height() const {
    return SVGElement::get("height").as<SVGAnimatedLength>();
}

SVGAnimatedString SVGFEFloodElement::result() const {
    return SVGElement::get("result").as<SVGAnimatedString>();
}


} // namespace webbind