#include <webbind/SVGGraphicsElement.hpp>
#include <webbind/SVGAnimatedTransformList.hpp>
#include <webbind/DOMRect.hpp>
#include <webbind/SVGBoundingBoxOptions.hpp>
#include <webbind/DOMMatrix.hpp>
#include <webbind/SVGStringList.hpp>

namespace webbind {

SVGGraphicsElement SVGGraphicsElement::take_ownership(Handle h) noexcept {
    return SVGGraphicsElement(h);
}

SVGGraphicsElement SVGGraphicsElement::clone() const noexcept { return *this; }

emlite::Val SVGGraphicsElement::instance() noexcept { return emlite::Val::global("SVGGraphicsElement"); }

SVGGraphicsElement::SVGGraphicsElement(Handle h) noexcept : SVGElement(emlite::Val::take_ownership(h)) {}

SVGGraphicsElement::SVGGraphicsElement(const emlite::Val &val) noexcept: SVGElement(val) {}

SVGAnimatedTransformList SVGGraphicsElement::transform() const {
    return SVGElement::get("transform").as<SVGAnimatedTransformList>();
}

DOMRect SVGGraphicsElement::getBBox() {
    return SVGElement::call("getBBox").as<DOMRect>();
}

DOMRect SVGGraphicsElement::getBBox(const SVGBoundingBoxOptions& options) {
    return SVGElement::call("getBBox", options).as<DOMRect>();
}

DOMMatrix SVGGraphicsElement::getCTM() {
    return SVGElement::call("getCTM").as<DOMMatrix>();
}

DOMMatrix SVGGraphicsElement::getScreenCTM() {
    return SVGElement::call("getScreenCTM").as<DOMMatrix>();
}

SVGStringList SVGGraphicsElement::requiredExtensions() const {
    return SVGElement::get("requiredExtensions").as<SVGStringList>();
}

SVGStringList SVGGraphicsElement::systemLanguage() const {
    return SVGElement::get("systemLanguage").as<SVGStringList>();
}


} // namespace webbind