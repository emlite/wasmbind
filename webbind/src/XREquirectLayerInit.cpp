#include <webbind/XREquirectLayerInit.hpp>
#include <webbind/XRRigidTransform.hpp>

namespace webbind {

XREquirectLayerInit::XREquirectLayerInit(Handle h) noexcept : XRLayerInit(emlite::Val::take_ownership(h)) {}
XREquirectLayerInit XREquirectLayerInit::take_ownership(Handle h) noexcept {
    return XREquirectLayerInit(h);
}

XREquirectLayerInit::XREquirectLayerInit(const emlite::Val &val) noexcept: XRLayerInit(val) {}

XREquirectLayerInit::XREquirectLayerInit() noexcept: XRLayerInit(emlite::Val::object()) {}

XREquirectLayerInit XREquirectLayerInit::clone() const noexcept { return *this; }

XRTextureType XREquirectLayerInit::textureType() const {
    return emlite::Val::get("textureType").as<XRTextureType>();
}

void XREquirectLayerInit::textureType(const XRTextureType& value) {
    emlite::Val::set("textureType", value);
}

XRRigidTransform XREquirectLayerInit::transform() const {
    return emlite::Val::get("transform").as<XRRigidTransform>();
}

void XREquirectLayerInit::transform(const XRRigidTransform& value) {
    emlite::Val::set("transform", value);
}

float XREquirectLayerInit::radius() const {
    return emlite::Val::get("radius").as<float>();
}

void XREquirectLayerInit::radius(float value) {
    emlite::Val::set("radius", value);
}

float XREquirectLayerInit::centralHorizontalAngle() const {
    return emlite::Val::get("centralHorizontalAngle").as<float>();
}

void XREquirectLayerInit::centralHorizontalAngle(float value) {
    emlite::Val::set("centralHorizontalAngle", value);
}

float XREquirectLayerInit::upperVerticalAngle() const {
    return emlite::Val::get("upperVerticalAngle").as<float>();
}

void XREquirectLayerInit::upperVerticalAngle(float value) {
    emlite::Val::set("upperVerticalAngle", value);
}

float XREquirectLayerInit::lowerVerticalAngle() const {
    return emlite::Val::get("lowerVerticalAngle").as<float>();
}

void XREquirectLayerInit::lowerVerticalAngle(float value) {
    emlite::Val::set("lowerVerticalAngle", value);
}


} // namespace webbind