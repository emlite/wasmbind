#include <webbind/XRMediaEquirectLayerInit.hpp>
#include <webbind/XRRigidTransform.hpp>

namespace webbind {

XRMediaEquirectLayerInit::XRMediaEquirectLayerInit(Handle h) noexcept : XRMediaLayerInit(emlite::Val::take_ownership(h)) {}
XRMediaEquirectLayerInit XRMediaEquirectLayerInit::take_ownership(Handle h) noexcept {
    return XRMediaEquirectLayerInit(h);
}

XRMediaEquirectLayerInit::XRMediaEquirectLayerInit(const emlite::Val &val) noexcept: XRMediaLayerInit(val) {}

XRMediaEquirectLayerInit::XRMediaEquirectLayerInit() noexcept: XRMediaLayerInit(emlite::Val::object()) {}

XRMediaEquirectLayerInit XRMediaEquirectLayerInit::clone() const noexcept { return *this; }

XRRigidTransform XRMediaEquirectLayerInit::transform() const {
    return emlite::Val::get("transform").as<XRRigidTransform>();
}

void XRMediaEquirectLayerInit::transform(const XRRigidTransform& value) {
    emlite::Val::set("transform", value);
}

float XRMediaEquirectLayerInit::radius() const {
    return emlite::Val::get("radius").as<float>();
}

void XRMediaEquirectLayerInit::radius(float value) {
    emlite::Val::set("radius", value);
}

float XRMediaEquirectLayerInit::centralHorizontalAngle() const {
    return emlite::Val::get("centralHorizontalAngle").as<float>();
}

void XRMediaEquirectLayerInit::centralHorizontalAngle(float value) {
    emlite::Val::set("centralHorizontalAngle", value);
}

float XRMediaEquirectLayerInit::upperVerticalAngle() const {
    return emlite::Val::get("upperVerticalAngle").as<float>();
}

void XRMediaEquirectLayerInit::upperVerticalAngle(float value) {
    emlite::Val::set("upperVerticalAngle", value);
}

float XRMediaEquirectLayerInit::lowerVerticalAngle() const {
    return emlite::Val::get("lowerVerticalAngle").as<float>();
}

void XRMediaEquirectLayerInit::lowerVerticalAngle(float value) {
    emlite::Val::set("lowerVerticalAngle", value);
}


} // namespace webbind