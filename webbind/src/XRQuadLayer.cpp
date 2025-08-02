#include <webbind/XRQuadLayer.hpp>
#include <webbind/XRSpace.hpp>
#include <webbind/XRRigidTransform.hpp>


XRQuadLayer XRQuadLayer::take_ownership(Handle h) noexcept {
        return XRQuadLayer(h);
    }
XRQuadLayer XRQuadLayer::clone() const noexcept { return *this; }
emlite::Val XRQuadLayer::instance() noexcept { return emlite::Val::global("XRQuadLayer"); }
XRQuadLayer::XRQuadLayer(Handle h) noexcept : XRCompositionLayer(emlite::Val::take_ownership(h)) {}
XRQuadLayer::XRQuadLayer(const emlite::Val &val) noexcept: XRCompositionLayer(val) {}


XRSpace XRQuadLayer::space() const {
    return XRCompositionLayer::get("space").as<XRSpace>();
}

void XRQuadLayer::space(const XRSpace& value) {
    XRCompositionLayer::set("space", value);
}

XRRigidTransform XRQuadLayer::transform() const {
    return XRCompositionLayer::get("transform").as<XRRigidTransform>();
}

void XRQuadLayer::transform(const XRRigidTransform& value) {
    XRCompositionLayer::set("transform", value);
}

float XRQuadLayer::width() const {
    return XRCompositionLayer::get("width").as<float>();
}

void XRQuadLayer::width(float value) {
    XRCompositionLayer::set("width", value);
}

float XRQuadLayer::height() const {
    return XRCompositionLayer::get("height").as<float>();
}

void XRQuadLayer::height(float value) {
    XRCompositionLayer::set("height", value);
}

jsbind::Any XRQuadLayer::onredraw() const {
    return XRCompositionLayer::get("onredraw").as<jsbind::Any>();
}

void XRQuadLayer::onredraw(const jsbind::Any& value) {
    XRCompositionLayer::set("onredraw", value);
}

