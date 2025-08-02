#include <webbind/SVGGeometryElement.hpp>
#include <webbind/SVGAnimatedNumber.hpp>
#include <webbind/DOMPoint.hpp>


DOMPointInit::DOMPointInit(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
DOMPointInit DOMPointInit::take_ownership(Handle h) noexcept {
        return DOMPointInit(h);
    }
DOMPointInit::DOMPointInit(const emlite::Val &val) noexcept: emlite::Val(val) {}
DOMPointInit::DOMPointInit() noexcept: emlite::Val(emlite::Val::object()) {}
DOMPointInit DOMPointInit::clone() const noexcept { return *this; }

double DOMPointInit::x() const {
    return emlite::Val::get("x").as<double>();
}

void DOMPointInit::x(double value) {
    emlite::Val::set("x", value);
}

double DOMPointInit::y() const {
    return emlite::Val::get("y").as<double>();
}

void DOMPointInit::y(double value) {
    emlite::Val::set("y", value);
}

double DOMPointInit::z() const {
    return emlite::Val::get("z").as<double>();
}

void DOMPointInit::z(double value) {
    emlite::Val::set("z", value);
}

double DOMPointInit::w() const {
    return emlite::Val::get("w").as<double>();
}

void DOMPointInit::w(double value) {
    emlite::Val::set("w", value);
}

SVGGeometryElement SVGGeometryElement::take_ownership(Handle h) noexcept {
        return SVGGeometryElement(h);
    }
SVGGeometryElement SVGGeometryElement::clone() const noexcept { return *this; }
emlite::Val SVGGeometryElement::instance() noexcept { return emlite::Val::global("SVGGeometryElement"); }
SVGGeometryElement::SVGGeometryElement(Handle h) noexcept : SVGGraphicsElement(emlite::Val::take_ownership(h)) {}
SVGGeometryElement::SVGGeometryElement(const emlite::Val &val) noexcept: SVGGraphicsElement(val) {}


SVGAnimatedNumber SVGGeometryElement::pathLength() const {
    return SVGGraphicsElement::get("pathLength").as<SVGAnimatedNumber>();
}

bool SVGGeometryElement::isPointInFill() {
    return SVGGraphicsElement::call("isPointInFill").as<bool>();
}

bool SVGGeometryElement::isPointInFill(const DOMPointInit& point) {
    return SVGGraphicsElement::call("isPointInFill", point).as<bool>();
}

bool SVGGeometryElement::isPointInStroke() {
    return SVGGraphicsElement::call("isPointInStroke").as<bool>();
}

bool SVGGeometryElement::isPointInStroke(const DOMPointInit& point) {
    return SVGGraphicsElement::call("isPointInStroke", point).as<bool>();
}

float SVGGeometryElement::getTotalLength() {
    return SVGGraphicsElement::call("getTotalLength").as<float>();
}

DOMPoint SVGGeometryElement::getPointAtLength(float distance) {
    return SVGGraphicsElement::call("getPointAtLength", distance).as<DOMPoint>();
}

