#include <webbind/XRCylinderLayer.hpp>
#include <webbind/XRSpace.hpp>
#include <webbind/XRRigidTransform.hpp>

namespace webbind {

XRCylinderLayer XRCylinderLayer::take_ownership(Handle h) noexcept {
    return XRCylinderLayer(h);
}

XRCylinderLayer XRCylinderLayer::clone() const noexcept { return *this; }

emlite::Val XRCylinderLayer::instance() noexcept { return emlite::Val::global("XRCylinderLayer"); }

XRCylinderLayer::XRCylinderLayer(Handle h) noexcept : XRCompositionLayer(emlite::Val::take_ownership(h)) {}

XRCylinderLayer::XRCylinderLayer(const emlite::Val &val) noexcept: XRCompositionLayer(val) {}

XRSpace XRCylinderLayer::space() const {
    return XRCompositionLayer::get("space").as<XRSpace>();
}

void XRCylinderLayer::space(const XRSpace& value) {
    XRCompositionLayer::set("space", value);
}

XRRigidTransform XRCylinderLayer::transform() const {
    return XRCompositionLayer::get("transform").as<XRRigidTransform>();
}

void XRCylinderLayer::transform(const XRRigidTransform& value) {
    XRCompositionLayer::set("transform", value);
}

float XRCylinderLayer::radius() const {
    return XRCompositionLayer::get("radius").as<float>();
}

void XRCylinderLayer::radius(float value) {
    XRCompositionLayer::set("radius", value);
}

float XRCylinderLayer::centralAngle() const {
    return XRCompositionLayer::get("centralAngle").as<float>();
}

void XRCylinderLayer::centralAngle(float value) {
    XRCompositionLayer::set("centralAngle", value);
}

float XRCylinderLayer::aspectRatio() const {
    return XRCompositionLayer::get("aspectRatio").as<float>();
}

void XRCylinderLayer::aspectRatio(float value) {
    XRCompositionLayer::set("aspectRatio", value);
}

jsbind::Any XRCylinderLayer::onredraw() const {
    return XRCompositionLayer::get("onredraw").as<jsbind::Any>();
}

void XRCylinderLayer::onredraw(const jsbind::Any& value) {
    XRCompositionLayer::set("onredraw", value);
}


} // namespace webbind