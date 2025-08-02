#include <webbind/XRProjectionLayer.hpp>
#include <webbind/XRRigidTransform.hpp>


XRProjectionLayer XRProjectionLayer::take_ownership(Handle h) noexcept {
        return XRProjectionLayer(h);
    }
XRProjectionLayer XRProjectionLayer::clone() const noexcept { return *this; }
emlite::Val XRProjectionLayer::instance() noexcept { return emlite::Val::global("XRProjectionLayer"); }
XRProjectionLayer::XRProjectionLayer(Handle h) noexcept : XRCompositionLayer(emlite::Val::take_ownership(h)) {}
XRProjectionLayer::XRProjectionLayer(const emlite::Val &val) noexcept: XRCompositionLayer(val) {}


unsigned long XRProjectionLayer::textureWidth() const {
    return XRCompositionLayer::get("textureWidth").as<unsigned long>();
}

unsigned long XRProjectionLayer::textureHeight() const {
    return XRCompositionLayer::get("textureHeight").as<unsigned long>();
}

unsigned long XRProjectionLayer::textureArrayLength() const {
    return XRCompositionLayer::get("textureArrayLength").as<unsigned long>();
}

bool XRProjectionLayer::ignoreDepthValues() const {
    return XRCompositionLayer::get("ignoreDepthValues").as<bool>();
}

float XRProjectionLayer::fixedFoveation() const {
    return XRCompositionLayer::get("fixedFoveation").as<float>();
}

void XRProjectionLayer::fixedFoveation(float value) {
    XRCompositionLayer::set("fixedFoveation", value);
}

XRRigidTransform XRProjectionLayer::deltaPose() const {
    return XRCompositionLayer::get("deltaPose").as<XRRigidTransform>();
}

void XRProjectionLayer::deltaPose(const XRRigidTransform& value) {
    XRCompositionLayer::set("deltaPose", value);
}

