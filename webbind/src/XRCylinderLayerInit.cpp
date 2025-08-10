#include <webbind/XRCylinderLayerInit.hpp>
#include <webbind/XRRigidTransform.hpp>

namespace webbind {

XRCylinderLayerInit::XRCylinderLayerInit(Handle h) noexcept : XRLayerInit(emlite::Val::take_ownership(h)) {}
XRCylinderLayerInit XRCylinderLayerInit::take_ownership(Handle h) noexcept {
    return XRCylinderLayerInit(h);
}

XRCylinderLayerInit::XRCylinderLayerInit(const emlite::Val &val) noexcept: XRLayerInit(val) {}

XRCylinderLayerInit::XRCylinderLayerInit() noexcept: XRLayerInit(emlite::Val::object()) {}

XRCylinderLayerInit XRCylinderLayerInit::clone() const noexcept { return *this; }

XRTextureType XRCylinderLayerInit::textureType() const {
    return emlite::Val::get("textureType").as<XRTextureType>();
}

void XRCylinderLayerInit::textureType(const XRTextureType& value) {
    emlite::Val::set("textureType", value);
}

XRRigidTransform XRCylinderLayerInit::transform() const {
    return emlite::Val::get("transform").as<XRRigidTransform>();
}

void XRCylinderLayerInit::transform(const XRRigidTransform& value) {
    emlite::Val::set("transform", value);
}

float XRCylinderLayerInit::radius() const {
    return emlite::Val::get("radius").as<float>();
}

void XRCylinderLayerInit::radius(float value) {
    emlite::Val::set("radius", value);
}

float XRCylinderLayerInit::centralAngle() const {
    return emlite::Val::get("centralAngle").as<float>();
}

void XRCylinderLayerInit::centralAngle(float value) {
    emlite::Val::set("centralAngle", value);
}

float XRCylinderLayerInit::aspectRatio() const {
    return emlite::Val::get("aspectRatio").as<float>();
}

void XRCylinderLayerInit::aspectRatio(float value) {
    emlite::Val::set("aspectRatio", value);
}


} // namespace webbind