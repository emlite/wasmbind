#include "webbind/SVGUseElement.hpp"
#include "webbind/SVGAnimatedLength.hpp"
#include "webbind/SVGElement.hpp"
#include "webbind/SVGAnimatedString.hpp"

namespace webbind {

SVGUseElement SVGUseElement::take_ownership(Handle h) noexcept {
        return SVGUseElement(h);
    }
SVGUseElement SVGUseElement::clone() const noexcept { return *this; }
emlite::Val SVGUseElement::instance() noexcept { return emlite::Val::global("SVGUseElement"); }
SVGUseElement::SVGUseElement(Handle h) noexcept : SVGGraphicsElement(emlite::Val::take_ownership(h)) {}
SVGUseElement::SVGUseElement(const emlite::Val &val) noexcept: SVGGraphicsElement(val) {}

SVGAnimatedLength SVGUseElement::x() const {
    return SVGGraphicsElement::get("x").as<SVGAnimatedLength>();
}

SVGAnimatedLength SVGUseElement::y() const {
    return SVGGraphicsElement::get("y").as<SVGAnimatedLength>();
}

SVGAnimatedLength SVGUseElement::width() const {
    return SVGGraphicsElement::get("width").as<SVGAnimatedLength>();
}

SVGAnimatedLength SVGUseElement::height() const {
    return SVGGraphicsElement::get("height").as<SVGAnimatedLength>();
}

SVGElement SVGUseElement::instanceRoot() const {
    return SVGGraphicsElement::get("instanceRoot").as<SVGElement>();
}

SVGElement SVGUseElement::animatedInstanceRoot() const {
    return SVGGraphicsElement::get("animatedInstanceRoot").as<SVGElement>();
}

SVGAnimatedString SVGUseElement::href() const {
    return SVGGraphicsElement::get("href").as<SVGAnimatedString>();
}


} // namespace webbind