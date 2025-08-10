#include <webbind/XRMediaCylinderLayerInit.hpp>
#include <webbind/XRRigidTransform.hpp>

namespace webbind {

XRMediaCylinderLayerInit::XRMediaCylinderLayerInit(Handle h) noexcept : XRMediaLayerInit(emlite::Val::take_ownership(h)) {}
XRMediaCylinderLayerInit XRMediaCylinderLayerInit::take_ownership(Handle h) noexcept {
    return XRMediaCylinderLayerInit(h);
}

XRMediaCylinderLayerInit::XRMediaCylinderLayerInit(const emlite::Val &val) noexcept: XRMediaLayerInit(val) {}

XRMediaCylinderLayerInit::XRMediaCylinderLayerInit() noexcept: XRMediaLayerInit(emlite::Val::object()) {}

XRMediaCylinderLayerInit XRMediaCylinderLayerInit::clone() const noexcept { return *this; }

XRRigidTransform XRMediaCylinderLayerInit::transform() const {
    return emlite::Val::get("transform").as<XRRigidTransform>();
}

void XRMediaCylinderLayerInit::transform(const XRRigidTransform& value) {
    emlite::Val::set("transform", value);
}

float XRMediaCylinderLayerInit::radius() const {
    return emlite::Val::get("radius").as<float>();
}

void XRMediaCylinderLayerInit::radius(float value) {
    emlite::Val::set("radius", value);
}

float XRMediaCylinderLayerInit::centralAngle() const {
    return emlite::Val::get("centralAngle").as<float>();
}

void XRMediaCylinderLayerInit::centralAngle(float value) {
    emlite::Val::set("centralAngle", value);
}

float XRMediaCylinderLayerInit::aspectRatio() const {
    return emlite::Val::get("aspectRatio").as<float>();
}

void XRMediaCylinderLayerInit::aspectRatio(float value) {
    emlite::Val::set("aspectRatio", value);
}


} // namespace webbind