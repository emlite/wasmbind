#include "webbind/XREquirectLayer.hpp"
#include "webbind/XRSpace.hpp"
#include "webbind/XRRigidTransform.hpp"

namespace webbind {

XREquirectLayer XREquirectLayer::take_ownership(Handle h) noexcept {
        return XREquirectLayer(h);
    }
XREquirectLayer XREquirectLayer::clone() const noexcept { return *this; }
emlite::Val XREquirectLayer::instance() noexcept { return emlite::Val::global("XREquirectLayer"); }
XREquirectLayer::XREquirectLayer(Handle h) noexcept : XRCompositionLayer(emlite::Val::take_ownership(h)) {}
XREquirectLayer::XREquirectLayer(const emlite::Val &val) noexcept: XRCompositionLayer(val) {}

XRSpace XREquirectLayer::space() const {
    return XRCompositionLayer::get("space").as<XRSpace>();
}

void XREquirectLayer::space(const XRSpace& value) {
    XRCompositionLayer::set("space", value);
}

XRRigidTransform XREquirectLayer::transform() const {
    return XRCompositionLayer::get("transform").as<XRRigidTransform>();
}

void XREquirectLayer::transform(const XRRigidTransform& value) {
    XRCompositionLayer::set("transform", value);
}

float XREquirectLayer::radius() const {
    return XRCompositionLayer::get("radius").as<float>();
}

void XREquirectLayer::radius(float value) {
    XRCompositionLayer::set("radius", value);
}

float XREquirectLayer::centralHorizontalAngle() const {
    return XRCompositionLayer::get("centralHorizontalAngle").as<float>();
}

void XREquirectLayer::centralHorizontalAngle(float value) {
    XRCompositionLayer::set("centralHorizontalAngle", value);
}

float XREquirectLayer::upperVerticalAngle() const {
    return XRCompositionLayer::get("upperVerticalAngle").as<float>();
}

void XREquirectLayer::upperVerticalAngle(float value) {
    XRCompositionLayer::set("upperVerticalAngle", value);
}

float XREquirectLayer::lowerVerticalAngle() const {
    return XRCompositionLayer::get("lowerVerticalAngle").as<float>();
}

void XREquirectLayer::lowerVerticalAngle(float value) {
    XRCompositionLayer::set("lowerVerticalAngle", value);
}

jsbind::Any XREquirectLayer::onredraw() const {
    return XRCompositionLayer::get("onredraw").as<jsbind::Any>();
}

void XREquirectLayer::onredraw(const jsbind::Any& value) {
    XRCompositionLayer::set("onredraw", value);
}


} // namespace webbind