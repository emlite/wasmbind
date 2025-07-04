#include <webbind/SVGGraphicsElement.hpp>
#include <webbind/SVGAnimatedTransformList.hpp>
#include <webbind/DOMRect.hpp>
#include <webbind/DOMMatrix.hpp>
#include <webbind/SVGStringList.hpp>


SVGBoundingBoxOptions::SVGBoundingBoxOptions(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
SVGBoundingBoxOptions SVGBoundingBoxOptions::take_ownership(Handle h) noexcept {
        return SVGBoundingBoxOptions(h);
    }
SVGBoundingBoxOptions::SVGBoundingBoxOptions(const emlite::Val &val) noexcept: emlite::Val(val) {}
SVGBoundingBoxOptions::SVGBoundingBoxOptions() noexcept: emlite::Val(emlite::Val::object()) {}
SVGBoundingBoxOptions SVGBoundingBoxOptions::clone() const noexcept { return *this; }

bool SVGBoundingBoxOptions::fill() const {
    return emlite::Val::get("fill").as<bool>();
}

void SVGBoundingBoxOptions::fill(bool value) {
    emlite::Val::set("fill", value);
}

bool SVGBoundingBoxOptions::stroke() const {
    return emlite::Val::get("stroke").as<bool>();
}

void SVGBoundingBoxOptions::stroke(bool value) {
    emlite::Val::set("stroke", value);
}

bool SVGBoundingBoxOptions::markers() const {
    return emlite::Val::get("markers").as<bool>();
}

void SVGBoundingBoxOptions::markers(bool value) {
    emlite::Val::set("markers", value);
}

bool SVGBoundingBoxOptions::clipped() const {
    return emlite::Val::get("clipped").as<bool>();
}

void SVGBoundingBoxOptions::clipped(bool value) {
    emlite::Val::set("clipped", value);
}

SVGGraphicsElement SVGGraphicsElement::take_ownership(Handle h) noexcept {
        return SVGGraphicsElement(h);
    }
SVGGraphicsElement SVGGraphicsElement::clone() const noexcept { return *this; }
SVGGraphicsElement::SVGGraphicsElement(Handle h) noexcept : SVGElement(emlite::Val::take_ownership(h)) {}
SVGGraphicsElement::SVGGraphicsElement(const emlite::Val &val) noexcept: SVGElement(val) {}


SVGAnimatedTransformList SVGGraphicsElement::transform() const {
    return SVGElement::get("transform").as<SVGAnimatedTransformList>();
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

